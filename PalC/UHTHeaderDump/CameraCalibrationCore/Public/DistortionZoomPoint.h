#pragma once
#include "CoreMinimal.h"
#include "DistortionInfo.h"
#include "DistortionZoomPoint.generated.h"

USTRUCT()
struct CAMERACALIBRATIONCORE_API FDistortionZoomPoint {
    GENERATED_BODY()
public:
    UPROPERTY()
    float Zoom;
    
    UPROPERTY(EditAnywhere)
    FDistortionInfo DistortionInfo;
    
    FDistortionZoomPoint();
};

