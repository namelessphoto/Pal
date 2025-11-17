#pragma once
#include "CoreMinimal.h"
#include "MotionWarpingUpdateContext.generated.h"

class UAnimSequenceBase;

USTRUCT()
struct FMotionWarpingUpdateContext {
    GENERATED_BODY()
public:
    UPROPERTY()
    TWeakObjectPtr<UAnimSequenceBase> Animation;
    
    UPROPERTY()
    float PreviousPosition;
    
    UPROPERTY()
    float CurrentPosition;
    
    UPROPERTY()
    float Weight;
    
    UPROPERTY()
    float PlayRate;
    
    UPROPERTY()
    float DeltaSeconds;
    
    MOTIONWARPING_API FMotionWarpingUpdateContext();
};

