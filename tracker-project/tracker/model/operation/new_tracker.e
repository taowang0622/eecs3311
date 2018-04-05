note
	description: "Summary description for {NEW_TRACKER}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	NEW_TRACKER

inherit
	OPERATION

create
	make

feature -- Attributes
	max_phase_radiation: VALUE
	old_max_phase_radiation: VALUE
	max_container_radiation: VALUE
	old_max_container_radiation: VALUE
	old_error: detachable TRACKER_ERROR

feature -- Initialization
	make(t:TRACKER mpr:VALUE mcr:VALUE)
	do
		tracker := t
		has_error := false
		error := Void

		max_phase_radiation := mpr
		max_container_radiation := mcr
	end

	execute
	do
--		store state_number and error no matter execution is gonna succeed or not
		state_number := tracker.state_num
		old_error := tracker.error
		if tracker.in_use then
			has_error := true
			error := (create {TRACKER_ERROR_ACCESS}).e1
		elseif max_phase_radiation < 0.0 then
			has_error := true
			error := (create {TRACKER_ERROR_ACCESS}).e2
		elseif max_container_radiation < 0.0 then
			has_error := true
			error := (create {TRACKER_ERROR_ACCESS}).e3
		elseif max_container_radiation > max_phase_radiation then
			has_error := true
			error := (create {TRACKER_ERROR_ACCESS}).e4
		else
			has_error := false
			error := Void
			old_max_phase_radiation := tracker.max_phase_rediation
			tracker.set_max_phase_radiation (max_phase_radiation)
			old_max_container_radiation := tracker.max_container_radiation
			tracker.set_max_container_radiation (max_container_radiation)
		end
--		the state after execution to indicate if successful
		tracker.set_error (error)
	end

	undo
	do
		if not has_error then
			tracker.set_max_phase_radiation (old_max_phase_radiation)
			tracker.set_max_container_radiation (old_max_container_radiation)
			tracker.set_error (old_error)
		else
			tracker.set_error (old_error)
		end
	end

end
