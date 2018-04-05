note
	description: "Summary description for {REMOVE_CONTAINER}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	REMOVE_CONTAINER

inherit
	OPERATION

create
	make

feature -- Attributes
	cid: STRING

	old_error: detachable TRACKER_ERROR
	removed_container: detachable RADIATION_CONTAINER
	phase: detachable PHASE

feature -- Initialization
	make(t: TRACKER c_id: STRING)
	do
		tracker := t
		has_error := false
		error := Void

		cid := c_id
		removed_container := Void
		phase := Void
	end

	execute
	do
		state_number := tracker.state_num
		old_error := tracker.error

		has_error := true
		if not tracker.has_container (cid) then
			error := (create {TRACKER_ERROR_ACCESS}).e15
		else
			has_error := false
			error := Void


			removed_container := tracker.query_by_container_id (cid)
			across tracker.phases as i1 loop
				across i1.item.containers as i2 loop
					if i2.item = removed_container then
						phase := i1.item
						check attached removed_container as rc then
							i1.item.remove_container(rc)
						end
					end
				end
			end
		end

		tracker.set_error (error)
	end

	undo
	do
		if not has_error then
			check attached removed_container as rc then
				check attached phase as p then
					p.add_new_container(rc)
				end
			end
		end

		tracker.set_error (old_error)
	end

end

