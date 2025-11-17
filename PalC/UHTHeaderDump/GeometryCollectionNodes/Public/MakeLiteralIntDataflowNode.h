#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowNode -FallbackName=DataflowNode
#include "MakeLiteralIntDataflowNode.generated.h"

USTRUCT()
struct FMakeLiteralIntDataflowNode : public FDataflowNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 Value;
    
    UPROPERTY()
    int32 Int;
    
    GEOMETRYCOLLECTIONNODES_API FMakeLiteralIntDataflowNode();
};

