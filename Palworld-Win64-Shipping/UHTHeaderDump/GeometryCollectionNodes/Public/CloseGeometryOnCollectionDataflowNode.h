#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Chaos -ObjectName=ManagedArrayCollection -FallbackName=ManagedArrayCollection
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowNode -FallbackName=DataflowNode
#include "CloseGeometryOnCollectionDataflowNode.generated.h"

USTRUCT()
struct FCloseGeometryOnCollectionDataflowNode : public FDataflowNode {
    GENERATED_BODY()
public:
    UPROPERTY()
    FManagedArrayCollection Collection;
    
    GEOMETRYCOLLECTIONNODES_API FCloseGeometryOnCollectionDataflowNode();
};

