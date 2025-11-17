#pragma once
#include "CoreMinimal.h"
#include "MotionProcessInput.generated.h"

USTRUCT()
struct FMotionProcessInput {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bForceEffectorRotationTarget;
    
    UPROPERTY(EditAnywhere)
    bool bOnlyApplyWhenReachedToTarget;
    
    FULLBODYIK_API FMotionProcessInput();
};

