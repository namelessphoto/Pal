#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowNode -FallbackName=DataflowNode
#include "FloatToStringDataflowNode.generated.h"

USTRUCT()
struct FFloatToStringDataflowNode : public FDataflowNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float float;
    
    UPROPERTY()
    FString String;
    
    GEOMETRYCOLLECTIONNODES_API FFloatToStringDataflowNode();
};

