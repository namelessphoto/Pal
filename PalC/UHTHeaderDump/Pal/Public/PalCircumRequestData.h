#pragma once
#include "CoreMinimal.h"
#include "EPalItemRequireCategory.h"
#include "PalStaticItemIdAndNum.h"
#include "PalCircumRequestData.generated.h"

USTRUCT(BlueprintType)
struct FPalCircumRequestData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName RequestID;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPalItemRequireCategory RequestCategory;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FPalStaticItemIdAndNum RequestItem;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FPalStaticItemIdAndNum> RewardItems;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 ExpBonusLevel;
    
    PAL_API FPalCircumRequestData();
};

