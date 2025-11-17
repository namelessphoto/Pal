#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "CachedRigElement.h"
#include "RigElementKey.h"
#include "RigUnit.h"
#include "RigUnit_GetRelativeTransformForItem.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_GetRelativeTransformForItem : public FRigUnit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRigElementKey Child;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bChildInitial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRigElementKey Parent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bParentInitial;
    
    UPROPERTY(BlueprintReadOnly)
    FTransform RelativeTransform;
    
    UPROPERTY()
    FCachedRigElement CachedChild;
    
    UPROPERTY()
    FCachedRigElement CachedParent;
    
    FRigUnit_GetRelativeTransformForItem();
};

