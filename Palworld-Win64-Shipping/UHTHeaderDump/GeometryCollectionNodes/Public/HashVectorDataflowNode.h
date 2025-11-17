#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowNode -FallbackName=DataflowNode
#include "HashVectorDataflowNode.generated.h"

USTRUCT()
struct FHashVectorDataflowNode : public FDataflowNode {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector Vector;
    
    UPROPERTY()
    int32 Hash;
    
    GEOMETRYCOLLECTIONNODES_API FHashVectorDataflowNode();
};

