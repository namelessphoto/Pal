#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlendableInterface -FallbackName=BlendableInterface
#include "ColorConverterOutputPass.h"
#include "PlayerViewportCompositingOutput.generated.h"

class UMaterialInstanceDynamic;
class UMaterialInterface;
class UPlayerCompOutputCameraModifier;

UCLASS(EditInlineNew)
class COMPOSURE_API UPlayerViewportCompositingOutput : public UColorConverterOutputPass, public IBlendableInterface {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 PlayerIndex;
    
    UPROPERTY(EditAnywhere)
    bool ApplyToneCurve;
    
private:
    UPROPERTY(DuplicateTransient, SkipSerialization, Transient)
    UPlayerCompOutputCameraModifier* ActiveCamModifier;
    
    UPROPERTY(Transient)
    UMaterialInterface* TonemapperBaseMat;
    
    UPROPERTY(Transient)
    UMaterialInterface* PreTonemapBaseMat;
    
    UPROPERTY(DuplicateTransient, SkipSerialization, Transient)
    UMaterialInstanceDynamic* ViewportOverrideMID;
    
public:
    UPlayerViewportCompositingOutput();


    // Fix for true pure virtual functions not being implemented
};

