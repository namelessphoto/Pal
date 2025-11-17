#pragma once
#include "CoreMinimal.h"
#include "IKRigSolver.h"
#include "IKRig_BodyMover.generated.h"

class UIKRig_BodyMoverEffector;

UCLASS(EditInlineNew)
class IKRIG_API UIKRig_BodyMover : public UIKRigSolver {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FName RootBone;
    
    UPROPERTY(EditAnywhere)
    float PositionAlpha;
    
    UPROPERTY(EditAnywhere)
    float PositionPositiveX;
    
    UPROPERTY(EditAnywhere)
    float PositionNegativeX;
    
    UPROPERTY(EditAnywhere)
    float PositionPositiveY;
    
    UPROPERTY(EditAnywhere)
    float PositionNegativeY;
    
    UPROPERTY(EditAnywhere)
    float PositionPositiveZ;
    
    UPROPERTY(EditAnywhere)
    float PositionNegativeZ;
    
    UPROPERTY(EditAnywhere)
    float RotationAlpha;
    
    UPROPERTY(EditAnywhere)
    float RotateXAlpha;
    
    UPROPERTY(EditAnywhere)
    float RotateYAlpha;
    
    UPROPERTY(EditAnywhere)
    float RotateZAlpha;
    
    UPROPERTY()
    TArray<UIKRig_BodyMoverEffector*> Effectors;
    
    UIKRig_BodyMover();

};

