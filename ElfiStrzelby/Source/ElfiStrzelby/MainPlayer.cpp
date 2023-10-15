// Fill out your copyright notice in the Description page of Project Settings.


#include "MainPlayer.h"

void AMainPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis(TEXT("MainPlayer_MoveRight"), this, &AMainPlayer::MoveRight);
	PlayerInputComponent->BindAction(TEXT("MainPlayer_Jump"), IE_Pressed, this, &AMainPlayer::Jump);
}

void AMainPlayer::MoveRight(float Val)
{
	auto Forward = GetActorForwardVector();
	AddMovementInput(Forward * Val);
}

void AMainPlayer::Jump()
{
	Super::Jump();
}
