#pragma once
#include "CoreMinimal.h"
#include "PalMiningRankDefineData.h"
#include "PalWorkSuitabilityDefineData.h"
#include "PalWorkSuitabilityMiningDefineData.generated.h"

USTRUCT(BlueprintType)
struct FPalWorkSuitabilityMiningDefineData {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FPalWorkSuitabilityDefineData CommonDefineData;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FPalMiningRankDefineData> MiningDefineData;
    
    PAL_API FPalWorkSuitabilityMiningDefineData();
};

