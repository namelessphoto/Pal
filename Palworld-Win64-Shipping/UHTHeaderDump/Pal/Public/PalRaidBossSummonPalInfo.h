#pragma once
#include "CoreMinimal.h"
#include "PalDataTableRowName_PalMonsterData.h"
#include "PalRaidBossSummonPalInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalRaidBossSummonPalInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<FPalDataTableRowName_PalMonsterData, int32> PalNameAndNum;
    
    PAL_API FPalRaidBossSummonPalInfo();
};

