#pragma once
#include "CoreMinimal.h"
#include "PalItemFlowInSplineInfo.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FPalItemFlowInSplineInfo {
    GENERATED_BODY()
public:
    UPROPERTY(Transient, VisibleInstanceOnly)
    AActor* ItemActor;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    float ProgressTime;
    
    PAL_API FPalItemFlowInSplineInfo();
};

