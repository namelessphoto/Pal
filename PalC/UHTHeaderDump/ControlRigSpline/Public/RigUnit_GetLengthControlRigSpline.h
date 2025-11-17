#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ControlRig -ObjectName=RigUnit -FallbackName=RigUnit
#include "ControlRigSpline.h"
#include "RigUnit_GetLengthControlRigSpline.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIGSPLINE_API FRigUnit_GetLengthControlRigSpline : public FRigUnit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FControlRigSpline Spline;
    
    UPROPERTY(BlueprintReadOnly)
    float Length;
    
    FRigUnit_GetLengthControlRigSpline();
};

