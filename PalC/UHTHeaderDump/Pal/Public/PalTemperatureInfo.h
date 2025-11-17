#pragma once
#include "CoreMinimal.h"
#include "EPalBodyTemperatureState.h"
#include "PalTemperatureInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalTemperatureInfo {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    int32 CurrentResistRank_Heat;
    
    UPROPERTY(Transient)
    int32 CurrentResistRank_Cold;
    
    UPROPERTY(Transient)
    int32 CurrentTemperature;
    
    UPROPERTY(Transient)
    EPalBodyTemperatureState CurrentBodyState;
    
    PAL_API FPalTemperatureInfo();
};

