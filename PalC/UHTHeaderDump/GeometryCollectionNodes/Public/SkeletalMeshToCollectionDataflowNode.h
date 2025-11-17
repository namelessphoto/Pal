#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Chaos -ObjectName=ManagedArrayCollection -FallbackName=ManagedArrayCollection
//CROSS-MODULE INCLUDE V2: -ModuleName=DataflowCore -ObjectName=DataflowNode -FallbackName=DataflowNode
#include "SkeletalMeshToCollectionDataflowNode.generated.h"

class USkeletalMesh;

USTRUCT()
struct FSkeletalMeshToCollectionDataflowNode : public FDataflowNode {
    GENERATED_BODY()
public:
    UPROPERTY()
    USkeletalMesh* SkeletalMesh;
    
    UPROPERTY()
    FManagedArrayCollection Collection;
    
    GEOMETRYCOLLECTIONNODES_API FSkeletalMeshToCollectionDataflowNode();
};

