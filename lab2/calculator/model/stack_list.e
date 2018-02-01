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
		undefine
			is_equal
		end

	ABSTRACT_STACK [G]
		redefine
			count
		end

create
	make

feature {NONE, ES_TEST} -- creation

	implementation: LINKED_LIST [G]
			-- implementation of stack as array

	make
			-- create an empty stack
		do
			create implementation.make

			ensure
				count = 0
		end

feature -- model

	model: SEQ [G]
			-- abstraction function
		local
			i: INTEGER
		do
			create Result.make_empty
			across
				1 |..| count as ic
			loop
				Result.append (implementation [ic.item])
			end
		end

feature -- Queries

	count: INTEGER
			-- number of items in stack
		do
				Result := implementation.count
		end

	top: G
		do
			Result := implementation [1]
		end

feature -- Commands

	push (x: G)
			-- push `x' on to the stack
		do
				implementation.start
				implementation.put_left (x)
		end

	pop
		do
				implementation.start
				implementation.remove
		end

invariant
	same_count: model.count = implementation.count
	equality: across 1 |..| count as i all model [i.item] ~ implementation [i.item] end
	comment ("top of stack is model[1] and implementation[1]")

end
