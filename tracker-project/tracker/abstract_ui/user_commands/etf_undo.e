note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_UNDO
inherit
	ETF_UNDO_INTERFACE
		redefine undo end
create
	make
feature -- command
	undo
    	do
			model.undo
			model.state_num_update
			etf_cmd_container.on_change.notify ([Current])
    	end

end
