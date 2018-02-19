note
	description: "The interface for an input COMMAND"
	author: ""
	date: "$Date$"
	revision: "$Revision$"

deferred class
	ETF_COMMAND

inherit
	ETF_COMMAND_INTERFACE
		redefine
			make
		end

feature {NONE}
	make(an_etf_cmd_name: STRING; etf_cmd_args: TUPLE; an_etf_cmd_container: ETF_ABSTRACT_UI_INTERFACE)
		local
		  registry_access: REGISTRY_ACCESS
		do
			Precursor(an_etf_cmd_name, etf_cmd_args, an_etf_cmd_container)
			-- may set your own model state here ...
			registry := registry_access.m
		end

feature -- Attributes
	registry : REGISTRY
		-- registry
feature -- Error messages
	err_id_nonpositive: STRING = "id must be positive"
	err_id_unused : STRING = "id not identified with a person in database"
	err_id_same : STRING = "ids must be different"
	err_id_taken: STRING = "id already taken"
	err_name_start: STRING_32 = "name must start with A-Z or a-z"
	err_country_start: STRING_32 = "country must start with A-Z or a-z"
	err_invalid_date: STRING = "not a valid date in 1900..3000"
	err_marry: STRING = "proposed marriage invalid"
	err_divorce: STRING = "these are not married"
	err_dead_already: STRING = "person with that id already dead"
feature -- Queries
	is_valid_date(year, month, day:INTEGER): BOOLEAN
		-- corresponds to the error message "not a valid date in 1900..3000"
	local
		date:DATE
	do
		create date.make_now
		result := year >= 1900 and year <= 3000 and month >= 1 and month <= 12
				and day >= 1 and day <= date.days_in_i_th_month (month, year)
	end

	is_valid_string(s:STRING):BOOLEAN
	 	-- corresponds to the errro measage "name must start with AâZ or aâz" or  "country must start with AâZ or aâz"
	require
		string_not_void: s /= Void
	local
		first:CHARACTER
	do
		if s.is_empty then
			Result := false
		else
			first := s.at (1)
			Result := ('a' <= first and first <= 'z') or ('A' <= first and first <= 'Z')
		end
	end
end
