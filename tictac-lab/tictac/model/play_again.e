note
	description: "Summary description for {PLAY_AGAIN}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	PLAY_AGAIN

inherit
	OPERATION

create
	make

feature{NONE} --Initialization
	make(game:TTT)
	do
		ttt := game
		has_error := false
	end

feature --Commands
	execute
	local
		message: STRING
	do
		--Store the game state
		old_ttt := ttt.one_copy

		if not ttt.game_over then
			message := "finish this game first"
			has_error := true
		else
			message := "ok"
			has_error := false
			ttt.reset_board
			ttt.set_game_not_over
		end

		ttt.message.set_message (message)
	end

end
