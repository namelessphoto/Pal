#pragma once
#include "CoreMinimal.h"
#include "CachedRigElement.h"
#include "RigElementKey.h"
#include "RigElementKeyCollection.h"
#include "RigUnit_HierarchyBase.h"
#include "RigUnit_HierarchyGetChildren.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_HierarchyGetChildren : public FRigUnit_HierarchyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRigElementKey Parent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIncludeParent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bRecursive;
    
    UPROPERTY(BlueprintReadOnly)
    FRigElementKeyCollection Children;
    
    UPROPERTY()
    FCachedRigElement CachedParent;
    
    UPROPERTY()
    FRigElementKeyCollection CachedChildren;
    
    FRigUnit_HierarchyGetChildren();
};

