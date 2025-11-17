#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "EPalFishingSpotDifficultyType.h"
#include "EPalOneDayTimeType.h"
#include "PalFishingSpotLotteryDataRow.generated.h"

USTRUCT(BlueprintType)
struct FPalFishingSpotLotteryDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName LotteryName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float Weight;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName FishShadowId;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName GainItemLotteryName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPalOneDayTimeType OnlyTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 MinLevel;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 MaxLevel;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 Difficulty;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float DecreaseDurability;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPalFishingSpotDifficultyType FishingSpotDifficulty;
    
    PAL_API FPalFishingSpotLotteryDataRow();
};

