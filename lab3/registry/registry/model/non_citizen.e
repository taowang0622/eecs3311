note
	description: "A non-citizen model."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	NON_CITIZEN
inherit
	PERSON
create
	make

feature {NONE} -- Initialization

	make(n:STRING c:STRING y:INTEGER m:INTEGER d:INTEGER)
			-- Create a non-critizen model
			-- n and c mean name and citizen respectively
			-- y, m, d represent the date of birth
		do
			set_name(n)
			set_dob(y, m, d)
			set_country(c)
			set_alive
		end

end
