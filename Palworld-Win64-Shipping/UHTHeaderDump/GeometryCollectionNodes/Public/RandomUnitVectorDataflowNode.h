#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowNode -FallbackName=DataflowNode
#include "RandomUnitVectorDataflowNode.generated.h"

USTRUCT()
struct FRandomUnitVectorDataflowNode : public FDataflowNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool Deterministic;
    
    UPROPERTY(EditAnywhere)
    float RandomSeed;
    
    UPROPERTY()
    FVector Vector;
    
    GEOMETRYCOLLECTIONNODES_API FRandomUnitVectorDataflowNode();
};

