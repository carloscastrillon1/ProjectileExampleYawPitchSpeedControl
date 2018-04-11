#pragma once
#include "CoreMinimal.h"
#include "UnrealEngine.h"


UENUM(BlueprintType)
enum class EArchetypes1 : uint8
{
	Ninja				UMETA(DisplayName = "Ninja"),
	Samurai				UMETA(DisplayName = "Samurai"),
	Damnio,
	Worker	=	1		UMETA(DisplayName = "Worker"),
	Soldier				UMETA(DisplayName = "Soldier"),
	Civil				UMETA(DisplayName = "Civil"),
};
