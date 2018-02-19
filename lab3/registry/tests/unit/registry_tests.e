note
	description: "Summary description for {STUDENT_TESTS}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	REGISTRY_TESTS

inherit

	ES_TEST

create
	make

feature

	make
		do
			add_boolean_case (agent test_put)
			add_boolean_case (agent test_marry)
			add_boolean_case (agent test_divorce)
			add_boolean_case (agent test_out)
			add_violation_case (agent test_put_violation)
		end

feature -- boolean

	test_put: BOOLEAN
		local
			registry: REGISTRY
		do
			comment ("test the command put")
			create registry.make
			registry.put (1, "Joe", 1990, 1, 22)
			check attached registry.people [1] as p1 then
				check
					p1.name ~ "Joe" and p1.dob ~ create {DATE}.make (1990, 1, 22)
				end
			end
			sub_comment ("test the command put_alien")
			registry.put_alien (2, "Ellie", "England", 1995, 2, 20)
			check attached registry.people [2] as p2 then
				check
					p2.name ~ "Ellie" and p2.dob ~ create {DATE}.make (1995, 2, 20)
				end
			end
			Result := true
		end

	test_marry: BOOLEAN
		local
			registry: REGISTRY
		do
			comment ("test the command marry")
			create registry.make
			registry.put (1, "Joe", 1990, 1, 1)
			registry.put_alien (2, "Amy", "Iceland", 1991, 2, 2)
			registry.marry (1, 2, 2018, 2, 18)
			check attached registry.people [1] as p1 then
				check attached registry.people [2] as p2 then
					Result := p1.spouse = p2 and p2.spouse = p1 and p1.dom ~ p2.dom
				end
			end
		end

	test_divorce: BOOLEAN
		local
			registry: REGISTRY
		do
			comment ("test the command divorce")
			create registry.make
			registry.put (1, "Joe", 1990, 1, 1)
			registry.put_alien (2, "Amy", "Iceland", 1991, 2, 2)
			registry.marry (1, 2, 2018, 1, 22)
			registry.divorce (1, 2)
			check attached registry.people [1] as p1 then
				check attached registry.people [2] as p2 then
					Result := p1.is_single and p2.is_single
				end
			end
		end

	test_out: BOOLEAN
	local
		registry: REGISTRY
		str1:STRING_32
		str2:STRING_32
	do
		comment ("test the out string")
		str1 := "Adam"
		str2 := "Zed"
		check str1.is_less(str2) end
		create registry.make
		registry.put (1, "Joe", 1990, 2, 15)
		print(registry.out)
		registry.put (2,"Pam",1991, 3, 31)
		print(registry.out)
		registry.marry (1, 2, 2010, 12, 8)
		print(registry.out)
		registry.put_alien (3, "Bob", "England", 1995, 2, 17)
		print(registry.out)
		registry.divorce (1, 2)
		print(registry.out)
		registry.die (1)
		print(registry.out)
		Result := true
	end

feature --violation

	test_put_violation
		local
			registry: REGISTRY
		do
			comment ("test the case of two people being added on the same id")
			create registry.make
			registry.put (1, "Joe", 1990, 2, 1)
			registry.put_alien (1, "Amy", "Iceland", 1989, 6, 22)
		end

end
