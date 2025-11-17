#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowNode -FallbackName=DataflowNode
#include "VectorToStringDataflowNode.generated.h"

USTRUCT()
struct FVectorToStringDataflowNode : public FDataflowNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVector Vector;
    
    UPROPERTY()
    FString String;
    
    GEOMETRYCOLLECTIONNODES_API FVectorToStringDataflowNode();
};

