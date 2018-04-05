note
	description: "Summary description for {TRACKER_ERROR_TESTS}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	TRACKER_ERROR_TESTS

inherit

	ES_TEST

create
	make

feature

	make
		do
			add_boolean_case (agent test1)
		end

feature -- boolean

	test1: BOOLEAN
		local
			error: TRACKER_ERROR
			access: TRACKER_ERROR_ACCESS
		do
			comment("Test singleton pattern for tracker errors")

			error := access.e1
			check error.out ~ "e1: current tracker is in use" end

			error := access.e10
			check error.out ~ "e10: this container identifier already in tracker" end
			Result := true
		end

feature --violation

end
