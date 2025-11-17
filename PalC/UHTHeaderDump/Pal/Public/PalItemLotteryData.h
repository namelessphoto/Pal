#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "EPalMapObjectTreasureGradeType.h"
#include "PalItemLotteryData.generated.h"

USTRUCT(BlueprintType)
struct FPalItemLotteryData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName FieldName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 SlotNo;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float WeightInSlot;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName StaticItemId;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 MinNum;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 MaxNum;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 NumUnit;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPalMapObjectTreasureGradeType TreasureBoxGrade;
    
    PAL_API FPalItemLotteryData();
};

