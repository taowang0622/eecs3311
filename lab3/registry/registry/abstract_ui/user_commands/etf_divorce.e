note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_DIVORCE
inherit
	ETF_DIVORCE_INTERFACE
		redefine divorce end
create
	make
feature -- command
	divorce(id1: INTEGER_64 ; id2: INTEGER_64)
		require else
			divorce_precond(id1, id2)
    	do
			if id1 <= 0 or id2 <= 0 then
				registry.set_error_message (err_id_nonpositive)
			elseif id1 = id2 then
				registry.set_error_message (err_id_same)
			elseif not registry.people.has (id1.as_integer_32) or not registry.people.has (id2.as_integer_32) then
				registry.set_error_message (err_id_unused)
			elseif not registry.divorceable (id1.as_integer_32, id2.as_integer_32) then
				registry.set_error_message (err_divorce)
			else
				registry.set_error_message ("ok")
				registry.divorce (id1.as_integer_32, id2.as_integer_32)
			end
			etf_cmd_container.on_change.notify ([Current])
    	end

end
