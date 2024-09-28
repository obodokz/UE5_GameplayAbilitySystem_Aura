// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AuraCharacterBASE.generated.h"

UCLASS(Abstract)
class AURA_API AAuraCharacterBASE : public ACharacter
{
	GENERATED_BODY()

public:
	AAuraCharacterBASE();

protected:
	
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, Category="Combat")
	TObjectPtr<USkeletalMeshComponent> Weapon;


};
