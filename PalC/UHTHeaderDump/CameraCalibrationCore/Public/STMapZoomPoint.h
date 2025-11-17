#pragma once
#include "CoreMinimal.h"
#include "DerivedDistortionData.h"
#include "STMapInfo.h"
#include "STMapZoomPoint.generated.h"

USTRUCT()
struct CAMERACALIBRATIONCORE_API FSTMapZoomPoint {
    GENERATED_BODY()
public:
    UPROPERTY()
    float Zoom;
    
    UPROPERTY()
    FSTMapInfo STMapInfo;
    
    UPROPERTY(Transient)
    FDerivedDistortionData DerivedDistortionData;
    
    UPROPERTY()
    bool bIsCalibrationPoint;
    
    FSTMapZoomPoint();
};

