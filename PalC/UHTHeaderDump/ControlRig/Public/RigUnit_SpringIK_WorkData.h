#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "CRSimPointContainer.h"
#include "CachedRigElement.h"
#include "RigUnit_SpringIK_WorkData.generated.h"

USTRUCT()
struct CONTROLRIG_API FRigUnit_SpringIK_WorkData {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TArray<FCachedRigElement> CachedBones;
    
    UPROPERTY()
    FCachedRigElement CachedPoleVector;
    
    UPROPERTY()
    TArray<FTransform> Transforms;
    
    UPROPERTY()
    FCRSimPointContainer Simulation;
    
    FRigUnit_SpringIK_WorkData();
};

