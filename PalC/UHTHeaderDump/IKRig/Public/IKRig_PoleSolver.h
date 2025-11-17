#pragma once
#include "CoreMinimal.h"
#include "IKRigSolver.h"
#include "IKRig_PoleSolver.generated.h"

class UIKRig_PoleSolverEffector;

UCLASS(EditInlineNew)
class IKRIG_API UIKRig_PoleSolver : public UIKRigSolver {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FName RootName;
    
    UPROPERTY(VisibleAnywhere)
    FName EndName;
    
private:
    UPROPERTY()
    UIKRig_PoleSolverEffector* Effector;
    
public:
    UIKRig_PoleSolver();

};

