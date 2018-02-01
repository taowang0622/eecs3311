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

feature

	make
		do
				--STACK_ARRAY
			add_boolean_case (agent t0)
			add_violation_case (agent t0v)

				--evaluator
			add_boolean_case (agent t1)
			add_boolean_case (agent t2)
			add_violation_case (agent t1v)
		end

feature -- Boolean

	t0: BOOLEAN
		local
			s_arr: STACK_ARRAY [INTEGER]
		do
			comment ("t0: test top in STACK_ARRAY")
			create s_arr.make
			s_arr.push (0)
			Result := s_arr.top = 0
		end

	t1: BOOLEAN
		local
			eval: EVALUATOR
			l_exp: STRING
		do
			comment("t1: test the query evaluated using STACK_ARRAY")
			create eval.make ("array")
			sub_comment("test evaluate(16.2 +4.1*2.4)")
			l_exp := "(16.2 +4.1*2.4)"
			eval.evaluate (l_exp)
			Result := eval.value ~ 26.04 and not eval.error
			check Result end
			sub_comment("test evaluated(-7.8 + 3.1)")
			Result :=  (-4.71 <= eval.evaluated ("-7.8 + 3.1"))
				and eval.evaluated ("-7.8 + 3.1") <= -4.7
		end

	t2: BOOLEAN
		local
			eval: EVALUATOR
			l_exp: STRING
		do
			comment("t1: test the query evaluated using STACK_LIST")
			create eval.make ("list")
			sub_comment("test evaluate(16.2 +4.1*2.4)")
			l_exp := "(16.2 +4.1*2.4)"
			eval.evaluate (l_exp)
			Result := eval.value ~ 26.04 and not eval.error
			check Result end
			sub_comment("test evaluated(-7.8 + 3.1)")
			Result :=  (-4.71 <= eval.evaluated ("-7.8 + 3.1"))
				and eval.evaluated ("-7.8 + 3.1") <= -4.7
		end

feature --Violation

	t0v
		local
			s_arr: STACK_ARRAY [INTEGER]
			v: INTEGER
		do
			comment ("t0v: test pre-cond violation in top")
			create s_arr.make
			v := s_arr.top
		end

	t1v
		local
			eval: EVALUATOR
		do
			comment ("t1v: test evaluate pre-conds")
			create eval.make ("array")
			eval.evaluate ("4=-5")
		end

end
