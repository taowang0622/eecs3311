note
	description: "Summary description for {OPERATION}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

deferred class
	OPERATION

feature --Attrinutes
	old_ttt: detachable TTT
	has_error: BOOLEAN
	ttt: TTT	-- points to the singleton TTT object(model)

feature

	execute
		deferred
		end

	undo
		-- Revert to the state before the execution of an operation
		require
			has_been_executed: old_ttt /= Void
		do
			check attached old_ttt as ot then
				if has_error then
					ttt.message.set_message (ot.message.message)
				else
					ttt.set_player_x (ot.player_x)
					ttt.set_player_o (ot.player_o)
					ttt.set_next (ot.next)
					ttt.set_board (ot.board)
					ttt.message.set_message (ot.message.message)
					ttt.set_first_player (ot.first_player)
				end
			end
		end

	redo
		-- by default "redo" just repeats execution
		do
			execute
		end

end
