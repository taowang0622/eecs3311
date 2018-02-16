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
	put_alien(id: INTEGER_64 ; name1: STRING ; dob: TUPLE[d: INTEGER_64; m: INTEGER_64; y: INTEGER_64] ; country: STRING)
		require else 
			put_alien_precond(id, name1, dob, country)
    	do
			-- perform some update on the model state
			model.default_update
			etf_cmd_container.on_change.notify ([Current])
    	end

end
