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
	divorce(a_id1: INTEGER_64 ; a_id2: INTEGER_64)
		require else 
			divorce_precond(a_id1, a_id2)
    	do
			-- perform some update on the model state
			model.default_update
			etf_cmd_container.on_change.notify ([Current])
    	end

end
