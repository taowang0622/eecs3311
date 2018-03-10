note
	description: "Summary description for {PLAYER_X}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	PLAYER_X
inherit
	PLAYER
create
	make
feature{NONE}
	make(n:STRING)
	do
		name := n
		mark := "X"
		score := 0
	end

feature --Queries
	one_copy: PLAYER_X
	do
		create Result.make(name)
		Result.set_score(score)
	end
end
