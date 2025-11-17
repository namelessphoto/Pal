#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "CachedRigElement.h"
#include "EBoneGetterSetterMode.h"
#include "RigUnitMutable.h"
#include "RigUnit_SetBoneTransform.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_SetBoneTransform : public FRigUnitMutable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName bone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransform Transform;
    
    UPROPERTY(BlueprintReadOnly)
    FTransform Result;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EBoneGetterSetterMode space;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Weight;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    bool bPropagateToChildren;
    
    UPROPERTY(Transient)
    FCachedRigElement CachedBone;
    
    FRigUnit_SetBoneTransform();
};

