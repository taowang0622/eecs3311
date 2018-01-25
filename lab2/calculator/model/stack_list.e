note
	description: "[
		STACK_LIST inherits complete contracts from ABTSRACT_STACK
		implemented with an ARRAY testable via ES_TEST
		  implementation: LIST [G]
		top of the stack is first element of the list
	]"
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	STACK_LIST [G -> attached ANY]
inherit
	ANY
		undefine is_equal end
	ABSTRACT_STACK[G]
		redefine count end


create
	make

feature {NONE,ES_TEST} -- creation
	implementation: LINKED_LIST [G]
		-- implementation of stack as array

	make
			-- create an empty stack
		do
			create implementation.make
			-- TBD

		end

feature -- model

	model: SEQ [G]
			-- abstraction function
		local
			i: INTEGER
		do
			create Result.make_empty
			-- TBD

		end

feature -- Queries

	count: INTEGER
			 -- number of items in stack
		do
			-- TBD
		end

	top: G
		do
			Result := implementation [implementation.count]
			-- the above may not be correct

			-- TBD

		end

feature -- Commands

	push (x: G)
			-- push `x' on to the stack
		do
			-- TBD
		end

	pop
		do
			-- TBD
		end

invariant
	same_count:
		model.count = implementation.count
	equality: across 1 |..| count as i all
		model[i.item] ~ implementation[i.item]
	end
	comment("top of stack is model[1] and implementation[1]")
end
