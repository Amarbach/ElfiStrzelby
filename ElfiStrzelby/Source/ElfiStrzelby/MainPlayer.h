// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PaperCharacter.h"
#include "MainPlayer.generated.h"

/**
 * 
 */
UCLASS()
class ELFISTRZELBY_API AMainPlayer : public APaperCharacter
{
	GENERATED_BODY()
	
public:
	void SetupPlayerInputComponent(UInputComponent* InputComponent) override;

protected:
	void MoveRight(float Val);
	void Jump();

};
