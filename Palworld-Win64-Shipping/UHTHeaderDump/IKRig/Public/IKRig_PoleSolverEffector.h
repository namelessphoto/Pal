#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "IKRig_PoleSolverEffector.generated.h"

UCLASS()
class IKRIG_API UIKRig_PoleSolverEffector : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FName GoalName;
    
    UPROPERTY(VisibleAnywhere)
    FName BoneName;
    
    UPROPERTY(EditAnywhere)
    float Alpha;
    
    UIKRig_PoleSolverEffector();

};

