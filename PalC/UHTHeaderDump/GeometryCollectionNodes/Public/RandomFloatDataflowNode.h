#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowNode -FallbackName=DataflowNode
#include "RandomFloatDataflowNode.generated.h"

USTRUCT()
struct FRandomFloatDataflowNode : public FDataflowNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool Deterministic;
    
    UPROPERTY(EditAnywhere)
    float RandomSeed;
    
    UPROPERTY()
    float float;
    
    GEOMETRYCOLLECTIONNODES_API FRandomFloatDataflowNode();
};

