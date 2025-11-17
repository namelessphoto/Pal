#pragma once
#include "CoreMinimal.h"
#include "PalStaticItemIdAndNum.h"
#include "PalRecordCountRewardData.generated.h"

USTRUCT(BlueprintType)
struct FPalRecordCountRewardData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName RecordID;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 RequireCount;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FPalStaticItemIdAndNum> RewardItems;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 ExpBonusLevel;
    
    PAL_API FPalRecordCountRewardData();
};

