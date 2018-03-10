note
	description: "Summary description for {PLAYER_O}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	PLAYER_O
inherit
	PLAYER
create
	make
feature{NONE}
	make(n:STRING)
	do
		name := n
		mark := "O"
		score := 0
	end

feature --queries
	one_copy:PLAYER_O
	do
		create Result.make(name)
		Result.set_score(score)
	end
end
