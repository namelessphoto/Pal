#pragma once
#include "CoreMinimal.h"
#include "EPBIKRootBehavior.h"
#include "PBIKSolverSettings.generated.h"

USTRUCT()
struct PBIK_API FPBIKSolverSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 Iterations;
    
    UPROPERTY(EditAnywhere)
    float MassMultiplier;
    
    UPROPERTY(EditAnywhere)
    float MinMassMultiplier;
    
    UPROPERTY(EditAnywhere)
    bool bAllowStretch;
    
    UPROPERTY(EditAnywhere)
    EPBIKRootBehavior RootBehavior;
    
    UPROPERTY(EditAnywhere)
    bool bStartSolveFromInputPose;
    
    FPBIKSolverSettings();
};

