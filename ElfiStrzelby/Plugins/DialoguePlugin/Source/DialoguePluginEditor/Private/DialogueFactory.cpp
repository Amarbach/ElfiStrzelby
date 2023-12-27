// Fill out your copyright notice in the Description page of Project Settings.


#include "DialogueFactory.h"
#include "Dialogue.h"

UDialogueFactory::UDialogueFactory()
{
	SupportedClass = UDialogue::StaticClass();
	bCreateNew = true;
}

UObject* UDialogueFactory::FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	return NewObject<UDialogue>(InParent, Class, Name, Flags, Context);
}
