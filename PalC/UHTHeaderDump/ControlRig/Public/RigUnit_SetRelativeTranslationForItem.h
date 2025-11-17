#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "CachedRigElement.h"
#include "RigElementKey.h"
#include "RigUnitMutable.h"
#include "RigUnit_SetRelativeTranslationForItem.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_SetRelativeTranslationForItem : public FRigUnitMutable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRigElementKey Child;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRigElementKey Parent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bParentInitial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Weight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bPropagateToChildren;
    
    UPROPERTY()
    FCachedRigElement CachedChild;
    
    UPROPERTY()
    FCachedRigElement CachedParent;
    
    FRigUnit_SetRelativeTranslationForItem();
};

