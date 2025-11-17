#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowNode -FallbackName=DataflowNode
#include "IntToFloatDataflowNode.generated.h"

USTRUCT()
struct FIntToFloatDataflowNode : public FDataflowNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 Int;
    
    UPROPERTY()
    float float;
    
    GEOMETRYCOLLECTIONNODES_API FIntToFloatDataflowNode();
};

