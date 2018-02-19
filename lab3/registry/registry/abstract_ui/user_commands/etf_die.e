note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_DIE

inherit

	ETF_DIE_INTERFACE
		redefine
			die
		end

create
	make

feature -- command

	die (id: INTEGER_64)
		require else
			die_precond (id)
		do
			if id <= 0 then
				registry.set_error_message (err_id_nonpositive)
			elseif not registry.people.has (id.as_integer_32) then
				registry.set_error_message (err_id_unused)
			else
				check attached registry.people [id.as_integer_32] as p then
					if not p.is_alive then
						registry.set_error_message (err_dead_already)
					else
						registry.set_error_message ("ok")
						registry.die (id.as_integer_32)
					end
				end
			end
			etf_cmd_container.on_change.notify ([Current])
		end

end
