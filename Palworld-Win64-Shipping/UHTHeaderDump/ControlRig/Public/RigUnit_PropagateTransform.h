#pragma once
#include "CoreMinimal.h"
#include "CachedRigElement.h"
#include "RigElementKey.h"
#include "RigUnitMutable.h"
#include "RigUnit_PropagateTransform.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_PropagateTransform : public FRigUnitMutable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRigElementKey Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bRecomputeGlobal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bApplyToChildren;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bRecursive;
    
    UPROPERTY(Transient)
    FCachedRigElement CachedIndex;
    
    FRigUnit_PropagateTransform();
};

