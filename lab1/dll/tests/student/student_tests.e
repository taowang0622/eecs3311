note
	description: "Summary description for {STUDENT_TESTS}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	STUDENT_TESTS

inherit

	ES_TEST

create
	make

feature {NONE} -- Initialization

	make
			-- Initialization for `Current'.
		do
			-- boolean cases
			add_boolean_case (agent t1)
			add_boolean_case (agent t2)
			add_boolean_case (agent test_remove_last)

			-- violation cases
			add_violation_case (agent t1v)
			add_violation_case (agent t2v)
			add_violation_case (agent t3v)
		end

feature -- boolean cases

	t1: BOOLEAN
		local
			list: DOUBLY_LINKED_LIST [STRING]
		do
			comment ("t1: test remove_first")
			create list.make_from_array (<<"kevin", "Jay">>)
			list.remove_first
			check attached list.header.next as lhn then
				check attached lhn.element as lhne then
--					assert_equal("equal", lhne, "Jay")
					Result := lhne ~ "Jay"
				end
			end
			check Result end
		end

	t2: BOOLEAN
		local
			list1: DOUBLY_LINKED_LIST[STRING]
			list2: DOUBLY_LINKED_LIST[STRING]
		do
			comment("t2: test is_equal")
			create list1.make_from_array (<<"Kevin", "Jay", "Victor">>)
			create list2.make_from_array (<<"Kevin", "Jay", "Victor">>)
			Result := list1.is_equal (list2) and list1 ~ list2
			check Result end
			list1.remove_last
			Result := (not list1.is_equal (list2)) and (not (list1 ~ list2))
			check Result end
		end

	test_remove_last: BOOLEAN
	local
		list: DOUBLY_LINKED_LIST [STRING]
	do
		Result := false
		check Result end
		create list.make_from_array (<<"tao">>)
		list.remove_last
	end



feature -- violation cases

	t1v
		local
			list: DOUBLY_LINKED_LIST [STRING]
		do
			comment ("t1v: remove_at precondition violation test")
			create list.make_empty
			list.remove_at (1)
			sub_comment ("Failed because remove_at(1) for empty list didn't generate precondition violation")
			list.add_first ("kevin")
			list.add_first ("jay")
			list.remove_at (3)
			sub_comment ("Failed because remove_at(3) for the list of the size 2 didn't generate precondition violation")
		end

	t2v
		local
			list: DOUBLY_LINKED_LIST [STRING]
		do
			comment ("t2v: add_between precondition violation test")
			create list.make_from_array (<<"Kevin">>)
			list.add_between ("Mark", list.header, list.trailer)
			sub_comment("Failed because no violation generated when pred and succ aren't adjecnt")
		end

	t3v
		local
			list: DOUBLY_LINKED_LIST [STRING]
			new_node: NODE[STRING]
		do
			comment ("t2v: remove precondition violation test")
			create list.make_from_array (<<"Kevin">>)
			create new_node.make ("Kevin", Void, Void)
			list.remove (new_node)
		end
end
