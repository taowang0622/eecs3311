note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_MARRY

inherit

	ETF_MARRY_INTERFACE
		redefine
			marry
		end

create
	make

feature -- command

	marry (id1: INTEGER_64; id2: INTEGER_64; date: TUPLE [d: INTEGER_64; m: INTEGER_64; y: INTEGER_64])
		require else
			marry_precond (id1, id2, date)
		do
			if id1 = id2 then
				registry.set_error_message (err_id_same)
			elseif id1 <= 0 or id2.as_integer_32 <= 0 then
				registry.set_error_message (err_id_nonpositive)
			elseif not is_valid_date (date.y.as_integer_32, date.m.as_integer_32, date.d.as_integer_32) then
				registry.set_error_message (err_invalid_date)
			elseif not registry.people.has (id1.as_integer_32) or not registry.people.has (id2.as_integer_32) then
				registry.set_error_message (err_id_unused)
			else
				check attached registry.people [id1.as_integer_32] as p1 then
					check attached registry.people [id2.as_integer_32] as p2 then
						if not p1.can_marry (p2, date.y.as_integer_16, date.m.as_integer_16, date.d.as_integer_16) then
							registry.set_error_message (err_marry)
						else
							registry.set_error_message ("ok")
							registry.marry (id1.as_integer_32, id2.as_integer_32, date.y.as_integer_32, date.m.as_integer_32, date.d.as_integer_32)
						end
					end
				end
			end
			etf_cmd_container.on_change.notify ([Current])
		end

end
