#pragma once
#include "CoreMinimal.h"
#include "EPalMapObjectRankUpCharacterResult.h"
#include "PalMapObjectRankUpCharacterResultSingleDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FPalMapObjectRankUpCharacterResultSingleDelegate, const EPalMapObjectRankUpCharacterResult, Result);

