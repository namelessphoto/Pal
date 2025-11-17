#pragma once
#include "CoreMinimal.h"
#include "EPalMapObjectTreasureGradeType.h"
#include "PalItemAndNum.h"
#include "PalTreasureBoxLotteryResult.generated.h"

USTRUCT()
struct FPalTreasureBoxLotteryResult {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName MapObjectId;
    
    UPROPERTY()
    TArray<FPalItemAndNum> Items;
    
    UPROPERTY()
    EPalMapObjectTreasureGradeType GradeType;
    
    PAL_API FPalTreasureBoxLotteryResult();
};

