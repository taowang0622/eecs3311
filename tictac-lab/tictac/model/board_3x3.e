note
	description: "Summary description for {BOARD_3X3}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	BOARD_3X3

inherit
	ANY
	redefine
		out
	end

create
	make

feature --Attributs
	board: ARRAY[STRING]

feature --Creation
	make
	do
		create board.make_filled("_", 1, 9)
	end

feature --Queries
	out:STRING
	local
		i:INTEGER
		j:INTEGER
	do
		Result := ""
		from
			i := 1
		until
			i > 3
		loop
			Result := Result + "  "
			from
				j := 1
			until
				j > 3
			loop
				Result := Result + board[(i - 1)*3 + j]
				j := j + 1
			end
			Result := Result + "%N"
			i := i + 1
		end
	end

	is_button_available(button: INTEGER):BOOLEAN
		-- The button labelled the passed integer is available or not
	do
		Result := board[button] ~ "_"
	end

	square(button:INTEGER):STRING
		-- Query it's "X" or "O" or "_" on the specified locarion
	do
		Result := board[button]
	end

	get_empty_squares:SEQ[INTEGER]
		-- returns a list of buttons available
	local
		i: INTEGER
	do
		create Result.make_empty
		from
			i := 1
		until
			i > board.count
		loop
			if board[i] ~ "_" then
				Result.append (i)
			end
			i := i + 1
		end
	end

	check_win:INTEGER
	--        returns a constant associated with the state of the game
--            If PLAYERX wins, returns 1.
--            If PLAYERO wins, returns 2.
--            If game is drawn, returns 3.
--            If game is in progress, returns 4.
	local
		lines: SEQ[ARRAY[STRING]]
		line: ARRAY[STRING]
		line_row: ARRAY[STRING]
		line_col: ARRAY[STRING]
		i: INTEGER
		j: INTEGER
	do
		Result := 0
		create lines.make_empty

		-- rows and cols
		from
			i := 1
		until
			i > 3
		loop
			create line_row.make_empty
			create line_col.make_empty
			from
				j := 1
			until
				j > 3
			loop
				line_row.force (board[(i - 1) * 3 + j], j)
				line_col.force (board[i + (j - 1)*3], j)
				j := j + 1
			end
			lines.append (line_row)
			lines.append (line_col)
			i := i + 1
		end

		-- diagonals
		create line.make_empty
		line.force (board[1], 1)
		line.force (board[5], 2)
		line.force (board[9], 3)
		lines.append (line)
		create line.make_empty
		line.force (board[3], 1)
		line.force(board[5], 2)
		line.force(board[7], 3)
		lines.append (line)

		check lines.count = 8 end

		across
			lines as cursor
		loop
			line := cursor.item
			if line[1] ~ line[2] and line[2] ~ line[3] and line[1] /~ "_" then
				if line[1] ~ "X" then
					Result := 1 -- PLAYERX wins
				else
					Result := 2 -- PLAYERO wins
				end
			end
		end

		if Result = 0 then
			if not get_empty_squares.is_empty then
				Result := 4	-- in progress
			else
				Result := 3 -- DRAW
			end
		end

		check Result /= 0 end
	end

	one_copy: BOARD_3x3
	local
		i: INTEGER
	do
		create Result.make
		from
			i := 1
		until
			i > 9
		loop
			Result.board.put(board[i], i)
			i := i + 1
		end
	end

feature --Commands
	move(button:INTEGER; player:PLAYER)
	require
		button_within_bounds: button >= 1 and button <= 9
		button_is_available: is_button_available(button)
		player_is_X_or_O: attached {PLAYER_X} player or attached {PLAYER_O} player
	do
		board[button] := player.mark
	ensure
		marked_x: attached {PLAYER_X} player implies board[button] ~ "X"
		marked_O: attached {PLAYER_O} player implies board[button] ~ "O"
	end

	clear
	do
		create board.make_filled ("_", 1, 9)
	end

feature -- model operations
	default_update
			-- Perform update to the model state.
		do

		end

	reset
			-- Reset model state.
		do
			create board.make_filled ("_", 1, 9)
		end

invariant
	board_is_3x3: board.count = 9
end
