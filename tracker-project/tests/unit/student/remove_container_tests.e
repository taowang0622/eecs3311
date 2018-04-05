note
	description: "Summary description for {REMOVE_CONTAINER_TESTS}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	REMOVE_CONTAINER_TESTS

inherit

	ES_TEST

create
	make

feature

	make
		do
			add_boolean_case (agent test1)
			add_boolean_case (agent test_e15)
		end

feature -- boolean
	test1: BOOLEAN
	local
			opt: OPERATION
			tracker: TRACKER
		do
			comment("test successful execution, undo and redo")
			create tracker.make
			opt := create {NEW_TRACKER}.make (tracker, create {VALUE}.make_from_int (20), create {VALUE}.make_from_int (10))
			opt.execute
			check tracker.max_phase_rediation = 20.0 and tracker.max_container_radiation = 10.0 end
			opt := create {NEW_PHASE}.make (tracker, "pid1", "compressing", 10, <<1, 2, 3>>)
			opt.execute
			opt := create {NEW_PHASE}.make (tracker, "pid2", "purifying", 5, <<2, 3>>)
			opt.execute
			check tracker.phases.count = 2 end

			opt := create {NEW_CONTAINER}.make (tracker, "cid1", 1, create {VALUE}.make_from_int (5), "pid1")
			opt.execute
			check tracker.has_container ("cid1") end

			opt := create {REMOVE_CONTAINER}.make (tracker, "cid1")
			opt.execute
			check tracker.error = Void and not tracker.has_container ("cid1") end

			opt.undo
			check tracker.has_container ("cid1") and tracker.error = Void end

			opt.redo
			check tracker.error = Void and not tracker.has_container ("cid1") end

			Result := true
		end

	test_e15:BOOLEAN
	local
			opt: OPERATION
			tracker: TRACKER
		do
			comment("test e15: this container identifier not in tracker")
			create tracker.make
			opt := create {NEW_TRACKER}.make (tracker, create {VALUE}.make_from_int (20), create {VALUE}.make_from_int (10))
			opt.execute
			check tracker.max_phase_rediation = 20.0 and tracker.max_container_radiation = 10.0 end
			opt := create {NEW_PHASE}.make (tracker, "pid1", "compressing", 10, <<1, 2, 3>>)
			opt.execute
			opt := create {NEW_PHASE}.make (tracker, "pid2", "purifying", 5, <<2, 3>>)
			opt.execute
			check tracker.phases.count = 2 end

			opt := create {NEW_CONTAINER}.make (tracker, "cid1", 1, create {VALUE}.make_from_int (5), "pid1")
			opt.execute
			check tracker.has_container ("cid1") end

			opt := create {REMOVE_CONTAINER}.make (tracker, "cid3")
			opt.execute
			check tracker.error = (create {TRACKER_ERROR_ACCESS}).e15 and not tracker.has_phase ("cid3") end

			Result := true
		end

end

