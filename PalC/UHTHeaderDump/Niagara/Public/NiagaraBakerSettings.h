#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntPoint -FallbackName=IntPoint
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ENiagaraBakerViewMode.h"
#include "NiagaraBakerCameraSettings.h"
#include "NiagaraBakerTextureSettings.h"
#include "NiagaraBakerSettings.generated.h"

class UNiagaraBakerOutput;

UCLASS(DefaultConfig, Config=Niagara)
class NIAGARA_API UNiagaraBakerSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float StartSeconds;
    
    UPROPERTY(EditAnywhere)
    float DurationSeconds;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    int32 FramesPerSecond;
    
    UPROPERTY(EditAnywhere)
    uint8 bPreviewLooping: 1;
    
    UPROPERTY(EditAnywhere)
    FIntPoint FramesPerDimension;
    
    UPROPERTY(EditAnywhere)
    TArray<UNiagaraBakerOutput*> Outputs;
    
    UPROPERTY(EditAnywhere)
    TArray<FNiagaraBakerCameraSettings> CameraSettings;
    
    UPROPERTY(EditAnywhere)
    int32 CurrentCameraIndex;
    
    UPROPERTY(Config, EditAnywhere)
    FName BakeQualityLevel;
    
    UPROPERTY(EditAnywhere)
    uint8 bRenderComponentOnly: 1;
    
    UPROPERTY()
    TArray<FNiagaraBakerTextureSettings> OutputTextures;
    
    UPROPERTY()
    ENiagaraBakerViewMode CameraViewportMode;
    
    UPROPERTY()
    FVector CameraViewportLocation[7];
    
    UPROPERTY()
    FRotator CameraViewportRotation[7];
    
    UPROPERTY()
    float CameraOrbitDistance;
    
    UPROPERTY()
    float CameraFOV;
    
    UPROPERTY()
    float CameraOrthoWidth;
    
    UPROPERTY()
    uint8 bUseCameraAspectRatio: 1;
    
    UPROPERTY()
    float CameraAspectRatio;
    
    UNiagaraBakerSettings();

};

