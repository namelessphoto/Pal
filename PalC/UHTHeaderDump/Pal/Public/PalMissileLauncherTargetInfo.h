#pragma once
#include "CoreMinimal.h"
#include "PalMissileLauncherTargetInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalMissileLauncherTargetInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    float InRangeTimer;
    
    UPROPERTY()
    bool IsSentWarningSign;
    
    PAL_API FPalMissileLauncherTargetInfo();
};

