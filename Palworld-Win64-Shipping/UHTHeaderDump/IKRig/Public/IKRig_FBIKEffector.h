#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "IKRig_FBIKEffector.generated.h"

UCLASS()
class IKRIG_API UIKRig_FBIKEffector : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FName GoalName;
    
    UPROPERTY(VisibleAnywhere)
    FName BoneName;
    
    UPROPERTY(EditAnywhere)
    float StrengthAlpha;
    
    UPROPERTY(EditAnywhere)
    float PullChainAlpha;
    
    UPROPERTY(EditAnywhere)
    float PinRotation;
    
    UPROPERTY(Transient)
    int32 IndexInSolver;
    
    UIKRig_FBIKEffector();

};

