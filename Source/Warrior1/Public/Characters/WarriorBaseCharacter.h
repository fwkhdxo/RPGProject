// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AbilitySystemInterface.h"
#include "WarriorBaseCharacter.generated.h"

class UWarriorAttributeSet;
class UWarriorAbilitySystemComponent;
class UDataAsset_StartUpDataBase;

UCLASS()
class WARRIOR1_API AWarriorBaseCharacter : public ACharacter, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	
	AWarriorBaseCharacter();

	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const;

protected:
	virtual void PossessedBy(AController* NewController) override;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category= "AblitySystem")
	UWarriorAbilitySystemComponent* WarriorAbilitySystemComponent;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category= "AblitySystem")
	UWarriorAttributeSet* WarriorAttributeSet;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "CharacterData")
	TSoftObjectPtr<UDataAsset_StartUpDataBase> CharacterStartUpData;

public:
	FORCEINLINE UWarriorAbilitySystemComponent* GetWarriorAbilitySystemComponent() const { return WarriorAbilitySystemComponent; }
	FORCEINLINE UWarriorAttributeSet* GetWarriorAttribute() const { return WarriorAttributeSet; }
};
