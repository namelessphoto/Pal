#pragma once
#include "CoreMinimal.h"
#include "ControlRigSpline.h"
#include "RigUnit_ControlRigSplineBase.h"
#include "RigUnit_ParameterAtPercentage.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIGSPLINE_API FRigUnit_ParameterAtPercentage : public FRigUnit_ControlRigSplineBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FControlRigSpline Spline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Percentage;
    
    UPROPERTY(BlueprintReadOnly)
    float U;
    
    FRigUnit_ParameterAtPercentage();
};

