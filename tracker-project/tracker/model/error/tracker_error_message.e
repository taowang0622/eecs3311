note
	description: "An error that may occur when operating on a tracker."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	TRACKER_ERROR

inherit

	ANY
		redefine
			out
		end

create {TRACKER_ERROR_ACCESS}
	make

feature {NONE}

	make (code: INTEGER message: STRING)
		do
			error_code := code
			error_message := message
		end

feature --Atributes

	error_code: INTEGER

	error_message: STRING

feature --queries

	out: STRING
		do
			Result := "e" + error_code.out + ": " + error_message
		end

end
