#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlendableInterface -FallbackName=BlendableInterface
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CameraModifier -FallbackName=CameraModifier
#include "ComposurePlayerCompositingCameraModifier.generated.h"

class IComposurePlayerCompositingInterface;
class UComposurePlayerCompositingInterface;

UCLASS()
class UComposurePlayerCompositingCameraModifier : public UCameraModifier, public IBlendableInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TScriptInterface<IComposurePlayerCompositingInterface> Target;
    
public:
    UComposurePlayerCompositingCameraModifier();


    // Fix for true pure virtual functions not being implemented
};

