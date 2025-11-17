#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "IKRig_SetTransformEffector.generated.h"

UCLASS()
class IKRIG_API UIKRig_SetTransformEffector : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bEnablePosition;
    
    UPROPERTY(EditAnywhere)
    bool bEnableRotation;
    
    UPROPERTY(EditAnywhere)
    float Alpha;
    
    UIKRig_SetTransformEffector();

};

