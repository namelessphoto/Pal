#pragma once
#include "CoreMinimal.h"
#include "EPalPalDisplayCategory.h"
#include "PalStaticItemIdAndNum.h"
#include "PalDisplayRequestData.generated.h"

USTRUCT(BlueprintType)
struct FPalDisplayRequestData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName RequestID;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPalPalDisplayCategory RequestCategory;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName RequestPalID;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FPalStaticItemIdAndNum> RewardItems;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 ExpBonusLevel;
    
    PAL_API FPalDisplayRequestData();
};

