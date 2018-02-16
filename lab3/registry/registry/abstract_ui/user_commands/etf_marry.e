note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_MARRY
inherit 
	ETF_MARRY_INTERFACE
		redefine marry end
create
	make
feature -- command 
	marry(id1: INTEGER_64 ; id2: INTEGER_64 ; date: TUPLE[d: INTEGER_64; m: INTEGER_64; y: INTEGER_64])
		require else 
			marry_precond(id1, id2, date)
    	do
			-- perform some update on the model state
			model.default_update
			etf_cmd_container.on_change.notify ([Current])
    	end

end
