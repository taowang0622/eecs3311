note
	description: "Summary description for {PHASE_TESTS}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	PHASE_TESTS

inherit

	ES_TEST

create
	make

feature

	make
		do
			add_boolean_case (agent test1)
			add_violation_case (agent v_test1)
			add_violation_case (agent v_test2)
		end

feature -- boolean

	test1: BOOLEAN
		local
			c1:RADIATION_CONTAINER
			c2:RADIATION_CONTAINER
			c3:RADIATION_CONTAINER
			p:PHASE
		do
			comment("test add_new_container, remove_container and radiation")
			create p.make ("pid1", "compressing", 3, <<1, 3>>)
			create c1.make ("cid1", 1, create {VALUE}.make_from_int (10))
			create c2.make ("cid2", 3, create {VALUE}.make_from_int (20))
			create c3.make ("cid3", 3, create {VALUE}.make_from_int (20))
			p.add_new_container (c1)
			check p.containers.count = 1 and p.containers.item (1) = c1 end
			p.remove_container (c1)
			check p.containers.is_empty end

			p.add_new_container (c2)
			p.add_new_container (c1)
			p.add_new_container (c3)
			check p.radiation ~ create {VALUE}.make_from_int (50) end

			p.remove_container (c2)
			p.remove_container (c1)
			p.remove_container (c3)
			check p.containers.count = 0 end

			Result := true
		end

feature --violation
	v_test1
	local
			c1:RADIATION_CONTAINER
			c2:RADIATION_CONTAINER
			p:PHASE
		do
			comment("test violation of capacity limit")
			create p.make ("pid1", "compressing", 1, <<1, 3>>)
			create c1.make ("cid1", 1, create {VALUE}.make_from_int (10))
			create c2.make ("cid2", 3, create {VALUE}.make_from_int (20))

			p.add_new_container (c1)
			p.add_new_container (c2)
		end

	v_test2
	local
			c1:RADIATION_CONTAINER
			p:PHASE
		do
			comment("test violation of material limit")
			create p.make ("pid1", "compressing", 1, <<1, 3>>)
			create c1.make ("cid1", 2, create {VALUE}.make_from_int (10))

			p.add_new_container (c1)
		end
end

