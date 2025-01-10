// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "NativeGameplayTags.h"

namespace WarriorGameplayTags
{
	/*Input Tags */
	WARRIOR1_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(InputTag_Move);
	WARRIOR1_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(InputTag_Look);
	WARRIOR1_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(InputTag_EquipAxe);
	WARRIOR1_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(InputTag_UnEquipAxe);
	/*Player Tags */
	WARRIOR1_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Weapn_Axe);

	WARRIOR1_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Event_Equip_Axe);
	WARRIOR1_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Event_UnEquip_Axe);
}

