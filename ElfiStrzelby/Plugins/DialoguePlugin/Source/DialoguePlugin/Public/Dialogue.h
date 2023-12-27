// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Dialogue.generated.h"

/**
 * 
 */
UCLASS()
class DIALOGUEPLUGIN_API UDialogue : public UObject
{
	GENERATED_BODY()
public:
	UDialogue();

private:
	UPROPERTY(EditAnywhere)
	int NumberOfAnswers;

	UPROPERTY(EditAnywhere)
	FText DialogueMessage;
};
