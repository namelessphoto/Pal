#pragma once
#include "CoreMinimal.h"
#include "EPalOtomoPalOrderType.h"
#include "PalArenaPlayerNoSaveRestoreParameter.generated.h"

USTRUCT()
struct FPalArenaPlayerNoSaveRestoreParameter {
    GENERATED_BODY()
public:
    UPROPERTY()
    EPalOtomoPalOrderType OrderType;
    
    PAL_API FPalArenaPlayerNoSaveRestoreParameter();
};

