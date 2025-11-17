#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=EAxis -FallbackName=EAxis
#include "IKRigSolver.h"
#include "IKRig_LimbSolver.generated.h"

class UIKRig_LimbEffector;

UCLASS(EditInlineNew)
class IKRIG_API UIKRig_LimbSolver : public UIKRigSolver {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FName RootName;
    
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
    
private:
    UPROPERTY()
    UIKRig_LimbEffector* Effector;
    
public:
    UIKRig_LimbSolver();

};

