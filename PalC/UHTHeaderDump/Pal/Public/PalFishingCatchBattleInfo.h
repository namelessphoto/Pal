#pragma once
#include "CoreMinimal.h"
#include "EPalFishBattleBehaviorType.h"
#include "PalFishingCatchBattleInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalFishingCatchBattleInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Transient, VisibleInstanceOnly)
    EPalFishBattleBehaviorType BehaviorType;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleInstanceOnly)
    float Difficulty;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleInstanceOnly)
    float HitBarSizeRate;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleInstanceOnly)
    float SuccessFightAmountRate;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleInstanceOnly)
    float MissFightAmountRate;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleInstanceOnly)
    float StartProgressAmountPercent;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleInstanceOnly)
    float InitFishPos;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleInstanceOnly)
    bool bIsFirstFishing;
    
    PAL_API FPalFishingCatchBattleInfo();
};

