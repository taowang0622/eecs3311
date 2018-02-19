note
	description: "A citizen model."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	CITIZEN

inherit
	PERSON

create
	make


feature {NONE} -- Initialization

	make(n:STRING y:INTEGER m:INTEGER d:INTEGER)
			-- make a citizen model
			-- n means name
			-- y, m and d reprent date of birth
		do
			set_name(n)
			set_dob(y, m, d)
			set_country("Canada")
			set_alive
		end

end
