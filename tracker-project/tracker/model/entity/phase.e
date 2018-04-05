note
	description: "A processing phase"
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	PHASE

inherit
	COMPARABLE

create
	make

feature -- attributes

	pid: STRING

	phase_name: STRING

	capacity: INTEGER

	expected_materials: ARRAY [INTEGER]

	containers: SEQ [RADIATION_CONTAINER] --containers in the phase

feature {NONE} -- creation

	make (phase_id: STRING phase_n: STRING c: INTEGER e_m: ARRAY [INTEGER])
		do
			pid := phase_id
			phase_name := phase_n
			capacity := c
			expected_materials := e_m
			create containers.make_empty
		end

feature -- commands

	add_new_container (container: RADIATION_CONTAINER)
		require
			phase_is_not_full: containers.count < capacity
			material_is_expected: expected_materials.has (container.material_id)
		local
			qs: QUICKSORT[RADIATION_CONTAINER]
			arr: ARRAY[RADIATION_CONTAINER]
		do
			containers.append (container)
			create qs.make
			arr := qs.quicksort (containers.as_array)
			containers := create {SEQ[RADIATION_CONTAINER]}.make_from_array (arr)
		ensure
			container_is_added: containers.count = (old containers.count) + 1 and containers.has (container)
			containers_sorted: across 1 |..| (containers.count - 1) as it
								all containers[it.item].cid <= containers[it.item + 1].cid end
		end

	remove_container(container: RADIATION_CONTAINER)
		require
			container_in_the_phase: containers.has (container)
		local
			i: INTEGER
		do
			-- This loop is able to terminate definitely according to pre-conds
			from
				i := 1
			until
				containers.item (i) = container
			loop
				i := i + 1
			end

			containers.remove (i)
		ensure
			container_has_been_removed: containers.count = (old containers.count) - 1 and not containers.has (container)
			containers_sorted: across 1 |..| (containers.count - 1) as it
							   all containers[it.item].cid <= containers[it.item + 1].cid end
		end

feature -- queries
	radiation: VALUE
		-- return the total amount of radioactivity of all containers
	local
		total: VALUE
	do
		create total.make_from_int (0)
		across containers
			 as c
		loop
			total := total.plus (c.item.radioactivity)
		end
		Result := total
	end

	is_less alias "<" (other: like Current): BOOLEAN
		-- implement the deferred feature in COMPARABLE
	do
		Result := Current.pid < other.pid
	end

	has_container(cid: STRING): BOOLEAN
	do
		Result := false
		across containers as it loop
			if it.item.cid ~ cid then
				Result := true
			end
		end
	ensure
		Result = across containers as it some it.item.cid ~ cid  end
	end

	is_full:BOOLEAN
	do
		Result := capacity = containers.count
	end

feature {NONE} --helper features

	is_valid_string (s: STRING): BOOLEAN
			-- valid string starts with A-Z, a-z or 0..9
		local
			first: CHARACTER
		do
			if s.is_empty then
				Result := false
			else
				first := s.at (1)
				Result := ('a' <= first and first <= 'z') or ('A' <= first and first <= 'Z') or ('0' <= first and first <= '9')
			end
		end

invariant
	pid_is_valid: is_valid_string (pid)
	phase_name_is_valid: is_valid_string (phase_name)
	expected_materials_are_valid: across expected_materials as c all c.item >= 1 and c.item <= (create {MATERIAL}).list.count end
	num_of_containers_within_capacity: containers.count <= capacity
	materials_in_all_containers_are_expected: across containers as c all expected_materials.has (c.item.material_id) end
end
