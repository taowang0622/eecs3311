note
	description: "[
		Evaluator for arithmetic expressions involving
		+, -, *, / in REAL_32 arithmetic
		Use Dijsktra's two stack algorithm
		https://algs4.cs.princeton.edu/13stacks/Evaluate.java.html
		
		TBD -- features marked with this are To Be Done
	]"
	author: "JSO"
	date: "$Date$"
	revision: "$Revision$"

class
	EVALUATOR

create
	make

feature {NONE} -- Constructor

	make (stack_type: STRING)
			-- initialize
		require
			stack_type ~ "array" OR stack_type ~ "list"
		do
			if stack_type ~ "array" then
				create {STACK_ARRAY [STRING]} ops.make
				create {STACK_ARRAY [REAL]} vals.make
			else
				check
					stack_type ~ "list"
				end
				create {STACK_LIST [STRING]} ops.make
				create {STACK_LIST [REAL]} vals.make
			end
			error := True
			expression := "None"
		end

feature -- Queries

	ops: ABSTRACT_STACK [STRING]
			-- operations stack

	vals: ABSTRACT_STACK [REAL]
			-- values stack

	expression: STRING
			-- string espression to be evaluated

	value: REAL
			-- value if no error
		require
			not error
		attribute
		end

	error: BOOLEAN
			-- Is there a syntax error in `expression'

	error_string (s: STRING): STRING
			-- Error message if any
		local
			tokenizer: TOKENIZER
		do
			create tokenizer.make
			Result := tokenizer.error_string (s)
		end

	is_valid (s: STRING): BOOLEAN
			-- Is string `s' a valid arithmetic expression?
		local
			tokenizer: TOKENIZER
		do
			create tokenizer.make
			Result := tokenizer.is_arithmetic_expression (s)
		end

	evaluated (s: STRING): REAL
			-- Evaluated arithmetic expression `s'
		require
			string_is_a_valid_exp: is_valid (s)
		do
			Result := dijkstra_alg (s)
		ensure
			states_not_modified: value = old value and error = old error and expression ~ old expression and ops ~ old ops and vals ~ old vals
		end

feature -- Commands

	evaluate (s: STRING)
			-- Evaluate arithmetic expression `s'
		require
			valid_expression: is_valid (s)
		local
			tokenizer: TOKENIZER
			tokens: ARRAY [STRING]
			token: STRING
			l_ops: STRING
			l_val: REAL
		do
				--updates state
			expression := s
			error := False
			value := dijkstra_alg (s)
		ensure
			expression_not_none: expression ~ s and error = False
		end

feature {NONE} -- implementation
	-- put your implementation features here

	dijkstra_alg (s: STRING): REAL_32
		local
			tokenizer: TOKENIZER
			tokens: ARRAY [STRING]
			token: STRING
			l_ops: STRING
			l_val: REAL
		do
			create tokenizer.make
			tokens := tokenizer.get_tokens (s)
			across
				1 |..| tokens.count as i
			loop
				token := tokens [i.item]
				if token ~ "(" then
				elseif token ~ "+" then
					ops.push (token)
				elseif token ~ "-" then
					ops.push (token)
				elseif token ~ "*" then
					ops.push (token)
				elseif token ~ "/" then
					ops.push (token)
				elseif token ~ ")" then
					l_ops := ops.top
					ops.pop
					l_val := vals.top
					vals.pop
					if l_ops ~ "+" then
						l_val := vals.top + l_val
						vals.pop
					elseif l_ops ~ "-" then
						l_val := vals.top - l_val
						vals.pop
					elseif l_ops ~ "*" then
						l_val := vals.top * l_val
						vals.pop
					elseif l_ops ~ "/" then
						l_val := vals.top / l_val
						vals.pop
					end
					vals.push (l_val)
				else
					vals.push (token.to_real)
				end
			end
			Result := vals.top
			vals.pop
		ensure
			stacks_empty: ops.count = 0 and vals.count = 0
		end

invariant
	consistency1: (expression /~ "None") implies (value = evaluated (expression))
		-- not the other way because?
	consistency2: (expression /~ "None") = (not error)

end
