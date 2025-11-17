#pragma once
#include "CoreMinimal.h"
#include "CachedRigElement.h"
#include "RigElementKey.h"
#include "RigElementKeyCollection.h"
#include "RigUnit_HierarchyBase.h"
#include "RigUnit_HierarchyGetSiblingsItemArray.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_HierarchyGetSiblingsItemArray : public FRigUnit_HierarchyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRigElementKey Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIncludeItem;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<FRigElementKey> Siblings;
    
    UPROPERTY()
    FCachedRigElement CachedItem;
    
    UPROPERTY()
    FRigElementKeyCollection CachedSiblings;
    
    FRigUnit_HierarchyGetSiblingsItemArray();
};

