note
	description: "Summary description for {QUICKSORT_TESTS}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	QUICKSORT_TESTS

inherit

	ES_TEST

create
	make

feature

	make
		do
			add_boolean_case (agent test1)
			add_boolean_case (agent test2)
		end

feature -- boolean

	test1: BOOLEAN
		local
			qs: QUICKSORT [INTEGER]
			arr: ARRAY [INTEGER]
		do
			comment ("test QUICKSORT integers")
			arr := <<3, 4, 2, 1>>
			create qs.make
			arr := qs.quicksort (arr)
			check
				arr [1] = 1 and arr [2] = 2 and arr [3] = 3 and arr [4] = 4
			end
			Result := true
		end

	test2: BOOLEAN
		local
			qs: QUICKSORT [RADIATION_CONTAINER]
			arr: ARRAY [RADIATION_CONTAINER]
		do
			comment ("test QUICKSORT containers")
			arr := <<create {RADIATION_CONTAINER}.make ("cid3", 1, create {VALUE}.make_from_int (10)),
				create {RADIATION_CONTAINER}.make ("cid2", 1, create {VALUE}.make_from_int (10)),
				create {RADIATION_CONTAINER}.make ("cid1", 2, create {VALUE}.make_from_int (10))>>
			create qs.make
			arr := qs.quicksort (arr)
			check
				arr [1].cid ~ "cid1" and arr [2].cid ~ "cid2" and arr [3].cid ~ "cid3"
			end
			Result := true
		end

feature --violation

end
