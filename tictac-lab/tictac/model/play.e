note
	description: "The operation PLAY"
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	PLAY

inherit
	OPERATION

create
	make

feature --Attributes
	player_name: STRING
	position: INTEGER

--	1 => PLAYERX wins
--  2 => PLAYERO wins
--  3 => drawn
--  4 => in progress
	winner: INTEGER

feature --Initilization
	make(game:TTT n:STRING p:INTEGER)
	do
		ttt := game
		has_error := false

		player_name := n
		position := p
	end

feature --Commands
	execute
	local
		message: STRING
	do
		-- store the game state before execution
		old_ttt := ttt.one_copy

		if ttt.game_over then
			message := "game is finished"
			has_error := true
		elseif player_name /~ ttt.player_x.name and player_name /~ ttt.player_o.name then
			message := "no such player"
			has_error := true
		elseif player_name /~ ttt.next.name then
			message := "not this player's turn"
			has_error := true
		else
			if ttt.board.board[position] /~ "_" then
				message := "button already taken"
				has_error := true
			else
				if player_name ~ ttt.player_x.name then
					ttt.board.move (position, ttt.player_x)
					ttt.set_next (ttt.player_o) --switch players
					has_error := false
				else
					ttt.board.move (position, ttt.player_o)
					ttt.set_next (ttt.player_x) --switch players
					has_error := false
				end

				--check if there's a winner already
				winner := ttt.board.check_win
				if winner = 1 then  --Player x wins
					ttt.player_x.set_score (ttt.player_x.score + 1)
					ttt.set_game_over
					message := "there is a winner"
				elseif winner = 2 then --Player o wins
					ttt.player_o.set_score (ttt.player_o.score + 1)
					ttt.set_game_over
					message := "there is a winner"
				elseif winner = 3 then --Draw
					ttt.set_game_over
					message := "game ended in a tie"
				else				   --In progress
					message := "ok"
				end
			end
		end

		ttt.message.set_message (message)
	end

invariant
	position_within_bounds: position >= 1 and position <= 9
end
