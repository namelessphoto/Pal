#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowNode -FallbackName=DataflowNode
#include "MakeLiteralFloatDataflowNode.generated.h"

USTRUCT()
struct FMakeLiteralFloatDataflowNode : public FDataflowNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Value;
    
    UPROPERTY()
    float float;
    
    GEOMETRYCOLLECTIONNODES_API FMakeLiteralFloatDataflowNode();
};

