// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleInterface.h"

class IElfiStrzelbyModule : public IModuleInterface
{
	virtual bool IsGameModule() const override
	{
		return true;
	}
};
