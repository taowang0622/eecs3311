note
	description: "Summary description for {NEW_PHASE}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	NEW_PHASE

inherit
	OPERATION

create
	make

feature -- Attributes
	pid: STRING
	phase_name: STRING
	capacity: INTEGER
	expected_materials: ARRAY[INTEGER]

	old_error: detachable TRACKER_ERROR
	new_phase: detachable PHASE

feature -- Initialization
	make(t: TRACKER id:STRING p_n:STRING c:INTEGER e_m:ARRAY[INTEGER])
	do
		tracker := t
		has_error := false
		error := Void

		pid := id
		phase_name := p_n
		capacity := c
		expected_materials := e_m

		new_phase := Void
	end

	execute
	do
		state_number := tracker.state_num
		old_error := tracker.error

		has_error := true
		if tracker.in_use then
			error := (create {TRACKER_ERROR_ACCESS}).e1
		elseif not is_valid_string(pid)  then
			error := (create {TRACKER_ERROR_ACCESS}).e5
		elseif not across tracker.phases as it all it.item.pid /~ pid end then
			error := (create {TRACKER_ERROR_ACCESS}).e6
		elseif not is_valid_string (phase_name) then
			error := (create {TRACKER_ERROR_ACCESS}).e5
		elseif capacity <= 0 then
			error := (create {TRACKER_ERROR_ACCESS}).e7
		elseif expected_materials.count = 0 then
			error := (create {TRACKER_ERROR_ACCESS}).e8
		else
			has_error := false
			error := Void

			new_phase := create {PHASE}.make (pid, phase_name, capacity, expected_materials)
			check attached new_phase as np then
				tracker.phases.force (np, tracker.phases.upper + 1)
			end
		end

		tracker.set_error (error)
	end

	undo
	local
		seq: SEQ[PHASE]
	do
		if has_error then
			tracker.set_error (old_error)
		else
			tracker.set_error (old_error)

			create seq.make_empty
			across tracker.phases as it loop
				if it.item /~ new_phase then
					seq.append (it.item)
				end
			end
			check seq.count = tracker.phases.count - 1 end

			tracker.set_phases (seq.as_array)
		end
	ensure then
		state_is_restored:
			tracker.error = old_error and across tracker.phases as it all it.item /= new_phase end
	end

end
