#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "ETransformGetterType.h"
#include "ETransformSpaceMode.h"
#include "RigUnitMutable.h"
#include "RigUnit_GetJointTransform.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_GetJointTransform : public FRigUnitMutable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName Joint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ETransformGetterType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ETransformSpaceMode TransformSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransform BaseTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName BaseJoint;
    
    UPROPERTY(BlueprintReadOnly)
    FTransform Output;
    
    FRigUnit_GetJointTransform();
};

