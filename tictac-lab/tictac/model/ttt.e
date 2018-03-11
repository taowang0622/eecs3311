note
	description: "{TTT} represents one tic-tac-toe game"
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	TTT

inherit

	ANY
		redefine
			out
		end

create
	make

feature --Attributes

	board: BOARD_3x3

	next: PLAYER -- Who's next? X or O

	player_x: PLAYER_X

	player_o: PLAYER_O

	message: EXECUTE_MESSAGE

	history: TWO_WAY_LIST [OPERATION]

	game_over: BOOLEAN

	first_player: PLAYER

feature {NONE} --Initialization

	make
		do
			create board.make
			create player_x.make ("")
			create player_o.make ("")
			create message.make ("ok")
			next := player_x
			create history.make
			game_over := false
			first_player := player_x
		end

feature --Commands

	new_game (playerx: STRING playero: STRING)
		local
			new_game_opt: NEW_GAME
		do
			create new_game_opt.make (Current, playerx, playero)
			new_game_opt.execute
			if new_game_opt.has_error then
				remove_all_right_then_append(new_game_opt)
			else
				clear_history_then_append(new_game_opt)
			end
		end

	play (player_name: STRING position: INTEGER)
		local
			play_opt: PLAY
		do
			create play_opt.make (Current, player_name, position)
			play_opt.execute
			if play_opt.has_error then
				remove_all_right_then_append (play_opt)
			else
				if game_over then
					clear_history_then_append (play_opt)
				else
					remove_all_right_then_append (play_opt)
				end
			end
		end

	play_again
		local
			play_again_opt: PLAY_AGAIN
		do
			create play_again_opt.make(Current)
			play_again_opt.execute
			if play_again_opt.has_error then
				remove_all_right_then_append (play_again_opt)
			else
				clear_history_then_append (play_again_opt)
			end
		end

	undo
		do
			if history.isfirst or history.is_empty then
				-- do nothing
			else
				if attached {NEW_GAME} history.first and history.first.has_error then -- The game is not started correctly
					create history.make
					message.set_message ("ok")
				else
					history.item.undo
					history.back
				end
			end
		end

	redo
		do
			if history.is_empty or history.islast then
				-- do nothing
			else
				history.forth
				history.item.redo
			end
		end

feature {TTT, ES_TEST}
	remove_all_right
		-- remove all operations on the right of the current cursor in history list
	require
		cursor_is_not_last: not history.islast
	do
		from
		until
			history.islast
		loop
			history.remove_right
		end
	ensure
		cursor_not_moved: (old history.item) = history.item
		all_right_ones_removed: history.islast
	end

	remove_all_right_then_append(opt: OPERATION)
	do
		if not (history.is_empty or history.islast) then
			remove_all_right
		end
		history.extend (opt)
		history.finish -- move the cursor to the last
	end

	clear_history_then_append(opt: OPERATION)
	do
		create history.make --clear the history to start a new game
		history.extend (opt)
		history.finish -- move the cursor to the last
	end
feature {OPERATION, ES_TEST, TTT}

	set_player_x (px: PLAYER_X)
		require
			px_is_not_void: px /= Void
		do
			player_x := px
		ensure
			set_correctly: player_x = px
		end

	set_player_o (po: PLAYER_O)
		require
			po_is_not_void: po /= Void
		do
			player_o := po
		ensure
			set_correctly: player_o = po
		end

	set_next (p: PLAYER)
		require
			p_is_not_void: p /= Void
		do
			next := p
		ensure
			set_correctly: next = p
		end

	set_board(b:BOARD_3x3)
	require
		b_is_not_void: b /= Void
	do
		board := b
	ensure
		board = b
	end

	reset_board
		do
			board.clear
		end

	set_game_over
	do
		game_over := true
	end

	set_game_not_over
	do
		game_over := false
	end

	set_first_player(p: PLAYER)
	require
		p_is_x_or_o: p = player_x or p = player_o
	do
		first_player := p
	end
feature --Queries

	out: STRING
			-- the string representation of the current game state!
		do
			Result := "  "
--			Result := Result + message.message + ": => "
			if history.is_empty then
				Result := Result + message.message + ":  => " + "start new game%N"
			elseif game_over then
				Result := Result + message.message + ": => " + "play again or start new game%N"
			else
				if attached {NEW_GAME}history.first and history.first.has_error then
				    Result := Result + message.message + ":  => " + "start new game%N"
				elseif next = player_x then
					Result := Result + message.message + ": => " + player_x.name + " plays next%N"
				elseif next = player_o then
					Result := Result + message.message + ": => " + player_o.name + " plays next%N"
				end
			end
			Result := Result + board.out
			Result := Result + "  " + player_x.score.out + ": " + "score for " + "%"" + player_x.name + "%"" + " (as X)%N"
			Result := Result + "  " + player_o.score.out + ": " + "score for " + "%"" + player_o.name + "%"" + " (as O)"
		end

	one_copy: TTT
		-- represent the current state of the game(not including the game history)
	local
		px: PLAYER_X
		po: PLAYER_O
	do
		create Result.make
		px := player_x.one_copy
		po := player_o.one_copy
		Result.set_player_x (px)
		Result.set_player_o (po)
		if next = player_x then
			Result.set_next(px)
		else
			Result.set_next(po)
		end
		if first_player = player_x then
			Result.set_first_player(px)
		else
			Result.set_first_player (po)
		end
		Result.message.set_message (message.message)
		Result.set_board(board.one_copy)
	end

feature -- model operations
	default_update
			-- Perform update to the model state.
		do
--			i := i + 1
		end

	reset
			-- Reset model state.
		do
			make
		end

--	invariant
--		game_ended_correctly:  game_over implies (board.check_win = 1 or board.check_win = 2 or board.check_win = 3)
end
