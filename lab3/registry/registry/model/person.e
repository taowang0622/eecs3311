note
	description: "A person model."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

deferred class
	PERSON

feature -- atrributs

	name: STRING

	dob: DATE
			-- date of birth

	country: STRING

	alive: BOOLEAN
			-- dead or alive

	spouse: detachable PERSON

	dom: detachable DATE
			-- date of marriage

feature -- queries

	is_alive: BOOLEAN
			-- is alive?
		do
			Result := alive
		end

	can_marry (other: PERSON y:INTEGER m:INTEGER d:INTEGER): BOOLEAN
			-- can marry on a specified day?
		require
			other_is_not_Void: other /= Void
		local
			day: DATE
			adult1: DATE
			adult2: DATE
		do
			if not is_alive or not other.is_alive then
				Result := false
			elseif not is_single or not other.is_single then
				Result := false
			else
				day := create {DATE}.make (y, m, d)

				if dob.is_leap_year (dob.year) and dob.month = 2 and dob.day = 29 then
					if dob.is_leap_year (dob.year + 18) then
						create adult1.make (dob.year + 18, dob.month, dob.day)
					else
						create adult1.make (dob.year + 18, dob.month, dob.day - 1)
					end
				else
					create adult1.make (dob.year + 18, dob.month, dob.day)
				end

				if other.dob.is_leap_year (other.dob.year) and other.dob.month = 2 and other.dob.day = 29 then
					if other.dob.is_leap_year (other.dob.year + 18) then
						create adult2.make (other.dob.year + 18, other.dob.month, other.dob.day)
					else
						create adult2.make (other.dob.year + 18, other.dob.month, other.dob.day - 1)
					end
				else
					create adult2.make (other.dob.year + 18, other.dob.month, other.dob.day)
				end

				Result := day.is_greater_equal(adult1) and day.is_greater_equal(adult2)
			end
		end

	is_single: BOOLEAN
			-- is single?
		do
			result := spouse = Void and dom = Void
		end

feature -- commands

	marry (other: PERSON y: INTEGER m: INTEGER d: INTEGER)
			-- marry the other person
		require
			other_exits: other /= Void
			both_alive: is_alive and other.is_alive
			can_marry: can_marry (other, y, m, d)
		do
			set_dom (y, m, d)
			other.set_dom (y, m, d)
			set_spouse (other)
			other.set_spouse (Current)
		ensure
			spouse_and_dom_attached: attached spouse and attached dom
		end

	divorce
			-- end the marriage
		require
			is_married: NOT is_single
		do
			check attached spouse as s then
				s.set_spouse (Void)
				s.set_dom_void
			end
			set_spouse (Void)
			set_dom_void
		ensure
			is_single: is_single
			old_spouse_exists: attached (old spouse) as os
			old_spouse_is_single: os.is_single
		end

	die
			-- R.I.P
		do
			if not is_single then
				divorce
			end
			alive := false
		ensure
			not_alive: alive = false
			is_single: is_single
		end

	set_name (n: STRING)
			-- Set the person's name
		require
			name_is_not_void_and_empty: n /= Void and not n.is_empty
		do
			name := n
		ensure
			name ~ n
		end

	set_dob (y, m, d: INTEGER)
			-- set the date of birth
		do
			dob := create {DATE}.make (y, m, d)
		ensure
			dob_is_set_correctly: dob.is_correct_date (y, m, d)
		end

	set_country (c: STRING)
			-- set the citizen info
		require
			c_is_not_void_and_empty: c /= Void and not c.is_empty
		do
			country := c
		end

	set_alive
			-- alive!
		do
			alive := true
		end

feature {PERSON} -- implementations

	set_spouse (s: detachable PERSON)
			-- set the spouse
		do
			spouse := s
		end

	set_dom (y, m, d: INTEGER)
			-- set the date of marriage
		do
			dom := create {DATE}.make (y, m, d)
		ensure
			dom_is_attached: attached dom as dm
			dom_is_set_correctly: dm.is_correct_date (y, m, d)
		end

	set_dom_void
			-- set the date of marriage to Void
		do
			dom := Void
		end

invariant
	name_is_not_void_empty: name /= Void and not name.is_empty
	date_of_birth_is_not_void: dob /= Void
	citizen_is_not_void_and_empty: country /= Void and not country.is_empty
	if_dead_not_married: not alive implies spouse = Void and dom = Void
		--	single_or_married: (spouse = Void and dom = Void) or (spouse /= Void and dom /= Void)
	married: (attached spouse as s and attached dom as d) implies s.alive and Current.alive and s.spouse = Current and Current.dom ~ s.dom

end
