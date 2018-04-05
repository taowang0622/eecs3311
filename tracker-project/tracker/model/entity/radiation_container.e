note
	description: "A container containing radioactive substance"
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	RADIATION_CONTAINER

inherit
	COMPARABLE

create
	make

feature
	cid: STRING
	material_id: INTEGER
	radioactivity: VALUE

feature {NONE} -- creation
	make(container_id: STRING m_id:INTEGER radiation:VALUE)
	do
		cid := container_id
		material_id := m_id
		radioactivity := radiation
	end

feature
	is_less alias "<" (other: like Current): BOOLEAN
		-- implement the deferred feature in COMPARABLE
	do
		Result := Current.cid < other.cid
	end

invariant
	material_id_is_valid: material_id > 0 and (create {MATERIAL}).list.count >= material_id
	cid_is_valid: cid.count /= 0 and then (('a' <= cid.at (1) and cid.at (1) <= 'z') or
	('A' <= cid.at (1) and cid.at (1) <= 'Z') or ('0' <= cid.at (1) and cid.at (1) <= '9'))
	radioaivity_is_valid: radioactivity >= 0.00
end
