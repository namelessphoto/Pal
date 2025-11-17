#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ControlRigSpline.h"
#include "RigUnit_ControlRigSplineBase.h"
#include "RigUnit_TransformFromControlRigSpline.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIGSPLINE_API FRigUnit_TransformFromControlRigSpline : public FRigUnit_ControlRigSplineBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FControlRigSpline Spline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector UpVector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Roll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float U;
    
    UPROPERTY(BlueprintReadOnly)
    FTransform Transform;
    
    FRigUnit_TransformFromControlRigSpline();
};

