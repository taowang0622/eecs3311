note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_DIE
inherit 
	ETF_DIE_INTERFACE
		redefine die end
create
	make
feature -- command 
	die(id: INTEGER_64)
		require else 
			die_precond(id)
    	do
			-- perform some update on the model state
			model.default_update
			etf_cmd_container.on_change.notify ([Current])
    	end

end
