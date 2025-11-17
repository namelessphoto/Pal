#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "CachedRigElement.h"
#include "RigUnit_TwistBones_WorkData.generated.h"

USTRUCT()
struct CONTROLRIG_API FRigUnit_TwistBones_WorkData {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FCachedRigElement> CachedItems;
    
    UPROPERTY()
    TArray<float> ItemRatios;
    
    UPROPERTY()
    TArray<FTransform> ItemTransforms;
    
    FRigUnit_TwistBones_WorkData();
};

