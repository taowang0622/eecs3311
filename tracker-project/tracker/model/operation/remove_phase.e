note
	description: "Summary description for {REMOVE_PHASE}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	REMOVE_PHASE

inherit
	OPERATION

create
	make

feature -- Attributes
	pid: STRING

	old_error: detachable TRACKER_ERROR
	removed_phase: detachable PHASE

feature -- Initialization
	make(t: TRACKER p_id: STRING)
	do
		tracker := t
		has_error := false
		error := Void

		pid := p_id
		removed_phase := Void
	end

	execute
	local
		seq: SEQ[PHASE]
	do
		state_number := tracker.state_num
		old_error := tracker.error

		has_error := true
		if tracker.in_use  then
			error := (create {TRACKER_ERROR_ACCESS}).e1
		elseif not tracker.has_phase (pid) then
			error := (create {TRACKER_ERROR_ACCESS}).e9
		else
			has_error := false
			error := Void

			removed_phase := tracker.query_by_phase_id (pid)
			check attached removed_phase as rp then
				create seq.make_empty
				across tracker.phases as it loop
					if it.item /~ removed_phase then
						seq.append (it.item)
					end
				end
			end
			tracker.set_phases (seq.as_array)
		end

		tracker.set_error (error)
	end

	undo
	do
		if not has_error then
			check attached removed_phase as rp then
				tracker.phases.force (rp, tracker.phases.upper + 1)
			end
		end

		tracker.set_error (old_error)
	ensure then
		state_is_restored:
			tracker.error = old_error and
				((not has_error) implies across tracker.phases as it some it.item = removed_phase  end)
	end

end
