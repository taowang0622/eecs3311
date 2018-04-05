note
	description: "Summary description for {NEW_CONTAINER}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	NEW_CONTAINER

inherit
	OPERATION

create
	make

feature -- Attributes
	cid: STRING
	material_id: INTEGER
	radioactivity: VALUE
	pid: STRING

	old_error: detachable TRACKER_ERROR
	new_container: detachable RADIATION_CONTAINER

feature -- Initialization
	make(t: TRACKER c_id:STRING m_id:INTEGER r:VALUE p_id:STRING)
	do
		tracker := t
		has_error := false
		error := Void

		cid := c_id
		material_id := m_id
		radioactivity := r
		pid := p_id

		new_container := Void
	end

	execute
	do
		state_number := tracker.state_num
		old_error := tracker.error

		has_error := true
		if not is_valid_string(cid)  then
			error := (create {TRACKER_ERROR_ACCESS}).e5
		elseif across tracker.phases as it some it.item.has_container(cid) end then
			error := (create {TRACKER_ERROR_ACCESS}).e10
		elseif not is_valid_string (pid) then
			error := (create {TRACKER_ERROR_ACCESS}).e5
		elseif not tracker.has_phase(pid) then
			error := (create {TRACKER_ERROR_ACCESS}).e9
		elseif radioactivity < 0.0 then
			error := (create {TRACKER_ERROR_ACCESS}).e18
		elseif tracker.query_by_phase_id(pid).is_full then
			error := (create {TRACKER_ERROR_ACCESS}).e11
		elseif radioactivity > tracker.max_container_radiation then
			error := (create {TRACKER_ERROR_ACCESS}).e14
		elseif radioactivity > tracker.max_phase_rediation - tracker.query_by_phase_id(pid).radiation then
			error := (create {TRACKER_ERROR_ACCESS}).e12
		elseif not tracker.query_by_phase_id(pid).expected_materials.has (material_id) then
			error := (create {TRACKER_ERROR_ACCESS}).e13
		else
			has_error := false
			error := Void

			new_container := create {RADIATION_CONTAINER}.make (cid, material_id, radioactivity)
			check attached new_container as nc then
				tracker.query_by_phase_id (pid).add_new_container (nc)
			end
		end

		tracker.set_error (error)
	end

	undo
	local
		seq: SEQ[PHASE]
	do
		if not has_error then
			check attached new_container as nc then
				tracker.query_by_phase_id (pid).remove_container (nc)
			end
		end

		tracker.set_error (old_error)
	ensure then
		state_is_restored:
			tracker.error = old_error and
				((not has_error) implies across tracker.phases as it all not it.item.has_container (cid) end)
	end

end

