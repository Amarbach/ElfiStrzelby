// Copyright Epic Games, Inc. All Rights Reserved.

#include "DialoguePluginEditor.h"

#define LOCTEXT_NAMESPACE "FDialoguePluginModule"

void FDialoguePluginEditorModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	DialogueAssetTypeActions = MakeShared<FDialogueAssetTypeActions>();
	FAssetToolsModule::GetModule().Get().RegisterAssetTypeActions(DialogueAssetTypeActions.ToSharedRef());
}

void FDialoguePluginEditorModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.

	if (!FModuleManager::Get().IsModuleLoaded("AssetTools"))
	{
		return;
	}

	FAssetToolsModule::GetModule().Get().UnregisterAssetTypeActions(DialogueAssetTypeActions.ToSharedRef());
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FDialoguePluginEditorModule, DialoguePluginEditor)