#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowNode -FallbackName=DataflowNode
#include "RadiansToDegreesDataflowNode.generated.h"

USTRUCT()
struct FRadiansToDegreesDataflowNode : public FDataflowNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Radians;
    
    UPROPERTY()
    float Degrees;
    
    GEOMETRYCOLLECTIONNODES_API FRadiansToDegreesDataflowNode();
};

