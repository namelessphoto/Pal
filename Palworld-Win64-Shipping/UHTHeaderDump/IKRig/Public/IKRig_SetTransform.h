#pragma once
#include "CoreMinimal.h"
#include "IKRigSolver.h"
#include "IKRig_SetTransform.generated.h"

class UIKRig_SetTransformEffector;

UCLASS(EditInlineNew)
class IKRIG_API UIKRig_SetTransform : public UIKRigSolver {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FName Goal;
    
    UPROPERTY(VisibleAnywhere)
    FName RootBone;
    
    UPROPERTY()
    UIKRig_SetTransformEffector* Effector;
    
    UIKRig_SetTransform();

};

