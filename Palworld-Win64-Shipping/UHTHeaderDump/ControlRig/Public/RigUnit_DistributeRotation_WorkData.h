#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "CachedRigElement.h"
#include "RigUnit_DistributeRotation_WorkData.generated.h"

USTRUCT()
struct CONTROLRIG_API FRigUnit_DistributeRotation_WorkData {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FCachedRigElement> CachedItems;
    
    UPROPERTY()
    TArray<int32> ItemRotationA;
    
    UPROPERTY()
    TArray<int32> ItemRotationB;
    
    UPROPERTY()
    TArray<float> ItemRotationT;
    
    UPROPERTY()
    TArray<FTransform> ItemLocalTransforms;
    
    FRigUnit_DistributeRotation_WorkData();
};

