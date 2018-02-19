note
	description: "A citizen registry model."
	author: "Jackie Wang"
	date: "$Date$"
	revision: "$Revision$"

class
	REGISTRY

inherit

	ANY
		redefine
			out
		end

create {REGISTRY_ACCESS, REGISTRY_TESTS}
	make

feature -- attributs

	people: HASH_TABLE [PERSON, INTEGER]

	error_message: STRING

feature {NONE} -- Initialization

	make
			-- Make an empty registry
		do
			create people.make (10)
			error_message := "ok"
		end

feature -- commands

	put (id: INTEGER name: STRING y: INTEGER m: INTEGER d: INTEGER)
			-- Add one citizen into the registry
		require
			passed_id_is_not_used: not people.has (id)
		do
			people.put (create {CITIZEN}.make (name, y, m, d), id)
		ensure
			id_added_successfully: people.has (id)
			person_added_successfully: attached people [id] as p
			person_set_correctly: p.name ~ name and p.dob ~ create {DATE}.make (y, m, d)
		end

	put_alien (id: INTEGER name: STRING country: STRING y: INTEGER m: INTEGER d: INTEGER)
			-- Add one non-citizen into the registry
		require
			passed_id_is_not_used: not people.has (id)
		do
			people.put (create {NON_CITIZEN}.make (name, country, y, m, d), id)
		ensure
			id_added_successfully: people.has (id)
			person_added_successfully: attached people [id] as p
			person_set_correctly: p.name ~ name and p.dob ~ create {DATE}.make (y, m, d) and p.country ~ country
		end

	marry (id1: INTEGER id2: INTEGER y: INTEGER m: INTEGER d: INTEGER)
			-- the person with id1 marries the person with id2
		require
			id1_can_marry_id2_on_passed_date: marriageable (id1, id2, y, m, d)
		do
			check attached people [id1] as p1 then
				check attached people [id2] as p2 then
					p1.marry (p2, y, m, d)
				end
			end
		ensure
			attached people [id1] as p1
			attached people [id2] as p2
			married: p1.spouse = p2 and p2.spouse = p1 and p1.dom ~ p2.dom
		end

	divorce (id1: INTEGER id2: INTEGER)
			-- divorce id1 and id2
		require
			id1_id2_can_divorce: divorceable (id1, id2)
		do
			check attached people [id1] as p1 then
				p1.divorce
			end
		ensure
			attached people [id1] as p1
			attached people [id2] as p2
			divorced: p1.is_single and p2.is_single
		end

	die (id: INTEGER)
		require
			id_nonnegative_and_used_and_is_alive: dieable (id)
		do
			check attached people [id] as p then
				p.die
			end
		ensure
			attached people [id] as p
			id_is_dead: not p.is_alive
		end

	set_error_message(m:STRING)
	require
		not_void_and_empty: m /= Void and not m.is_empty
	do
		error_message := m
	end

feature -- model operations

	default_update
			-- Perform update to the model state.
		do
				--			i := i + 1
		end

	reset
			-- Reset model state.
		do
			make
		end

feature -- preconditions

	marriageable (id1: INTEGER id2: INTEGER y: INTEGER m: INTEGER d: INTEGER): BOOLEAN
			-- Whether two people with passed ids can marry each other
		do
			if id1 = id2 then
				Result := false
			elseif id1 < 0 or id2 < 0 then
				Result := false
			elseif not people.has (id1) or not people.has (id2) then
				Result := false
			else
				check attached people [id1] as p1 then
					check attached people [id2] as p2 then
						Result := p1.can_marry (p2, y, m, d)
					end
				end
			end
		end

	divorceable (id1: INTEGER id2: INTEGER): BOOLEAN
			-- Whether id1 and id2 can be divorced
		do
			if id1 = id2 then
				Result := false
			elseif id1 < 0 or id2 < 0 then
				Result := false
			elseif not people.has (id1) or not people.has (id2) then
				Result := false
			else
				check attached people [id1] as p1 then
					check attached people [id2] as p2 then
						Result := not p1.is_single and not p2.is_single and p1.spouse = p2 and p2.spouse = p1 and p1.dom ~ p2.dom
					end
				end
			end
		end

	dieable (id: INTEGER): BOOLEAN
		do
			if id < 0 then
				Result := false
			elseif not people.has (id) then
				Result := false
			else
				check attached people [id] as p then
					Result := p.is_alive
				end
			end
		end

feature -- queries

	out: STRING
		local
			key: INTEGER
			set: TWO_WAY_SORTED_SET [STRING]
			entry: STRING
			i: INTEGER
		do
			create set.make
			across
				people as person
			loop
				entry := "%N "
				entry := entry + person.item.name + "; ID: " + person.key.out + "; Born: " + format_date (person.item.dob) + "; Citizen: " + person.item.country + "; "
				if person.item.is_alive then
					if person.item.is_single then
						entry := entry + "Single"
					else
						check attached person.item.spouse as s then
							across
								people as p
							loop
								if s = p.item then
									key := p.key
								end
							end
							check attached s.dom as sd then
								entry := entry + "Spouse: " + s.name + "," + key.out + ",[" + format_date (sd) + "]"
							end
						end
					end
				else
					entry := entry + "Deceased"
				end
				set.put_front (entry)
			end
			set.sort
			check set.sorted end

			Result := " " + error_message
			from
				i := 1
			until
				i > set.count
			loop
				Result := Result + set.i_th (i)
				i := i + 1
			end
		end

feature {NONE} -- auxiliary

	format_date (date: DATE): STRING
			-- format the date to the string of "year-month-day"
		local
			month: STRING
			day: STRING
		do
			if date.month < 10 then
				month := "0" + date.month.out
			else
				month := date.month.out
			end
			if date.day < 10 then
				day := "0" + date.day.out
			else
				day := date.day.out
			end
			Result := date.year.out + "-" + month + "-" + day
		end
end
