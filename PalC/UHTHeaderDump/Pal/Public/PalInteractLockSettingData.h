#pragma once
#include "CoreMinimal.h"
#include "PalDataTableRowName_ItemData.h"
#include "PalInteractLockSettingData.generated.h"

USTRUCT()
struct FPalInteractLockSettingData {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    FPalDataTableRowName_ItemData ItemName;
    
    UPROPERTY(EditInstanceOnly)
    int32 requireNum;
    
    PAL_API FPalInteractLockSettingData();
};

