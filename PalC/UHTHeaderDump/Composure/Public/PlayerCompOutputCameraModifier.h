#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CameraModifier -FallbackName=CameraModifier
#include "PlayerCompOutputCameraModifier.generated.h"

class UPlayerViewportCompositingOutput;

UCLASS()
class UPlayerCompOutputCameraModifier : public UCameraModifier {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UPlayerViewportCompositingOutput* Owner;
    
public:
    UPlayerCompOutputCameraModifier();

};

