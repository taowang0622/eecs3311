note
	description: "Summary description for {MATERIAL}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

expanded class
	MATERIAL
feature
	list:ARRAY[STRING]
	once
		create Result.make_from_array (<<"glass", "metal", "plastic", "liquid">>)
	end

feature --queries
	material_list_string(indices: ARRAY[INTEGER]):STRING
	require
		indices.count /= 0
		across indices as it all it.item >= 1 and it.item <= list.count end
	local
		index: INTEGER
	do
		Result := "{"
		across indices as it loop
			index := it.item
			Result := Result + list[index] + ","
		end
		Result.remove (Result.count)
		Result := Result + "}"
	end


invariant
	list = list
end
