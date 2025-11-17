#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "PalFishingBaitDataRow.generated.h"

USTRUCT(BlueprintType)
struct FPalFishingBaitDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float HitBarSizeRate;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MissFightAmountRate;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float SuccessFightAmountRate;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float SearchProbabilityRate;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float StartProgressAmountPercent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float EnemyAddDropPercent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ItemLotteryAddDropPercent;
    
    PAL_API FPalFishingBaitDataRow();
};

