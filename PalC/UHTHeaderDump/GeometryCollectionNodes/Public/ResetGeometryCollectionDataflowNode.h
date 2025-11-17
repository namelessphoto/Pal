#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Chaos -ObjectName=ManagedArrayCollection -FallbackName=ManagedArrayCollection
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowNode -FallbackName=DataflowNode
#include "ResetGeometryCollectionDataflowNode.generated.h"

USTRUCT()
struct FResetGeometryCollectionDataflowNode : public FDataflowNode {
    GENERATED_BODY()
public:
    UPROPERTY()
    FManagedArrayCollection Collection;
    
    GEOMETRYCOLLECTIONNODES_API FResetGeometryCollectionDataflowNode();
};

