#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ERBFKernelType.h"
#include "ERBFVectorDistanceType.h"
#include "RigUnit_MathRBFInterpolateBase.h"
#include "RigUnit_MathRBFInterpolateVectorWorkData.h"
#include "RigUnit_MathRBFInterpolateVectorBase.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_MathRBFInterpolateVectorBase : public FRigUnit_MathRBFInterpolateBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Input;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    ERBFVectorDistanceType DistanceFunction;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    ERBFKernelType SmoothingFunction;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    float SmoothingRadius;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    bool bNormalizeOutput;
    
    UPROPERTY(Transient)
    FRigUnit_MathRBFInterpolateVectorWorkData WorkData;
    
    FRigUnit_MathRBFInterpolateVectorBase();
};

