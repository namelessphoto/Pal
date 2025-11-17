#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CameraShakeBase -FallbackName=CameraShakeBase
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayCameras -ObjectName=FOscillator -FallbackName=FOscillator
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayCameras -ObjectName=ROscillator -FallbackName=ROscillator
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayCameras -ObjectName=VOscillator -FallbackName=VOscillator
#include "PalCameraShakeBase.generated.h"

class UCurveFloat;

UCLASS(EditInlineNew)
class PAL_API UPalCameraShakeBase : public UCameraShakeBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* CurveAsset;
    
    UPROPERTY(EditAnywhere)
    float OscillationDuration;
    
    UPROPERTY(EditAnywhere)
    float OscillationBlendInTime;
    
    UPROPERTY(EditAnywhere)
    float OscillationBlendOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FROscillator RotOscillation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVOscillator LocOscillation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FFOscillator FOVOscillation;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float OscillatorTimeRemaining;
    
    UPalCameraShakeBase();

};

