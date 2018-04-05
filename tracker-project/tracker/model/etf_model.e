note
	description: "A tracker model"
	author: "Tao Wang"
	date: "$Date$"
	revision: "$Revision$"

class
	TRACKER

inherit

	ANY
		redefine
			out
		end

create {TRACKER_ACCESS, ES_TEST}
	make

feature -- model attributes

	state_num: INTEGER

	max_phase_rediation: VALUE

	max_container_radiation: VALUE

	error: detachable TRACKER_ERROR

	phases: ARRAY [PHASE]

	history: TWO_WAY_LIST [OPERATION]

	-- flags
	no_more_to_undo: BOOLEAN

	no_more_to_redo: BOOLEAN

	after_undo_or_redo: BOOLEAN

feature {NONE} -- Initialization

	make
		do
			state_num := 0
			error := Void
			create phases.make_empty
			create history.make
			no_more_to_undo := false
			no_more_to_redo := false
			after_undo_or_redo := false

			--create a default tracker that serves as a sentinel!
			clear_history_then_append (create {NEW_TRACKER}.make (Current, create {VALUE}.make_from_int (0), create {VALUE}.make_from_int (0)))
		end

feature -- model operations

	state_num_update
			-- Perform update to the model state.
		do
			state_num := state_num + 1
		end

	reset
			-- Reset model state.
		do
			make
		end

	new_tracker (m_p_r: VALUE m_c_r: VALUE)
		local
			new_tracker_opt: NEW_TRACKER
		do
			create new_tracker_opt.make (Current, m_p_r, m_c_r)
			new_tracker_opt.execute
			if new_tracker_opt.has_error then
				remove_all_right_then_append(new_tracker_opt)
			else
				clear_history_then_append(new_tracker_opt)
			end

			no_more_to_undo := false
			no_more_to_redo := false
			after_undo_or_redo := false
		end

	new_phase (pid: STRING phase_name:STRING capacity:INTEGER expected_material:ARRAY[INTEGER])
	local
		new_phase_opt: NEW_PHASE
	do
		create new_phase_opt.make (Current, pid, phase_name, capacity, expected_material)
		new_phase_opt.execute
		if new_phase_opt.has_error then
			remove_all_right_then_append (new_phase_opt)
		else
			remove_all_right_then_append (new_phase_opt)
		end

		no_more_to_undo := false
		no_more_to_redo := false
		after_undo_or_redo := false
	end

	remove_phase (pid: STRING)
	local
		remove_phase_opt: REMOVE_PHASE
	do
		create remove_phase_opt.make (Current, pid)
		remove_phase_opt.execute
		remove_all_right_then_append (remove_phase_opt)

		no_more_to_undo := false
		no_more_to_redo := false
	end

	new_container (cid: STRING material_id: INTEGER radiation:VALUE pid: STRING)
	local
		new_container_opt: NEW_CONTAINER
	do
		create new_container_opt.make (Current, cid, material_id, radiation, pid)
		new_container_opt.execute
		remove_all_right_then_append (new_container_opt)

		no_more_to_undo := false
		no_more_to_redo := false
		after_undo_or_redo := false
	end

	remove_container (cid: STRING)
	local
		remove_container_opt: REMOVE_CONTAINER
	do
		create remove_container_opt.make (Current, cid)
		remove_container_opt.execute
		remove_all_right_then_append (remove_container_opt)

		no_more_to_undo := false
		no_more_to_redo := false
		after_undo_or_redo := false
	end

	move_container (cid: STRING pid1: STRING pid2: STRING)
	local
		move_container_opt: MOVE_CONTAINER
	do
		create move_container_opt.make (Current, cid, pid1, pid2)
		move_container_opt.execute
		remove_all_right_then_append (move_container_opt)

		no_more_to_undo := false
		no_more_to_redo := false
		after_undo_or_redo := false
	end

	undo
		do
			if history.isfirst then
				no_more_to_undo := true
				no_more_to_redo := false
				after_undo_or_redo := false
			else
				history.item.undo
				history.back

				no_more_to_undo := false
				no_more_to_redo := false
				after_undo_or_redo := true  --Be aware here!!
			end
		end

	redo
		do
			if history.islast then
				no_more_to_undo := false
				no_more_to_redo := true
				after_undo_or_redo := false
			else
				history.forth
				history.item.redo

				no_more_to_undo := false
				no_more_to_redo := false
				after_undo_or_redo := true
			end
		end


feature {OPERATION} -- setters

	set_max_phase_radiation (mpr: VALUE)
		do
			max_phase_rediation := mpr
		end

	set_max_container_radiation (mcr: VALUE)
		do
			max_container_radiation := mcr
		end

	set_error (e: detachable TRACKER_ERROR)
		do
			error := e
		end

	set_phases (p: ARRAY [PHASE])
		do
			phases := p
		end

feature -- queries

	out: STRING
		do
			if after_undo_or_redo then
				Result := "  state " + state_num.out + " (to " + (history.item.state_number + 1).out + ")" + " ";
			else
				Result := "  state " + state_num.out + " ";
			end

			if no_more_to_undo then
				Result := Result + (create {TRACKER_ERROR_ACCESS}).e19.out
			elseif no_more_to_redo then
				Result := Result + (create {TRACKER_ERROR_ACCESS}).e20.out
			elseif error /= Void then
				check attached error as e then
					Result := Result + e.out
				end
			else
				Result := Result + "ok%N"
				Result := Result + "  " + "max_phase_radiation: " + max_phase_rediation.out + ", " + "max_container_radiation: " + max_container_radiation.out + "%N"
				Result := Result + "  " + "phases: pid->name:capacity,count,radiation%N"
				Result := Result + phase_list_string
				Result := Result + "  " + "containers: cid->pid->material,radioactivity%N"
				Result := Result + container_list_string
				Result.remove (Result.count)
			end
		end

	in_use: BOOLEAN
			-- Whether this tracker is in use
		local
			count: INTEGER
		do
			if phases.count = 0 then
				Result := false
			else
				count := 0
				across
					phases as it
				loop
					count := count + it.item.containers.count
				end
				if count = 0 then
					Result := false
				else
					Result := true
				end
			end
		end

	has_phase (pid: STRING): BOOLEAN
		do
			Result := across phases as it some it.item.pid ~ pid end
		end

	has_container (cid: STRING): BOOLEAN
		do
			Result := false
			across
				phases as i1
			loop
				if across i1.item.containers as i2 some i2.item.cid ~ cid end then
					Result := true
				end
			end
		end

	query_by_phase_id (pid: STRING): PHASE
		require
			pid_exists: has_phase (pid)
		local
			temp: detachable PHASE
		do
			across
				phases as it
			loop
				if it.item.pid ~ pid then
					temp := it.item
				end
			end
			check attached temp as t then
				Result := temp
			end
		ensure
			result_not_void: Result /= Void
			result_correct: Result.pid ~ pid
		end

	query_by_container_id (cid: STRING): RADIATION_CONTAINER
		require
			cid_exists: has_container (cid)
		local
			temp: detachable RADIATION_CONTAINER
		do
			across
				phases as i1
			loop
				across
					i1.item.containers as i2
				loop
					if i2.item.cid ~ cid then
						temp := i2.item
					end
				end
			end
			check attached temp as t then
				Result := temp
			end
		ensure
			result_not_void: Result /= Void
			result_correct: Result.cid ~ cid
		end

	query_phase_by_container_id(cid: STRING): PHASE
		require
			cid_exists: has_container (cid)
		local
			temp: detachable PHASE
		do
			across
				phases as i1
			loop
				across
					i1.item.containers as i2
				loop
					if i2.item.cid ~ cid then
						temp := i1.item
					end
				end
			end
			check attached temp as t then
				Result := temp
			end
		ensure
			result_not_void: Result /= Void
			result_correct: across Result.containers as it some it.item.cid ~ cid  end
		end


feature {NONE} -- Commands

	remove_all_right
			-- remove all operations on the right of the current cursor in history list
		require
			cursor_is_not_last: not history.islast
		do
			from
			until
				history.islast
			loop
				history.remove_right
			end
		ensure
			cursor_not_moved: (old history.item) = history.item
			all_right_ones_removed: history.islast
		end

	remove_all_right_then_append (opt: OPERATION)
		do
			if not (history.is_empty or history.islast) then
				remove_all_right
			end
			history.extend (opt)
			history.finish -- move the cursor to the last
		end

	clear_history_then_append (opt: OPERATION)
		do
			create history.make --clear the history to start a new tracker
			history.extend (opt)
			history.finish -- move the cursor to the last
		end

	phase_list_string:STRING
	local
		qs: QUICKSORT[PHASE]
		arr: ARRAY[PHASE]
		phase: PHASE
	do
		create qs.make
		arr := qs.quicksort (phases)

		Result := ""
		across arr as it loop
			phase := it.item
			Result := Result + "    " + phase.pid + "->" + phase.phase_name + ":" +
				phase.capacity.out + "," + phase.containers.count.out + "," + phase.radiation.out + ","
				+ (create {MATERIAL}).material_list_string (phase.expected_materials) + "%N"
		end
	end

	container_list_string: STRING
	local
		qs: QUICKSORT[RADIATION_CONTAINER]
		phase: PHASE
		seq: SEQ[RADIATION_CONTAINER]
		arr: ARRAY[RADIATION_CONTAINER]
		container: RADIATION_CONTAINER
	do
		create qs.make

		create seq.make_empty
		across phases as i loop
			phase := i.item
			across phase.containers as it loop
				seq.append (it.item)
			end
		end

		arr := qs.quicksort ((seq.as_array))


		Result := ""
		across arr as it loop
			container := it.item
			Result := Result + "    " + container.cid + "->" + query_phase_by_container_id (container.cid).pid
				+ "->" + (create {MATERIAL}).list[container.material_id] + "," + container.radioactivity.out + "%N"
		end
	end

end
