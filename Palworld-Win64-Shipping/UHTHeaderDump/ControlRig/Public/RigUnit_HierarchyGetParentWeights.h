#pragma once
#include "CoreMinimal.h"
#include "RigElementKey.h"
#include "RigElementKeyCollection.h"
#include "RigElementWeight.h"
#include "RigUnit_DynamicHierarchyBase.h"
#include "RigUnit_HierarchyGetParentWeights.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_HierarchyGetParentWeights : public FRigUnit_DynamicHierarchyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRigElementKey Child;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<FRigElementWeight> Weights;
    
    UPROPERTY(BlueprintReadOnly)
    FRigElementKeyCollection Parents;
    
    FRigUnit_HierarchyGetParentWeights();
};

