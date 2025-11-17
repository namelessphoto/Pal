#pragma once
#include "CoreMinimal.h"
#include "EPalMapObjectRankUpCharacterResult.h"
#include "PalMapObjectRankUpCharacterResultDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPalMapObjectRankUpCharacterResultDelegate, const EPalMapObjectRankUpCharacterResult, Result);

