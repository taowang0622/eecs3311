note
	description: "Summary description for {MOVE_CONTAINER}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	MOVE_CONTAINER

inherit
	OPERATION

create
	make

feature -- Attributes
	cid: STRING
	pid1: STRING
	pid2: STRING

	old_error: detachable TRACKER_ERROR
	moved_container: detachable RADIATION_CONTAINER

feature -- Initialization
	make(t: TRACKER c_id: STRING p_id1: STRING p_id2: STRING)
	do
		tracker := t
		has_error := false
		error := Void

		cid := c_id
		pid1 := p_id1
		pid2 := p_id2
		moved_container := Void
	end

	execute
	do
		state_number := tracker.state_num
		old_error := tracker.error

		has_error := true
		if not tracker.has_container (cid) then
			error := (create {TRACKER_ERROR_ACCESS}).e15
		elseif pid1 ~ pid2 then
			error := (create {TRACKER_ERROR_ACCESS}).e16
		elseif not tracker.has_phase (pid1) or not tracker.has_phase (pid2) then
			error := (create {TRACKER_ERROR_ACCESS}).e9
		elseif not tracker.query_by_phase_id (pid1).has_container (cid) then
			error := (create {TRACKER_ERROR_ACCESS}).e17
		elseif tracker.query_by_phase_id (pid2).is_full then
			error := (create {TRACKER_ERROR_ACCESS}).e11
		elseif tracker.query_by_phase_id (pid2).radiation + tracker.query_by_container_id (cid).radioactivity > tracker.max_phase_rediation then
			error := (create {TRACKER_ERROR_ACCESS}).e12
		elseif not tracker.query_by_phase_id (pid2).expected_materials.has (tracker.query_by_container_id (cid).material_id) then
			error := (create {TRACKER_ERROR_ACCESS}).e13
		else
			has_error := false
			error := Void

			moved_container := tracker.query_by_container_id (cid)
			check attached moved_container as mc then
				tracker.query_by_phase_id (pid1).remove_container (mc)
				tracker.query_by_phase_id (pid2).add_new_container (mc)
			end
		end

		tracker.set_error (error)
	end

	undo
	do
		if not has_error then
			check attached moved_container as mc then
				tracker.query_by_phase_id (pid1).add_new_container (mc)
				tracker.query_by_phase_id (pid2).remove_container (mc)
			end
		end

		tracker.set_error (old_error)
	end

end


