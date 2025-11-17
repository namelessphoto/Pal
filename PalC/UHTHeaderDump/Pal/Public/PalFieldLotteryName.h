#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "PalFieldLotteryName.generated.h"

USTRUCT(BlueprintType)
struct FPalFieldLotteryName : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    float ItemSlot1_ProbabilityPercent;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    float ItemSlot2_ProbabilityPercent;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    float ItemSlot3_ProbabilityPercent;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    float ItemSlot4_ProbabilityPercent;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    float ItemSlot5_ProbabilityPercent;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    float ItemSlot6_ProbabilityPercent;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    float ItemSlot7_ProbabilityPercent;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    float ItemSlot8_ProbabilityPercent;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    float ItemSlot9_ProbabilityPercent;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    float ItemSlot10_ProbabilityPercent;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    float ItemSlot11_ProbabilityPercent;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    float ItemSlot12_ProbabilityPercent;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    float ItemSlot13_ProbabilityPercent;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    float ItemSlot14_ProbabilityPercent;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    float ItemSlot15_ProbabilityPercent;
    
    PAL_API FPalFieldLotteryName();
};

