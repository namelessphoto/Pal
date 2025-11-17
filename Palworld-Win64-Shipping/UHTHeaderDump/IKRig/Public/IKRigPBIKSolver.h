#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=PBIK -ObjectName=EPBIKRootBehavior -FallbackName=EPBIKRootBehavior
#include "IKRigSolver.h"
#include "IKRigPBIKSolver.generated.h"

class UIKRig_FBIKEffector;
class UIKRig_PBIKBoneSettings;

UCLASS(EditInlineNew)
class IKRIG_API UIKRigPBIKSolver : public UIKRigSolver {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FName RootBone;
    
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
    
    UPROPERTY()
    TArray<UIKRig_FBIKEffector*> Effectors;
    
    UPROPERTY()
    TArray<UIKRig_PBIKBoneSettings*> BoneSettings;
    
    UIKRigPBIKSolver();

};

