// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Item/Weapons/WarriorWeaponBase.h"
#include "Warrior Types/WarriorStructTypes.h"
#include "WarriorHeroWeapon.generated.h"

/**
 * 
 */
UCLASS()
class WARRIOR1_API AWarriorHeroWeapon : public AWarriorWeaponBase
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "WeaponData")
	FWarriorHeroWeaponData HeroWeaponData;
};
