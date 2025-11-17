#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowNode -FallbackName=DataflowNode
#include "EFloatToIntFunctionEnum.h"
#include "FloatToIntDataflowNode.generated.h"

USTRUCT()
struct FFloatToIntDataflowNode : public FDataflowNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EFloatToIntFunctionEnum Function;
    
    UPROPERTY(EditAnywhere)
    float float;
    
    UPROPERTY()
    int32 Int;
    
    GEOMETRYCOLLECTIONNODES_API FFloatToIntDataflowNode();
};

