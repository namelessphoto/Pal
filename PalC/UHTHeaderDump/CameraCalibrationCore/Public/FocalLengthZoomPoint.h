#pragma once
#include "CoreMinimal.h"
#include "FocalLengthInfo.h"
#include "FocalLengthZoomPoint.generated.h"

USTRUCT()
struct CAMERACALIBRATIONCORE_API FFocalLengthZoomPoint {
    GENERATED_BODY()
public:
    UPROPERTY()
    float Zoom;
    
    UPROPERTY()
    FFocalLengthInfo FocalLengthInfo;
    
    UPROPERTY()
    bool bIsCalibrationPoint;
    
    FFocalLengthZoomPoint();
};

