#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=EAxis -FallbackName=EAxis
#include "LimbSolverSettings.generated.h"

USTRUCT()
struct IKRIG_API FLimbSolverSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float ReachPrecision;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EAxis> HingeRotationAxis;
    
    UPROPERTY(EditAnywhere)
    int32 MaxIterations;
    
    UPROPERTY(EditAnywhere)
    bool bEnableLimit;
    
    UPROPERTY(EditAnywhere)
    float MinRotationAngle;
    
    UPROPERTY(EditAnywhere)
    bool bAveragePull;
    
    UPROPERTY(EditAnywhere)
    float PullDistribution;
    
    UPROPERTY(EditAnywhere)
    float ReachStepAlpha;
    
    UPROPERTY(EditAnywhere)
    bool bEnableTwistCorrection;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EAxis> EndBoneForwardAxis;
    
    FLimbSolverSettings();
};

