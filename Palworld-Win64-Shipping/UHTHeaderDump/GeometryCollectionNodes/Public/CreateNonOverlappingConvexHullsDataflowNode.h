#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Chaos -ObjectName=ManagedArrayCollection -FallbackName=ManagedArrayCollection
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowNode -FallbackName=DataflowNode
#include "CreateNonOverlappingConvexHullsDataflowNode.generated.h"

USTRUCT()
struct FCreateNonOverlappingConvexHullsDataflowNode : public FDataflowNode {
    GENERATED_BODY()
public:
    UPROPERTY()
    FManagedArrayCollection Collection;
    
    UPROPERTY(EditAnywhere)
    float CanRemoveFraction;
    
    UPROPERTY(EditAnywhere)
    float CanExceedFraction;
    
    UPROPERTY(EditAnywhere)
    float SimplificationDistanceThreshold;
    
    GEOMETRYCOLLECTIONNODES_API FCreateNonOverlappingConvexHullsDataflowNode();
};

