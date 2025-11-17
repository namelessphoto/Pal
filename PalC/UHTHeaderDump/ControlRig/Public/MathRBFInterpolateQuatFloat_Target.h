#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
#include "MathRBFInterpolateQuatFloat_Target.generated.h"

USTRUCT(BlueprintType)
struct FMathRBFInterpolateQuatFloat_Target {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FQuat Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Value;
    
    CONTROLRIG_API FMathRBFInterpolateQuatFloat_Target();
};

