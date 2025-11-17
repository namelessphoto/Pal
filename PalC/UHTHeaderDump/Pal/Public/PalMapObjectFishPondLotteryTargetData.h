#pragma once
#include "CoreMinimal.h"
#include "PalDataTableRowName_ItemData.h"
#include "PalWorkSuitabilityDefineData.h"
#include "PalMapObjectFishPondLotteryTargetData.generated.h"

USTRUCT(BlueprintType)
struct FPalMapObjectFishPondLotteryTargetData {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FPalDataTableRowName_ItemData RequiredMaterialStaticItemId;
    
    UPROPERTY(EditDefaultsOnly)
    int32 RequiredMaterialItemNum;
    
    UPROPERTY(EditDefaultsOnly)
    float RequiredWorkAmound;
    
    UPROPERTY(EditDefaultsOnly)
    FPalWorkSuitabilityDefineData WorkSuitabilityDefineData;
    
    PAL_API FPalMapObjectFishPondLotteryTargetData();
};

