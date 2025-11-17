#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ERBFKernelType.h"
#include "ERBFQuatDistanceType.h"
#include "RigUnit_MathRBFInterpolateBase.h"
#include "RigUnit_MathRBFInterpolateQuatWorkData.h"
#include "RigUnit_MathRBFInterpolateQuatBase.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_MathRBFInterpolateQuatBase : public FRigUnit_MathRBFInterpolateBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FQuat Input;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    ERBFQuatDistanceType DistanceFunction;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    ERBFKernelType SmoothingFunction;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    float SmoothingAngle;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    bool bNormalizeOutput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector TwistAxis;
    
    UPROPERTY(Transient)
    FRigUnit_MathRBFInterpolateQuatWorkData WorkData;
    
    FRigUnit_MathRBFInterpolateQuatBase();
};

