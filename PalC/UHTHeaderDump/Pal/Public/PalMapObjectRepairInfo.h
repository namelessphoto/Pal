#pragma once
#include "CoreMinimal.h"
#include "PalDataTableRowName_ItemData.h"
#include "PalMapObjectRepairInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalMapObjectRepairInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FPalDataTableRowName_ItemData RepairKitItemName;
    
    UPROPERTY(EditDefaultsOnly)
    int32 RepairKitRequiredNum;
    
    UPROPERTY(EditDefaultsOnly)
    float RepairRequiredWorkAmount;
    
    PAL_API FPalMapObjectRepairInfo();
};

