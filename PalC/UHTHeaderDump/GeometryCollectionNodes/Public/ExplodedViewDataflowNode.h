#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Chaos -ObjectName=ManagedArrayCollection -FallbackName=ManagedArrayCollection
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowNode -FallbackName=DataflowNode
#include "ExplodedViewDataflowNode.generated.h"

USTRUCT()
struct FExplodedViewDataflowNode : public FDataflowNode {
    GENERATED_BODY()
public:
    UPROPERTY()
    FManagedArrayCollection Collection;
    
    UPROPERTY(EditAnywhere)
    float UniformScale;
    
    UPROPERTY(EditAnywhere)
    FVector Scale;
    
    GEOMETRYCOLLECTIONNODES_API FExplodedViewDataflowNode();
};

