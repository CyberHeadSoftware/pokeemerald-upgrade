SlateportCity_House_MapScripts:: @ 820D9AE
	.byte 0

SlateportCity_House_EventScript_PokefanM:: @ 820D9AF
	msgbox SlateportCity_House_Text_NatureToDoWithStatGains, MSGBOX_NPC
	end

SlateportCity_House_EventScript_Girl:: @ 820D9B8
	msgbox SlateportCity_House_Text_MustBeGoingToBattleTent, MSGBOX_NPC
	end

SlateportCity_House_Text_NatureToDoWithStatGains: @ 820D9C1
	.string "My pokémon has a hasty nature.\p"
	.string "It has higher speed compared to\n"
	.string "my other pokémon.\p"
	.string "Maybe their nature has something to\n"
	.string "do with the stat gains of pokémon.$"

SlateportCity_House_Text_MustBeGoingToBattleTent: @ 820DA59
	.string "You're a trainer, aren't you?\p"
	.string "Since you came to Slateport City,\n"
	.string "you must be going to the Battle Tent.$"

