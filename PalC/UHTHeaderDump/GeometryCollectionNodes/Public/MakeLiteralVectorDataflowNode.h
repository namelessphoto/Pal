#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowNode -FallbackName=DataflowNode
#include "MakeLiteralVectorDataflowNode.generated.h"

USTRUCT()
struct FMakeLiteralVectorDataflowNode : public FDataflowNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVector Value;
    
    UPROPERTY()
    FVector Vector;
    
    GEOMETRYCOLLECTIONNODES_API FMakeLiteralVectorDataflowNode();
};

