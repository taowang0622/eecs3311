note
	description: "Summary description for {NEW_PHASE_TESTS}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	NEW_PHASE_TESTS

inherit

	ES_TEST

create
	make

feature

	make
		do
			add_boolean_case (agent test1)
			add_boolean_case (agent test_e6)
			add_boolean_case (agent test_e5)
			add_boolean_case (agent test_e7)
			add_boolean_case (agent test_e8)
		end

feature -- boolean

	test1: BOOLEAN
		local
			opt1: OPERATION
			opt2: OPERATION
			tracker: TRACKER
		do
			comment("test successful execution, undo and redo")
			create tracker.make
			opt1 := create {NEW_PHASE}.make (tracker, "pid1", "compressing", 10, <<1, 2, 3>>)
			opt2 := create {NEW_PHASE}.make (tracker, "pid2", "purifying", 5, <<2, 3>>)
			opt1.execute
			check across tracker.phases as it some it.item.pid ~ "pid1" end and tracker.error = Void end
			opt2.execute
			check across tracker.phases as it some it.item.pid ~ "pid2" end and tracker.error = Void end

			opt1.undo
			check across tracker.phases as it all it.item.pid /~ "pid1" end and tracker.error = Void end

			opt1.redo
			check across tracker.phases as it some it.item.pid ~ "pid1" end and tracker.error = Void end

			Result := true
		end

	test_e6: BOOLEAN
		local
			opt1: OPERATION
			opt2: OPERATION
			tracker: TRACKER
		do
			comment("test e6: phase identifier already exists")
			create tracker.make
			opt1 := create {NEW_PHASE}.make (tracker, "pid1", "compressing", 10, <<1, 2, 3>>)
			opt2 := create {NEW_PHASE}.make (tracker, "pid1", "purifying", 5, <<2, 3>>)
			opt1.execute
			check tracker.phases.count = 1 and tracker.phases[1].pid ~ "pid1" and tracker.error = Void end
			opt2.execute
			check tracker.phases.count = 1 and tracker.error = (create {TRACKER_ERROR_ACCESS}).e6 end

			opt2.undo
			check tracker.error = Void end

			opt2.redo
			check tracker.error = (create {TRACKER_ERROR_ACCESS}).e6 end

			Result := true
		end

	test_e5: BOOLEAN
		local
			opt: OPERATION
			tracker: TRACKER
		do
			comment("test e5: identifiers/names must start with A-Z, a-z or 0..9")
			create tracker.make
			opt := create {NEW_PHASE}.make (tracker, "#pid1", "compressing", 10, <<1, 2, 3>>)
			opt.execute
			check tracker.phases.count = 0 and tracker.error = (create {TRACKER_ERROR_ACCESS}).e5 end

			opt := create {NEW_PHASE}.make (tracker, "pid1", "#compressing", 10, <<1, 2, 3>>)
			opt.execute
			check tracker.phases.count = 0 and tracker.error = (create {TRACKER_ERROR_ACCESS}).e5 end

			Result := true
		end

	test_e7: BOOLEAN
		local
			opt: OPERATION
			tracker: TRACKER
		do
			comment("test e7: phase capacity must be a positive integer")
			create tracker.make
			opt := create {NEW_PHASE}.make (tracker, "pid1", "compressing", 0, <<1, 2, 3>>)
			opt.execute
			check tracker.phases.count = 0 and tracker.error = (create {TRACKER_ERROR_ACCESS}).e7 end
			Result := true
		end


	test_e8: BOOLEAN
		local
			opt: OPERATION
			tracker: TRACKER
		do
			comment("test e8: there must be at least one expected material for this phase")
			create tracker.make
			opt := create {NEW_PHASE}.make (tracker, "pid1", "compressing", 10, <<>>)
			opt.execute
			check tracker.phases.count = 0 and tracker.error = (create {TRACKER_ERROR_ACCESS}).e8 end
			Result := true
		end



feature --violation

end


