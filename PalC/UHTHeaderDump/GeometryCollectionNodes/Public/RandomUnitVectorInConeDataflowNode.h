#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowNode -FallbackName=DataflowNode
#include "RandomUnitVectorInConeDataflowNode.generated.h"

USTRUCT()
struct FRandomUnitVectorInConeDataflowNode : public FDataflowNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool Deterministic;
    
    UPROPERTY(EditAnywhere)
    float RandomSeed;
    
    UPROPERTY(EditAnywhere)
    FVector ConeDirection;
    
    UPROPERTY(EditAnywhere)
    float ConeHalfAngle;
    
    UPROPERTY()
    FVector Vector;
    
    GEOMETRYCOLLECTIONNODES_API FRandomUnitVectorInConeDataflowNode();
};

