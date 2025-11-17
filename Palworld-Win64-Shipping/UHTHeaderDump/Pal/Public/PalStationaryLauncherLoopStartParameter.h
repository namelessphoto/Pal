#pragma once
#include "CoreMinimal.h"
#include "PalStationaryLauncherLoopStartParameter.generated.h"

USTRUCT(BlueprintType)
struct FPalStationaryLauncherLoopStartParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    float LoopInterval;
    
    UPROPERTY(BlueprintReadWrite)
    int32 LoopCount;
    
    PAL_API FPalStationaryLauncherLoopStartParameter();
};

