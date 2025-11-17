#pragma once
#include "CoreMinimal.h"
#include "PalAIActionBaseCampSleepActivelyParameter.generated.h"

USTRUCT(BlueprintType)
struct FPalAIActionBaseCampSleepActivelyParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    float WalkAroundTime;
    
    PAL_API FPalAIActionBaseCampSleepActivelyParameter();
};

