// Copyright Epic Games, Inc. All Rights Reserved.

#include "ElfiStrzelby.h"
#include "Modules/ModuleManager.h"

//class FElfiStrzelbyModule : public IModuleInterface
//{
//private:
//	TSharedPtr<FDialogueAssetTypeActions> DialogueAssetTypeActions;
//public:
//	virtual void StartupModule() override
//	{
//		DialogueAssetTypeActions = MakeShared< FDialogueAssetTypeActions>();
//		FAssetToolsModule::GetModule().Get().RegisterAssetTypeActions(DialogueAssetTypeActions.ToSharedRef());
//	}
//
//	virtual void ShutdownModule() override
//	{
//		if (!FModuleManager::Get().IsModuleLoaded("AssetTools"))
//		{
//			return;
//		}
//
//		FAssetToolsModule::GetModule().Get().UnregisterAssetTypeActions(DialogueAssetTypeActions.ToSharedRef());
//	}
//};

IMPLEMENT_PRIMARY_GAME_MODULE( FDefaultGameModuleImpl, ElfiStrzelby, "ElfiStrzelby" );
