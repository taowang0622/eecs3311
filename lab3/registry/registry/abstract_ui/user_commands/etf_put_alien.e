note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_PUT_ALIEN
inherit
	ETF_PUT_ALIEN_INTERFACE
		redefine put_alien end
create
	make
feature -- command
	put_alien(id: INTEGER_64 ; name: STRING ; dob: TUPLE[d: INTEGER_64; m: INTEGER_64; y: INTEGER_64] ; country: STRING)
		require else
			put_alien_precond(id, name, dob, country)
    	do
    		if id <= 0 then
    			registry.set_error_message (err_id_nonpositive)
    		elseif registry.people.has (id.as_integer_32) then
    			registry.set_error_message (err_id_taken)
    		elseif not is_valid_string(name) then
    			registry.set_error_message (err_name_start)
    		elseif not is_valid_date (dob.y.as_integer_32, dob.m.as_integer_32, dob.d.as_integer_32) then
    			registry.set_error_message (err_invalid_date)
    		elseif not is_valid_string (country) then
    			registry.set_error_message (err_country_start)
    		else
    			registry.set_error_message ("ok")
    			registry.put_alien(id.as_integer_32, name, country, dob.y.as_integer_32, dob.m.as_integer_32, dob.d.as_integer_32)
    		end
			etf_cmd_container.on_change.notify ([Current])
    	end

end
