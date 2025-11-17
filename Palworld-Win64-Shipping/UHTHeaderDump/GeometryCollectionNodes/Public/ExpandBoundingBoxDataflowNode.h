#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box -FallbackName=Box
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowNode -FallbackName=DataflowNode
#include "ExpandBoundingBoxDataflowNode.generated.h"

USTRUCT()
struct FExpandBoundingBoxDataflowNode : public FDataflowNode {
    GENERATED_BODY()
public:
    UPROPERTY()
    FBox BoundingBox;
    
    UPROPERTY()
    FVector Min;
    
    UPROPERTY()
    FVector Max;
    
    UPROPERTY()
    FVector Center;
    
    UPROPERTY()
    FVector HalfExtents;
    
    UPROPERTY()
    float Volume;
    
    GEOMETRYCOLLECTIONNODES_API FExpandBoundingBoxDataflowNode();
};

