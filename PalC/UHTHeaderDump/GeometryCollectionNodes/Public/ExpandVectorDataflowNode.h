#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowNode -FallbackName=DataflowNode
#include "ExpandVectorDataflowNode.generated.h"

USTRUCT()
struct FExpandVectorDataflowNode : public FDataflowNode {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector Vector;
    
    UPROPERTY()
    float X;
    
    UPROPERTY()
    float Y;
    
    UPROPERTY()
    float Z;
    
    GEOMETRYCOLLECTIONNODES_API FExpandVectorDataflowNode();
};

