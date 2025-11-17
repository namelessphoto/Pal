#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "IKRigEffectorGoal.generated.h"

UCLASS()
class IKRIG_API UIKRigEffectorGoal : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FName GoalName;
    
    UPROPERTY(VisibleAnywhere)
    FName BoneName;
    
    UPROPERTY(EditAnywhere)
    float PositionAlpha;
    
    UPROPERTY(EditAnywhere)
    float RotationAlpha;
    
    UPROPERTY(EditAnywhere)
    FTransform CurrentTransform;
    
    UPROPERTY(VisibleAnywhere)
    FTransform InitialTransform;
    
    UIKRigEffectorGoal();

};

