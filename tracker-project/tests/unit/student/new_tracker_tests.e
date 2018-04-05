note
	description: "Summary description for {NEW_TRACKER_TESTS}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	NEW_TRACKER_TESTS

inherit

	ES_TEST

create
	make

feature

	make
		do
			add_boolean_case (agent test1)
			add_boolean_case (agent test2)
		end

feature -- boolean

	test1: BOOLEAN
		local
			opt: OPERATION
			tracker: TRACKER
		do
			comment("test successful execution, undo and redo")
			create tracker.make
			check tracker.max_phase_rediation = 0.0 and tracker.max_container_radiation = 0.0 end
			opt := create {NEW_TRACKER}.make (tracker, create {VALUE}.make_from_string ("50.2"), create {VALUE}.make_from_string ("33.3"))
			opt.execute
			check tracker.max_phase_rediation = 50.2 and tracker.max_container_radiation = 33.3 and tracker.error = Void end

			opt.undo
			check tracker.max_phase_rediation = 0.0 and tracker.max_container_radiation = 0.0 and tracker.error = Void end

			opt.redo
			check tracker.max_phase_rediation = 50.2 and tracker.max_container_radiation = 33.3 and tracker.error = Void end

			Result := true
		end

	test2: BOOLEAN
		local
			opt: OPERATION
			tracker: TRACKER
		do
			comment("test failed execution, undo and redo")
			create tracker.make
			check tracker.max_phase_rediation = 0.0 and tracker.max_container_radiation = 0.0 end
			opt := create {NEW_TRACKER}.make (tracker, create {VALUE}.make_from_string ("10.2"), create {VALUE}.make_from_string ("33.3"))
			opt.execute
			check tracker.max_phase_rediation = 0.0 and tracker.max_container_radiation = 0.0 and opt.has_error
				and tracker.error = (create {TRACKER_ERROR_ACCESS}).e4  end

			opt.undo
			check tracker.error = Void end

			opt.redo
			check tracker.max_phase_rediation = 0.0 and tracker.max_container_radiation = 0.0 and opt.has_error
				and tracker.error = (create {TRACKER_ERROR_ACCESS}).e4  end
			Result := true
		end

feature --violation

end

