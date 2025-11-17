#pragma once
#include "CoreMinimal.h"
#include "PalDataTableRowName_ItemData.h"
#include "PalRaidBossSuccessItemInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalRaidBossSuccessItemInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FPalDataTableRowName_ItemData ItemName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float Rate;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 Min;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 Max;
    
    PAL_API FPalRaidBossSuccessItemInfo();
};

