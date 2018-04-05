note
	description: "Summary description for {OPERATION}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

deferred class
	OPERATION

feature -- attributes
	tracker: TRACKER
	has_error: BOOLEAN
	error: detachable TRACKER_ERROR
	state_number: INTEGER

feature -- commands
	execute
	deferred
	end

	undo
	deferred
	end

	redo
	local
		old_state_number: INTEGER
	do
		old_state_number := state_number
		execute
		state_number := old_state_number
	end

feature {OPERATION} -- queries
	is_valid_string (s: STRING): BOOLEAN
			-- valid string starts with A-Z, a-z or 0..9
		local
			first: CHARACTER
		do
			if s.is_empty then
				Result := false
			else
				first := s.at (1)
				Result := ('a' <= first and first <= 'z') or ('A' <= first and first <= 'Z') or ('0' <= first and first <= '9')
			end
		end
end
