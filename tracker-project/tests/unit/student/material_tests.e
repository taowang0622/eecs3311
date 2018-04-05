note
	description: "Summary description for {MATERIAL_TESTS}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	MATERIAL_TESTS

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
		do
			comment("Test material")
			check (create {MATERIAL}).list.count = 4 end
			check (create {MATERIAL}).list[1] ~ "glass" end
			check (create {MATERIAL}).list[2] ~ "metal" end
			check (create {MATERIAL}).list[3] ~ "plastic" end
			check (create {MATERIAL}).list[4] ~ "liquid" end
			Result := True
		end

feature --violation

end
