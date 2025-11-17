#pragma once
#include "CoreMinimal.h"
#include "PalRaidBossSummonPalInfo.h"
#include "PalRaidBossSummonMeteorInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalRaidBossSummonMeteorInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float HPRate;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FPalRaidBossSummonPalInfo> SummonPalInfoList;
    
    PAL_API FPalRaidBossSummonMeteorInfo();
};

