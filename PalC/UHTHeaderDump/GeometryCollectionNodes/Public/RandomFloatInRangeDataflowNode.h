#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowNode -FallbackName=DataflowNode
#include "RandomFloatInRangeDataflowNode.generated.h"

USTRUCT()
struct FRandomFloatInRangeDataflowNode : public FDataflowNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool Deterministic;
    
    UPROPERTY(EditAnywhere)
    float RandomSeed;
    
    UPROPERTY(EditAnywhere)
    float Min;
    
    UPROPERTY(EditAnywhere)
    float Max;
    
    UPROPERTY()
    float float;
    
    GEOMETRYCOLLECTIONNODES_API FRandomFloatInRangeDataflowNode();
};

