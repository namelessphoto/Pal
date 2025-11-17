#pragma once
#include "CoreMinimal.h"
#include "SolverInput.generated.h"

USTRUCT()
struct FSolverInput {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float LinearMotionStrength;
    
    UPROPERTY(EditAnywhere)
    float MinLinearMotionStrength;
    
    UPROPERTY(EditAnywhere)
    float AngularMotionStrength;
    
    UPROPERTY(EditAnywhere)
    float MinAngularMotionStrength;
    
    UPROPERTY(EditAnywhere)
    float DefaultTargetClamp;
    
    UPROPERTY(EditAnywhere)
    float Precision;
    
    UPROPERTY(EditAnywhere)
    float Damping;
    
    UPROPERTY(EditAnywhere)
    int32 MaxIterations;
    
    UPROPERTY(EditAnywhere)
    bool bUseJacobianTranspose;
    
    FULLBODYIK_API FSolverInput();
};

