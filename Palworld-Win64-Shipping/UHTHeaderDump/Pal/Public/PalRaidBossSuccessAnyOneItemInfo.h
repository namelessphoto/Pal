#pragma once
#include "CoreMinimal.h"
#include "PalDataTableRowName_ItemData.h"
#include "PalRaidBossSuccessAnyOneItemInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalRaidBossSuccessAnyOneItemInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FPalDataTableRowName_ItemData ItemName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 Num;
    
    PAL_API FPalRaidBossSuccessAnyOneItemInfo();
};

