note
	description: "Summary description for {PLAYER}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

deferred class
	PLAYER

feature --Attributes
	name: STRING
	mark: STRING
	score: INTEGER

feature --Commands
	set_name(n:STRING)
	do
		name := n
	end

	set_score(s:INTEGER)
	do
		score := s
	end

end
