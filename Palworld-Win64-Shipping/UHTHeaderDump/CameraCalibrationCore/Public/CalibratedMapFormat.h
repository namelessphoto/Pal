#pragma once
#include "CoreMinimal.h"
#include "ECalibratedMapChannels.h"
#include "ECalibratedMapPixelOrigin.h"
#include "CalibratedMapFormat.generated.h"

USTRUCT()
struct CAMERACALIBRATIONCORE_API FCalibratedMapFormat {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ECalibratedMapPixelOrigin PixelOrigin;
    
    UPROPERTY(EditAnywhere)
    ECalibratedMapChannels UndistortionChannels;
    
    UPROPERTY(EditAnywhere)
    ECalibratedMapChannels DistortionChannels;
    
    FCalibratedMapFormat();
};

