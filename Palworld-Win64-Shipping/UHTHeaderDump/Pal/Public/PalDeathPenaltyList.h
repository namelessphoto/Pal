#pragma once
#include "CoreMinimal.h"
#include "PalDeathPenaltyInfo.h"
#include "PalDeathPenaltyList.generated.h"

USTRUCT(BlueprintType)
struct FPalDeathPenaltyList {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TArray<FPalDeathPenaltyInfo> DeathPenaArray;
    
    PAL_API FPalDeathPenaltyList();
};

