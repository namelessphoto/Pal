#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowNode -FallbackName=DataflowNode
#include "DegreesToRadiansDataflowNode.generated.h"

USTRUCT()
struct FDegreesToRadiansDataflowNode : public FDataflowNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Degrees;
    
    UPROPERTY()
    float Radians;
    
    GEOMETRYCOLLECTIONNODES_API FDegreesToRadiansDataflowNode();
};

