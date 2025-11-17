#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "CachedRigElement.h"
#include "RigUnit_SlideChain_WorkData.generated.h"

USTRUCT()
struct CONTROLRIG_API FRigUnit_SlideChain_WorkData {
    GENERATED_BODY()
public:
    UPROPERTY()
    float ChainLength;
    
    UPROPERTY()
    TArray<float> ItemSegments;
    
    UPROPERTY()
    TArray<FCachedRigElement> CachedItems;
    
    UPROPERTY()
    TArray<FTransform> Transforms;
    
    UPROPERTY()
    TArray<FTransform> BlendedTransforms;
    
    FRigUnit_SlideChain_WorkData();
};

