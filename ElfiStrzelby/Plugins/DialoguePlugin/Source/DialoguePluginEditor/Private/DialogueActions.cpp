// Fill out your copyright notice in the Description page of Project Settings.


#include "DialogueActions.h"
#include "Dialogue.h"

UClass* FDialogueAssetTypeActions::GetSupportedClass() const
{
	return UDialogue::StaticClass();
}

FText FDialogueAssetTypeActions::GetName() const
{
	return INVTEXT("Dialogue");
}

FColor FDialogueAssetTypeActions::GetTypeColor() const
{
	return FColor::Cyan;
}

uint32 FDialogueAssetTypeActions::GetCategories()
{
	return EAssetTypeCategories::Misc;
}
