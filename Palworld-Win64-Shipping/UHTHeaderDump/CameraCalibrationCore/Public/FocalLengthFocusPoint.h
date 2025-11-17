#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RichCurve -FallbackName=RichCurve
#include "BaseFocusPoint.h"
#include "FocalLengthZoomPoint.h"
#include "FocalLengthFocusPoint.generated.h"

USTRUCT()
struct CAMERACALIBRATIONCORE_API FFocalLengthFocusPoint : public FBaseFocusPoint {
    GENERATED_BODY()
public:
    UPROPERTY()
    float Focus;
    
    UPROPERTY()
    FRichCurve Fx;
    
    UPROPERTY()
    FRichCurve Fy;
    
    UPROPERTY()
    TArray<FFocalLengthZoomPoint> ZoomPoints;
    
    FFocalLengthFocusPoint();
};

