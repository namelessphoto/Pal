#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "CachedRigElement.h"
#include "RigPoseElement.generated.h"

USTRUCT()
struct CONTROLRIG_API FRigPoseElement {
    GENERATED_BODY()
public:
    UPROPERTY()
    FCachedRigElement Index;
    
    UPROPERTY()
    FTransform GlobalTransform;
    
    UPROPERTY()
    FTransform LocalTransform;
    
    UPROPERTY()
    float CurveValue;
    
    FRigPoseElement();
};

