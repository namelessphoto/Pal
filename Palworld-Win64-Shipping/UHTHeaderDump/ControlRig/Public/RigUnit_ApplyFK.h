#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AnimationCore -ObjectName=TransformFilter -FallbackName=TransformFilter
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "EApplyTransformMode.h"
#include "ETransformSpaceMode.h"
#include "RigUnitMutable.h"
#include "RigUnit_ApplyFK.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_ApplyFK : public FRigUnitMutable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName Joint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransform Transform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransformFilter Filter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EApplyTransformMode ApplyTransformMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ETransformSpaceMode ApplyTransformSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransform BaseTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName BaseJoint;
    
    FRigUnit_ApplyFK();
};

