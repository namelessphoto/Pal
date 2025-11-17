#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowNode -FallbackName=DataflowNode
#include "EMathConstantsEnum.h"
#include "MathConstantsDataflowNode.generated.h"

USTRUCT()
struct FMathConstantsDataflowNode : public FDataflowNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EMathConstantsEnum Constant;
    
    UPROPERTY()
    float float;
    
    GEOMETRYCOLLECTIONNODES_API FMathConstantsDataflowNode();
};

