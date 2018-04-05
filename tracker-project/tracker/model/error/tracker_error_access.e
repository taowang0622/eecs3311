note
	description: "Summary description for {TRACKER_ERROR_ACCESS}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

expanded class
	TRACKER_ERROR_ACCESS

feature -- All errors

	e1: TRACKER_ERROR
	once
		create Result.make(1, "current tracker is in use")
	end

	e2: TRACKER_ERROR
	once
		create Result.make(2, "max phase radiation must be non-negative value")
	end

	e3: TRACKER_ERROR
	once
		create Result.make(3, "max container radiation must be non-negative value")
	end

	e4: TRACKER_ERROR
	once
		create Result.make(4, "max container must not be more than max phase radiation")
	end

	e5: TRACKER_ERROR
	once
		create Result.make(5, "identifiers/names must start with A-Z, a-z or 0..9")
	end

	e6: TRACKER_ERROR
	once
		create Result.make(6, "phase identifier already exists")
	end

	e7: TRACKER_ERROR
	once
		create Result.make(7, "phase capacity must be a positive integer")
	end

	e8: TRACKER_ERROR
	once
		create Result.make(8, "there must be at least one expected material for this phase")
	end

	e9: TRACKER_ERROR
	once
		create Result.make(9, "phase identifier not in the system")
	end

	e10: TRACKER_ERROR
	once
		create Result.make(10, "this container identifier already in tracker")
	end

	e11: TRACKER_ERROR
	once
		create Result.make(11, "this container will exceed phase capacity")
	end

	e12: TRACKER_ERROR
	once
		create Result.make(12, "this container will exceed phase safe radiation")
	end

	e13: TRACKER_ERROR
	once
		create Result.make(13, "phase does not expect this container material")
	end

	e14: TRACKER_ERROR
	once
		create Result.make(14, "container radiation capacity exceeded")
	end

	e15: TRACKER_ERROR
	once
		create Result.make(15, "this container identifier not in tracker")
	end

	e16: TRACKER_ERROR
	once
		create Result.make(5, "source and target phase identifier must be different")
	end

	e17: TRACKER_ERROR
	once
		create Result.make(17, "this container identifier is not in the source phase")
	end

	e18: TRACKER_ERROR
	once
		create Result.make(18, "this container radiation must not be negative")
	end

	e19: TRACKER_ERROR
	once
		create Result.make(19, "there is no more to undo")
	end

	e20: TRACKER_ERROR
	once
		create Result.make(20, "there is no more to redo")
	end
invariant
	e1 = e1
	e2 = e2
	e3 = e3
	e4 = e4
	e5 = e5
	e6 = e6
	e7 = e7
	e8 = e8
	e9 = e9
	e10 = e10
	e11 = e11
	e12 = e12
	e13 = e13
	e14 = e14
	e15 = e15
	e16 = e16
	e17 = e17
	e18 = e18
end
