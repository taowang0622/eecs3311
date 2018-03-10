note
	description: "The operation NEW_GAME"
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	NEW_GAME

inherit

	OPERATION

create
	make

feature --Attributes

	playerx_name: STRING

	playero_name: STRING

feature --Initialization

	make (game: TTT xn: STRING on: STRING)
		do
			ttt := game
			playerx_name := xn
			playero_name := on
			has_error := false
		end

feature --Queries

	is_valid_string (s: STRING): BOOLEAN
			-- corresponds to the errro measage " name must start with A-Z or a-z"
		require
			string_not_void: s /= Void
		local
			first: CHARACTER
		do
			if s.is_empty then
				Result := false
			else
				first := s.at (1)
				Result := ('a' <= first and first <= 'z') or ('A' <= first and first <= 'Z')
			end
		end

feature --Commands

	execute
		local
			exe_mes: STRING -- Execution Result Message
			px: PLAYER_X
		do
				-- store the game state before execution
			old_ttt := ttt.one_copy
			if playerx_name ~ playero_name then
				exe_mes := "names of players must be different"
				has_error := true
			elseif not is_valid_string (playerx_name) or not is_valid_string (playero_name) then
				exe_mes := "name must start with A-Z or a-z"
				has_error := true
			else
				exe_mes := "OK"
				has_error := false
					-- modify the game state
				px := create {PLAYER_X}.make (playerx_name)
				ttt.set_player_x (px)
				ttt.set_player_o (create {PLAYER_O}.make (playero_name))
				ttt.set_next (px)
				ttt.reset_board
			end
			ttt.message.set_message (exe_mes)
		end

end
