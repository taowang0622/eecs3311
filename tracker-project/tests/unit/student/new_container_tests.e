note
	description: "Summary description for {NEW_CONTAINER_TESTS}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	NEW_CONTAINER_TESTS

inherit

	ES_TEST

create
	make

feature

	make
		do
			add_boolean_case (agent test1)
			add_boolean_case (agent test_e5)
			add_boolean_case (agent test_e10)
			add_boolean_case (agent test_e18)
			add_boolean_case (agent test_e11)
			add_boolean_case (agent test_e14)
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
			check tracker.error = Void and tracker.query_by_phase_id ("pid1").has_container ("cid1") end

			opt.undo
			check across tracker.phases as it all not it.item.has_container ("cid1") end and tracker.error = Void end

			opt.redo
			check tracker.error = Void and tracker.query_by_phase_id ("pid1").has_container ("cid1") end

			Result := true
		end

	test_e5: BOOLEAN
		local
			opt: OPERATION
			tracker: TRACKER
		do
			comment("test e5: identifiers/names must start with A-Z, a-z or 0..9")
			create tracker.make
			opt := create {NEW_TRACKER}.make (tracker, create {VALUE}.make_from_int (20), create {VALUE}.make_from_int (10))
			opt.execute
			check tracker.max_phase_rediation = 20.0 and tracker.max_container_radiation = 10.0 end
			opt := create {NEW_PHASE}.make (tracker, "pid1", "compressing", 10, <<1, 2, 3>>)
			opt.execute
			opt := create {NEW_PHASE}.make (tracker, "pid2", "purifying", 5, <<2, 3>>)
			opt.execute
			check tracker.phases.count = 2 end

			opt := create {NEW_CONTAINER}.make (tracker, "@1", 2, create {VALUE}.make_from_int (5), "pid1")
			opt.execute
			check tracker.error = (create {TRACKER_ERROR_ACCESS}).e5 and across tracker.phases as it all it.item.containers.is_empty end end

			opt := create {NEW_CONTAINER}.make (tracker, "1222", 2, create {VALUE}.make_from_int (5), "#22")
			opt.execute
			check tracker.error = (create {TRACKER_ERROR_ACCESS}).e5 and across tracker.phases as it all it.item.containers.is_empty end end

			Result := true
		end

	test_e10: BOOLEAN
		local
			opt: OPERATION
			tracker: TRACKER
		do
			comment("test e10: this container identifier already in tracker")
			create tracker.make
			opt := create {NEW_TRACKER}.make (tracker, create {VALUE}.make_from_int (20), create {VALUE}.make_from_int (10))
			opt.execute
			check tracker.max_phase_rediation = 20.0 and tracker.max_container_radiation = 10.0 end
			opt := create {NEW_PHASE}.make (tracker, "pid1", "compressing", 10, <<1, 2, 3>>)
			opt.execute
			opt := create {NEW_PHASE}.make (tracker, "pid2", "purifying", 5, <<2, 3>>)
			opt.execute
			check tracker.phases.count = 2 end

			opt := create {NEW_CONTAINER}.make (tracker, "1", 2, create {VALUE}.make_from_int (5), "pid1")
			opt.execute

			opt := create {NEW_CONTAINER}.make (tracker, "1", 1, create {VALUE}.make_from_int (5), "pid1")
			opt.execute
			check tracker.error = (create {TRACKER_ERROR_ACCESS}).e10 and tracker.query_by_phase_id ("pid1").containers.count = 1 end

			Result := true
		end

	test_e18: BOOLEAN
		local
			opt: OPERATION
			tracker: TRACKER
		do
			comment("test e18: this container radiation must not be negative")
			create tracker.make
			opt := create {NEW_TRACKER}.make (tracker, create {VALUE}.make_from_int (20), create {VALUE}.make_from_int (10))
			opt.execute
			check tracker.max_phase_rediation = 20.0 and tracker.max_container_radiation = 10.0 end
			opt := create {NEW_PHASE}.make (tracker, "pid1", "compressing", 10, <<1, 2, 3>>)
			opt.execute
			opt := create {NEW_PHASE}.make (tracker, "pid2", "purifying", 5, <<2, 3>>)
			opt.execute
			check tracker.phases.count = 2 end

			opt := create {NEW_CONTAINER}.make (tracker, "1", 1, create {VALUE}.make_from_int (-5), "pid1")
			opt.execute
			check tracker.error = (create {TRACKER_ERROR_ACCESS}).e18 and tracker.query_by_phase_id ("pid1").containers.count = 0 end

			Result := true
		end

	test_e11: BOOLEAN
		local
			opt: OPERATION
			tracker: TRACKER
		do
			comment("test e11: this container will exceed phase capacity")
			create tracker.make
			opt := create {NEW_TRACKER}.make (tracker, create {VALUE}.make_from_int (20), create {VALUE}.make_from_int (10))
			opt.execute
			check tracker.max_phase_rediation = 20.0 and tracker.max_container_radiation = 10.0 end
			opt := create {NEW_PHASE}.make (tracker, "pid1", "compressing", 1, <<1, 2, 3>>)
			opt.execute
			opt := create {NEW_PHASE}.make (tracker, "pid2", "purifying", 5, <<2, 3>>)
			opt.execute
			check tracker.phases.count = 2 end

			opt := create {NEW_CONTAINER}.make (tracker, "1", 1, create {VALUE}.make_from_int (5), "pid1")
			opt.execute

			opt := create {NEW_CONTAINER}.make (tracker, "2", 1, create {VALUE}.make_from_int (5), "pid1")
			opt.execute
			check tracker.error = (create {TRACKER_ERROR_ACCESS}).e11 and tracker.query_by_phase_id ("pid1").containers.count = 1 end

			Result := true
		end

	test_e14: BOOLEAN
		local
			opt: OPERATION
			tracker: TRACKER
		do
			comment("test e14: container radiation capacity exceeded")
			create tracker.make
			opt := create {NEW_TRACKER}.make (tracker, create {VALUE}.make_from_int (20), create {VALUE}.make_from_int (10))
			opt.execute
			check tracker.max_phase_rediation = 20.0 and tracker.max_container_radiation = 10.0 end
			opt := create {NEW_PHASE}.make (tracker, "pid1", "compressing", 1, <<1, 2, 3>>)
			opt.execute
			opt := create {NEW_PHASE}.make (tracker, "pid2", "purifying", 5, <<2, 3>>)
			opt.execute
			check tracker.phases.count = 2 end

			opt := create {NEW_CONTAINER}.make (tracker, "2", 1, create {VALUE}.make_from_int (12), "pid1")
			opt.execute
			check tracker.error = (create {TRACKER_ERROR_ACCESS}).e14 and tracker.query_by_phase_id ("pid1").containers.count = 0 end

			Result := true
		end

	test_e12: BOOLEAN
		local
			opt: OPERATION
			tracker: TRACKER
		do
			comment("test e12: this container will exceed phase safe radiation")
			create tracker.make
			opt := create {NEW_TRACKER}.make (tracker, create {VALUE}.make_from_int (20), create {VALUE}.make_from_int (15))
			opt.execute
			check tracker.max_phase_rediation = 20.0 and tracker.max_container_radiation = 15.0 end
			opt := create {NEW_PHASE}.make (tracker, "pid1", "compressing", 3, <<1, 2, 3>>)
			opt.execute
			opt := create {NEW_PHASE}.make (tracker, "pid2", "purifying", 5, <<2, 3>>)
			opt.execute
			check tracker.phases.count = 2 end

			opt := create {NEW_CONTAINER}.make (tracker, "1", 1, create {VALUE}.make_from_int (15), "pid1")
			opt.execute

			opt := create {NEW_CONTAINER}.make (tracker, "2", 1, create {VALUE}.make_from_int (10), "pid1")
			opt.execute
			check tracker.error = (create {TRACKER_ERROR_ACCESS}).e12 and tracker.query_by_phase_id ("pid1").containers.count = 1 end

			Result := true
		end

	test_e13: BOOLEAN
		local
			opt: OPERATION
			tracker: TRACKER
		do
			comment("test e13: phase does not expect this container material")
			create tracker.make
			opt := create {NEW_TRACKER}.make (tracker, create {VALUE}.make_from_int (20), create {VALUE}.make_from_int (15))
			opt.execute
			check tracker.max_phase_rediation = 20.0 and tracker.max_container_radiation = 15.0 end
			opt := create {NEW_PHASE}.make (tracker, "pid1", "compressing", 1, <<1, 2, 3>>)
			opt.execute
			opt := create {NEW_PHASE}.make (tracker, "pid2", "purifying", 5, <<2, 3>>)
			opt.execute
			check tracker.phases.count = 2 end

			opt := create {NEW_CONTAINER}.make (tracker, "1", 4, create {VALUE}.make_from_int (10), "pid1")
			opt.execute
			check tracker.error = (create {TRACKER_ERROR_ACCESS}).e13 and tracker.query_by_phase_id ("pid1").containers.count = 0 end

			Result := true
		end

feature --violation

end



