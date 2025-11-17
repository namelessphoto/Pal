#pragma once
#include "CoreMinimal.h"
#include "CachedRigElement.h"
#include "RigElementKey.h"
#include "RigElementKeyCollection.h"
#include "RigUnit_HierarchyBase.h"
#include "RigUnit_HierarchyGetParents.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_HierarchyGetParents : public FRigUnit_HierarchyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRigElementKey Child;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIncludeChild;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bReverse;
    
    UPROPERTY(BlueprintReadOnly)
    FRigElementKeyCollection Parents;
    
    UPROPERTY()
    FCachedRigElement CachedChild;
    
    UPROPERTY()
    FRigElementKeyCollection CachedParents;
    
    FRigUnit_HierarchyGetParents();
};

