note
	description: "Summary description for {MOVE_CONTAINER_TESTS}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	MOVE_CONTAINER_TESTS

inherit

	ES_TEST

create
	make

feature

	make
		do
			add_boolean_case (agent test1)
			add_boolean_case (agent test_e15)
			add_boolean_case (agent test_e16)
			add_boolean_case (agent test_e9)
			add_boolean_case (agent test_e17)
			add_boolean_case (agent test_e11)
			add_boolean_case (agent test_e12)
			add_boolean_case (agent test_e13)
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

			opt := create {NEW_CONTAINER}.make (tracker, "cid1", 2, create {VALUE}.make_from_int (5), "pid1")
			opt.execute
			check tracker.query_by_phase_id ("pid1").containers[1].cid ~ "cid1" end

			opt := create {MOVE_CONTAINER}.make(tracker, "cid1", "pid1", "pid2")
			opt.execute
			check tracker.error = Void and tracker.has_container ("cid1") and tracker.query_by_phase_id ("pid1").containers.count = 0
			and tracker.query_by_phase_id ("pid2").containers[1].cid ~ "cid1" end

			opt.undo
			check tracker.query_by_phase_id ("pid1").containers[1].cid ~ "cid1" and tracker.error = Void end

			opt.redo
			check tracker.error = Void and tracker.has_container ("cid1") and tracker.query_by_phase_id ("pid1").containers.count = 0
			and tracker.query_by_phase_id ("pid2").containers[1].cid ~ "cid1" end

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

			opt := create {NEW_CONTAINER}.make (tracker, "cid1", 2, create {VALUE}.make_from_int (5), "pid1")
			opt.execute
			check tracker.has_container ("cid1") end

			opt := create {MOVE_CONTAINER}.make (tracker, "cid3", "pid1", "pid2")
			opt.execute
			check tracker.error = (create {TRACKER_ERROR_ACCESS}).e15 end

			Result := true
		end

	test_e16:BOOLEAN
	local
			opt: OPERATION
			tracker: TRACKER
		do
			comment("teste 16: source and target phase identifier must be different")
			create tracker.make
			opt := create {NEW_TRACKER}.make (tracker, create {VALUE}.make_from_int (20), create {VALUE}.make_from_int (10))
			opt.execute
			check tracker.max_phase_rediation = 20.0 and tracker.max_container_radiation = 10.0 end
			opt := create {NEW_PHASE}.make (tracker, "pid1", "compressing", 10, <<1, 2, 3>>)
			opt.execute
			opt := create {NEW_PHASE}.make (tracker, "pid2", "purifying", 5, <<2, 3>>)
			opt.execute
			check tracker.phases.count = 2 end

			opt := create {NEW_CONTAINER}.make (tracker, "cid1", 2, create {VALUE}.make_from_int (5), "pid1")
			opt.execute
			check tracker.has_container ("cid1") end

			opt := create {MOVE_CONTAINER}.make (tracker, "cid1", "pid1", "pid1")
			opt.execute
			check tracker.error = (create {TRACKER_ERROR_ACCESS}).e16 end

			Result := true
		end

	test_e9:BOOLEAN
	local
			opt: OPERATION
			tracker: TRACKER
		do
			comment("teste e9: phase identifier not in the system")
			create tracker.make
			opt := create {NEW_TRACKER}.make (tracker, create {VALUE}.make_from_int (20), create {VALUE}.make_from_int (10))
			opt.execute
			check tracker.max_phase_rediation = 20.0 and tracker.max_container_radiation = 10.0 end
			opt := create {NEW_PHASE}.make (tracker, "pid1", "compressing", 10, <<1, 2, 3>>)
			opt.execute
			opt := create {NEW_PHASE}.make (tracker, "pid2", "purifying", 5, <<2, 3>>)
			opt.execute
			check tracker.phases.count = 2 end

			opt := create {NEW_CONTAINER}.make (tracker, "cid1", 2, create {VALUE}.make_from_int (5), "pid1")
			opt.execute
			check tracker.has_container ("cid1") end

			opt := create {MOVE_CONTAINER}.make (tracker, "cid1", "pid3", "pid2")
			opt.execute
			check tracker.error = (create {TRACKER_ERROR_ACCESS}).e9 end

			opt := create {MOVE_CONTAINER}.make (tracker, "cid1", "pid1", "pid4")
			opt.execute
			check tracker.error = (create {TRACKER_ERROR_ACCESS}).e9 end

			Result := true
		end

	test_e17:BOOLEAN
	local
			opt: OPERATION
			tracker: TRACKER
		do
			comment("teste e17: this container identifier is not in the source phase")
			create tracker.make
			opt := create {NEW_TRACKER}.make (tracker, create {VALUE}.make_from_int (20), create {VALUE}.make_from_int (10))
			opt.execute
			check tracker.max_phase_rediation = 20.0 and tracker.max_container_radiation = 10.0 end
			opt := create {NEW_PHASE}.make (tracker, "pid1", "compressing", 10, <<1, 2, 3>>)
			opt.execute
			opt := create {NEW_PHASE}.make (tracker, "pid2", "purifying", 5, <<2, 3>>)
			opt.execute
			check tracker.phases.count = 2 end

			opt := create {NEW_CONTAINER}.make (tracker, "cid1", 2, create {VALUE}.make_from_int (5), "pid1")
			opt.execute
			check tracker.has_container ("cid1") end

			opt := create {MOVE_CONTAINER}.make (tracker, "cid1", "pid2", "pid1")
			opt.execute
			check tracker.error = (create {TRACKER_ERROR_ACCESS}).e17 end

			Result := true
		end

	test_e11:BOOLEAN
	local
			opt: OPERATION
			tracker: TRACKER
		do
			comment("teste e11: this container will exceed phase capacity")
			create tracker.make
			opt := create {NEW_TRACKER}.make (tracker, create {VALUE}.make_from_int (20), create {VALUE}.make_from_int (10))
			opt.execute
			check tracker.max_phase_rediation = 20.0 and tracker.max_container_radiation = 10.0 end
			opt := create {NEW_PHASE}.make (tracker, "pid1", "compressing", 10, <<1, 2, 3>>)
			opt.execute
			opt := create {NEW_PHASE}.make (tracker, "pid2", "purifying", 1, <<2, 3>>)
			opt.execute
			check tracker.phases.count = 2 end

			opt := create {NEW_CONTAINER}.make (tracker, "cid1", 2, create {VALUE}.make_from_int (5), "pid1")
			opt.execute
			check tracker.has_container ("cid1") end

			opt := create {NEW_CONTAINER}.make (tracker, "cid2", 2, create {VALUE}.make_from_int (5), "pid2")
			opt.execute
			check tracker.has_container ("cid2") end

			opt := create {MOVE_CONTAINER}.make (tracker, "cid1", "pid1", "pid2")
			opt.execute
			check tracker.error = (create {TRACKER_ERROR_ACCESS}).e11 end

			Result := true
		end

	test_e12:BOOLEAN
	local
			opt: OPERATION
			tracker: TRACKER
		do
			comment("teste e12: this container will exceed phase safe radiation")
			create tracker.make
			opt := create {NEW_TRACKER}.make (tracker, create {VALUE}.make_from_int (20), create {VALUE}.make_from_int (20))
			opt.execute
			check tracker.max_phase_rediation = 20.0 and tracker.max_container_radiation = 20.0 end
			opt := create {NEW_PHASE}.make (tracker, "pid1", "compressing", 10, <<1, 2, 3>>)
			opt.execute
			opt := create {NEW_PHASE}.make (tracker, "pid2", "purifying", 2, <<2, 3>>)
			opt.execute
			check tracker.phases.count = 2 end

			opt := create {NEW_CONTAINER}.make (tracker, "cid1", 2, create {VALUE}.make_from_int (6), "pid1")
			opt.execute
			check tracker.has_container ("cid1") end

			opt := create {NEW_CONTAINER}.make (tracker, "cid2", 2, create {VALUE}.make_from_int (15), "pid2")
			opt.execute
			check tracker.has_container ("cid2") end

			opt := create {MOVE_CONTAINER}.make (tracker, "cid1", "pid1", "pid2")
			opt.execute
			check tracker.error = (create {TRACKER_ERROR_ACCESS}).e12 end

			Result := true
		end

	test_e13:BOOLEAN
	local
			opt: OPERATION
			tracker: TRACKER
		do
			comment("teste e13: phase does not expect this container material")
			create tracker.make
			opt := create {NEW_TRACKER}.make (tracker, create {VALUE}.make_from_int (20), create {VALUE}.make_from_int (20))
			opt.execute
			check tracker.max_phase_rediation = 20.0 and tracker.max_container_radiation = 20.0 end
			opt := create {NEW_PHASE}.make (tracker, "pid1", "compressing", 10, <<1, 2, 3>>)
			opt.execute
			opt := create {NEW_PHASE}.make (tracker, "pid2", "purifying", 2, <<2, 3>>)
			opt.execute
			check tracker.phases.count = 2 end

			opt := create {NEW_CONTAINER}.make (tracker, "cid1", 1, create {VALUE}.make_from_int (6), "pid1")
			opt.execute
			check tracker.has_container ("cid1") end

			opt := create {MOVE_CONTAINER}.make (tracker, "cid1", "pid1", "pid2")
			opt.execute
			check tracker.error = (create {TRACKER_ERROR_ACCESS}).e13 end

			Result := true
		end

end

