#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AnimationCore -ObjectName=EulerTransform -FallbackName=EulerTransform
//CROSS-MODULE INCLUDE V2: -ModuleName=AnimationCore -ObjectName=TransformFilter -FallbackName=TransformFilter
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "RigUnit.h"
#include "RigUnit_Control.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_Control : public FRigUnit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    FEulerTransform Transform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransform Base;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransform InitTransform;
    
    UPROPERTY(BlueprintReadOnly)
    FTransform Result;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransformFilter Filter;
    
    FRigUnit_Control();
};

