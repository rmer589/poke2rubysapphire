ShoalCave_LowTideInnerRoom_MapObjects:: @ 838DD40
	object_event 1, MAP_OBJ_GFX_ITEM_BALL, 0, 26, 0, 14, 0, 5, 1, 17, 0, 0, 0, 0, 0, ShoalCave_LowTideInnerRoom_EventScript_1B1A03, 1082, 0, 0

ShoalCave_LowTideInnerRoom_MapWarps:: @ 838DD58
	warp_def 34, 29, 3, 1, MAP_SHOAL_CAVE_LOW_TIDE_ENTRANCE_ROOM
	warp_def 38, 15, 3, 0, MAP_SHOAL_CAVE_LOW_TIDE_STAIRS_ROOM
	warp_def 42, 4, 3, 1, MAP_SHOAL_CAVE_LOW_TIDE_STAIRS_ROOM
	warp_def 19, 14, 4, 0, MAP_SHOAL_CAVE_LOW_TIDE_LOWER_ROOM
	warp_def 15, 19, 3, 1, MAP_SHOAL_CAVE_LOW_TIDE_LOWER_ROOM
	warp_def 30, 25, 3, 2, MAP_SHOAL_CAVE_LOW_TIDE_LOWER_ROOM
	warp_def 14, 33, 5, 2, MAP_SHOAL_CAVE_LOW_TIDE_ENTRANCE_ROOM
	warp_def 40, 33, 5, 3, MAP_SHOAL_CAVE_LOW_TIDE_ENTRANCE_ROOM

ShoalCave_LowTideInnerRoom_MapBGEvents:: @ 838DD98
	bg_event 31, 8, 5, 0, 0, ShoalCave_LowTideInnerRoom_EventScript_15E329
	bg_event 14, 26, 3, 0, 0, ShoalCave_LowTideInnerRoom_EventScript_15E365
	bg_event 41, 20, 5, 0, 0, ShoalCave_LowTideInnerRoom_EventScript_15E257
	bg_event 41, 10, 5, 0, 0, ShoalCave_LowTideInnerRoom_EventScript_15E293
	bg_event 6, 9, 3, 0, 0, ShoalCave_LowTideInnerRoom_EventScript_15E2C5
	bg_event 16, 13, 5, 0, 0, ShoalCave_LowTideInnerRoom_EventScript_15E2F7

ShoalCave_LowTideInnerRoom_MapEvents:: @ 838DDE0
	map_events ShoalCave_LowTideInnerRoom_MapObjects, ShoalCave_LowTideInnerRoom_MapWarps, 0x0, ShoalCave_LowTideInnerRoom_MapBGEvents
