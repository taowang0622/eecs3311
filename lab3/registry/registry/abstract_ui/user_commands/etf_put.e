note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_PUT
inherit
	ETF_PUT_INTERFACE
		redefine put end
create
	make
feature -- command
	put(id: INTEGER_64 ; name: STRING ; dob: TUPLE[d: INTEGER_64; m: INTEGER_64; y: INTEGER_64])
		require else
			put_precond(id, name, dob)
    	do
    		if id <= 0 then
    			registry.set_error_message (err_id_nonpositive)
    		elseif registry.people.has (id.as_integer_32) then
    			registry.set_error_message (err_id_taken)
    		elseif not is_valid_string(name) then
    			registry.set_error_message (err_name_start)
    		elseif not is_valid_date (dob.y.as_integer_32, dob.m.as_integer_32, dob.d.as_integer_32) then
    			registry.set_error_message (err_invalid_date)
    		else
    			registry.set_error_message ("ok")
    			registry.put (id.as_integer_32, name, dob.y.as_integer_32, dob.m.as_integer_32, dob.d.as_integer_32)
    		end
			etf_cmd_container.on_change.notify ([Current])
    	end

end
