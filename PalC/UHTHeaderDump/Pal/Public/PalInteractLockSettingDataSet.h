#pragma once
#include "CoreMinimal.h"
#include "PalInteractLockSettingData.h"
#include "PalInteractLockSettingDataSet.generated.h"

USTRUCT(BlueprintType)
struct FPalInteractLockSettingDataSet {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    TArray<FPalInteractLockSettingData> ItemLockSettingData;
    
    PAL_API FPalInteractLockSettingDataSet();
};

