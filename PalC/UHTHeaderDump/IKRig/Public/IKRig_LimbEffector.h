#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "IKRig_LimbEffector.generated.h"

UCLASS()
class IKRIG_API UIKRig_LimbEffector : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FName GoalName;
    
    UPROPERTY(VisibleAnywhere)
    FName BoneName;
    
    UIKRig_LimbEffector();

};

