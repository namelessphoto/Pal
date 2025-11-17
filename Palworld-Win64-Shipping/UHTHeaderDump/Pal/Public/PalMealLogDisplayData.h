#pragma once
#include "CoreMinimal.h"
#include "PalInstanceID.h"
#include "PalMealLogDisplayData.generated.h"

USTRUCT(BlueprintType)
struct FPalMealLogDisplayData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FPalInstanceID InstanceId;
    
    UPROPERTY(BlueprintReadWrite)
    FName MealItemID;
    
    PAL_API FPalMealLogDisplayData();
};

