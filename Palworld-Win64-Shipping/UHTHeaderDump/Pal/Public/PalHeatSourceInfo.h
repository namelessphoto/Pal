#pragma once
#include "CoreMinimal.h"
#include "PalHeatSourceInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalHeatSourceInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    int32 HeatLevel_DayTime;
    
    UPROPERTY(BlueprintReadWrite)
    int32 HeatLevel_NightTime;
    
    PAL_API FPalHeatSourceInfo();
};

