#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CameraCalibrationCore -ObjectName=LensFilePicker -FallbackName=LensFilePicker
//CROSS-MODULE INCLUDE V2: -ModuleName=LiveLinkComponents -ObjectName=LiveLinkControllerBase -FallbackName=LiveLinkControllerBase
#include "LiveLinkCameraControllerUpdateFlags.h"
#include "LiveLinkCameraController.generated.h"

UCLASS(EditInlineNew)
class LIVELINKCAMERA_API ULiveLinkCameraController : public ULiveLinkControllerBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bUseCameraRange;
    
    UPROPERTY(EditAnywhere)
    FLensFilePicker LensFilePicker;
    
protected:
    UPROPERTY(EditAnywhere)
    FLiveLinkCameraControllerUpdateFlags UpdateFlags;
    
public:
    ULiveLinkCameraController();

};

