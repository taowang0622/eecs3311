note
	description: "Singleton access to the default business model."
	author: "Jackie Wang"
	date: "$Date$"
	revision: "$Revision$"

expanded class
	TTT_GAME_ACCESS

feature
	m: TTT
		once
			create Result.make
		end

invariant
	m = m
end




