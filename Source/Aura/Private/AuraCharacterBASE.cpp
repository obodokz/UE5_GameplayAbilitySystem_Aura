// Fill out your copyright notice in the Description page of Project Settings.


#include "AuraCharacterBASE.h"

// Sets default values
AAuraCharacterBASE::AAuraCharacterBASE()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AAuraCharacterBASE::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAuraCharacterBASE::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AAuraCharacterBASE::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

