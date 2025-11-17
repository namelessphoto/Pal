#pragma once
#include "CoreMinimal.h"
#include "EPalMapObjectTreasureGradeType.h"
#include "PalItemAndNum.h"
#include "PalEnemyCampTreasureBoxItemInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalEnemyCampTreasureBoxItemInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName MapObjectId;
    
    UPROPERTY()
    EPalMapObjectTreasureGradeType GradeType;
    
    UPROPERTY()
    TArray<FPalItemAndNum> Items;
    
    UPROPERTY()
    bool bOpened;
    
    PAL_API FPalEnemyCampTreasureBoxItemInfo();
};

