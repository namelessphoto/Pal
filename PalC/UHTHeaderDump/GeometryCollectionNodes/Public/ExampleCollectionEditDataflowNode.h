#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Chaos -ObjectName=ManagedArrayCollection -FallbackName=ManagedArrayCollection
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowNode -FallbackName=DataflowNode
#include "ExampleCollectionEditDataflowNode.generated.h"

USTRUCT()
struct FExampleCollectionEditDataflowNode : public FDataflowNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Scale;
    
    UPROPERTY()
    FManagedArrayCollection Collection;
    
    GEOMETRYCOLLECTIONNODES_API FExampleCollectionEditDataflowNode();
};

