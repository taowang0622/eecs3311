note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_NEW_TRACKER
inherit
	ETF_NEW_TRACKER_INTERFACE
		redefine new_tracker end
create
	make
feature -- command
	new_tracker(max_phase_radiation: VALUE ; max_container_radiation: VALUE)
    	do
			model.new_tracker (max_phase_radiation, max_container_radiation)
			model.state_num_update
			etf_cmd_container.on_change.notify ([Current])
    	end

end
