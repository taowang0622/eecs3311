note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_REDO
inherit
	ETF_REDO_INTERFACE
		redefine redo end
create
	make
feature -- command
	redo
    	do
			model.redo
			model.state_num_update
			etf_cmd_container.on_change.notify ([Current])
    	end

end
