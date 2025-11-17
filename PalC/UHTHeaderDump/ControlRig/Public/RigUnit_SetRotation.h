#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
#include "CachedRigElement.h"
#include "EBoneGetterSetterMode.h"
#include "RigElementKey.h"
#include "RigUnitMutable.h"
#include "RigUnit_SetRotation.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_SetRotation : public FRigUnitMutable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRigElementKey Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EBoneGetterSetterMode space;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bInitial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FQuat Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Weight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bPropagateToChildren;
    
    UPROPERTY()
    FCachedRigElement CachedIndex;
    
    FRigUnit_SetRotation();
};

