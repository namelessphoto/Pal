#pragma once
#include "CoreMinimal.h"
#include "MathRBFInterpolateQuatFloat_Target.h"
#include "RigUnit_MathRBFInterpolateQuatBase.h"
#include "RigUnit_MathRBFInterpolateQuatFloat.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_MathRBFInterpolateQuatFloat : public FRigUnit_MathRBFInterpolateQuatBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FMathRBFInterpolateQuatFloat_Target> Targets;
    
    UPROPERTY(BlueprintReadOnly)
    float Output;
    
    FRigUnit_MathRBFInterpolateQuatFloat();
};

