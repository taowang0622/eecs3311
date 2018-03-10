note
	description: "Summary description for {EXECUTE_MESSAGE}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	EXECUTE_MESSAGE

create
	make

feature --Attributes
	message: STRING

feature{NONE} --Initialization
	make(m:STRING)
	do
		message := m
	end

feature --Commands
	set_message(m:STRING)
	require
		m_is_not_void: m /= Void
	do
		message := m
	ensure
		message_is_modified_correctly: message ~ m
	end
end
