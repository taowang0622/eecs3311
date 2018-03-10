note
	description: "Summary description for {TTT_TESTS}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	TTT_TESTS

inherit

	ES_TEST

create
	make

feature

	make
		do
			add_boolean_case (agent test_remove_all_right)
			add_boolean_case (agent test_new_game)
		end

feature -- boolean
	test_remove_all_right: BOOLEAN
		local
			ttt: TTT
		do
			comment("test the command 'remove_all_right'")
			create ttt.make
			ttt.history.extend (create {NEW_GAME}.make (ttt, "Tao", "Kevin"))
			ttt.history.extend (create {PLAY}.make (ttt, "Tao", 1))
			ttt.history.extend (create {PLAY}.make (ttt, "Kevin", 2))
			ttt.history.extend (create {PLAY}.make (ttt, "Tao", 3))
			ttt.history.finish
			ttt.history.back
			ttt.history.back
			ttt.remove_all_right
			check ttt.history.count = 2 end

			Result := true
		end

	test_new_game:BOOLEAN
	local
		ttt: TTT
	do
		comment("test the command 'new_game'")
		create ttt.make
		check ttt.history.is_empty end
		ttt.new_game ("T", "K")
		check not ttt.history.is_empty and ttt.history.count = 1 and ttt.history.islast end
		check attached {NEW_GAME} ttt.history.item end

		ttt.new_game ("#", "K")
		ttt.new_game ("T", "T")
		check ttt.history.count = 3 and ttt.history.islast end

		ttt.history.back
		check not ttt.history.islast end
		ttt.new_game ("K", "K")
		check ttt.history.count = 3 and ttt.history.islast end

		Result := true
	end

	
end
