note
	description: "Summary description for {STUDENT_TESTS}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	PERSON_TESTS

inherit

	ES_TEST

create
	make

feature

	make
		do
			add_boolean_case (agent test_marry)
			add_boolean_case (agent test_divorce)
			add_boolean_case (agent test_citizen_noncitizen)
			add_boolean_case (agent test_die)
			add_boolean_case (agent test_can_marry)
			add_violation_case (agent test_invalid_dob)
			add_violation_case (agent test_invalid_dom)
		end

feature -- boolean

	test_marry: BOOLEAN
		local
			c1: CITIZEN
			c2: CITIZEN
			nc1: NON_CITIZEN
			nc2: NON_CITIZEN
		do
			comment ("test the command marry on citizen and non_citizen")
			create c1.make ("joe", 1990, 5, 1)
			create c2.make ("ellie", 1995, 12, 11)
			create nc1.make ("kevin", "England", 1991, 12, 12)
			create nc2.make ("amy", "Iceland", 1996, 7, 1)
			c1.marry (c2, 2018, 2, 10)
			nc1.marry (nc2, 2018, 2, 18)
			check
				not c1.is_single and not c2.is_single and c1.spouse = c2
			end
			check
				not nc1.is_single and not nc2.is_single and nc1.spouse = nc2
			end
			Result := true
		end

	test_divorce: BOOLEAN
		local
			c1: CITIZEN
			c2: CITIZEN
			nc1: NON_CITIZEN
			nc2: NON_CITIZEN
		do
			comment ("test the command divorce on citizen and non_citizen")
			create c1.make ("joe", 1990, 5, 1)
			create c2.make ("ellie", 1995, 12, 11)
			create nc1.make ("kevin", "England", 1991, 12, 12)
			create nc2.make ("amy", "Iceland", 1996, 7, 1)
			c1.marry (c2, 2018, 2, 10)
			nc1.marry (nc2, 2018, 2, 18)
			check
				not c1.is_single and not c2.is_single and c1.spouse = c2
			end
			check
				not nc1.is_single and not nc2.is_single and nc1.spouse = nc2
			end
			c1.divorce
			check
				c1.is_single and c2.is_single
			end
			nc2.divorce
			check
				nc1.is_single and nc2.is_single
			end
			Result := true
		end

	test_citizen_noncitizen: BOOLEAN
		local
			c: CITIZEN
			nc: NON_CITIZEN
		do
			comment ("test marry and divorce between citizen and non-citizen")
			create c.make ("joe", 1990, 5, 1)
			create nc.make ("amy", "Iceland", 1996, 7, 1)
			c.marry (nc, 2018, 2, 18)
			check
				not c.is_single and not nc.is_single and c.spouse = nc
			end
			c.divorce
			check
				c.is_single and nc.is_single
			end
			Result := true
		end

	test_die: BOOLEAN
		local
			c1: CITIZEN
			c2: CITIZEN
			nc1: NON_CITIZEN
		do
			comment ("test the command die")
			create c1.make ("joe", 1990, 5, 1)
			create c2.make ("ellie", 1995, 12, 11)
			create nc1.make ("kevin", "England", 1991, 12, 12)
			check
				c1.is_alive and c1.is_single
			end
			c1.die
			check
				not c1.is_alive and c1.is_single
			end
			c2.marry (nc1, 2018, 2, 18)
			c2.die
			check
				not c2.is_alive and c2.is_single and nc1.is_alive and nc1.is_single
			end
			nc1.die
			check
				not nc1.is_alive
			end
			Result := true
		end

	test_can_marry: BOOLEAN
	local
		c1: CITIZEN
		c2: CITIZEN
		c3: CITIZEN
	do
		comment("test the query can_marry")
		create c1.make ("joe", 1990, 5, 1)
		create c2.make ("ellie", 1995, 12, 11)
		sub_comment ("test the case of c1 being equal to 18 and c2 not")
		check c1.can_marry (c2, 2008, 5, 1) = false end
		sub_comment ("test the case of c1 and c2 being less than 18")
		check c1.can_marry (c2, 2000, 1, 1) = false end
		sub_comment ("test the case of both being greater than 18")
		check c1.can_marry (c2, 2015, 1, 1) end
		sub_comment ("test the case of marrying a married person")
		c1.marry (c2, 2018, 1, 2)
		create c3.make ("amy", 1995, 11, 10)
		check c3.can_marry (c1, 2018, 2, 2) = false end
		sub_comment ("test the case of one being dead")
		c1.die
		check c3.can_marry (c1, 2018, 12, 11) = false end
		Result := true
	end

feature --violation

	test_invalid_dob
		local
			c: CITIZEN
		do
			comment ("test invlid date of birth")
			create c.make ("Joe", 1990, 12, 33)
		end

	test_invalid_dom
		local
			c1: CITIZEN
			c2: CITIZEN
		do
			comment ("test invlid date of marriage")
			create c1.make ("Joe", 1990, 12, 33)
			create c2.make ("Ellie", 1992, 2, 10)
			c1.marry (c2, 2018, 13, 1)
		end

end
