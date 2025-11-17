#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RichCurve -FallbackName=RichCurve
#include "BaseFocusPoint.h"
#include "DistortionZoomPoint.h"
#include "DistortionFocusPoint.generated.h"

USTRUCT()
struct CAMERACALIBRATIONCORE_API FDistortionFocusPoint : public FBaseFocusPoint {
    GENERATED_BODY()
public:
    UPROPERTY()
    float Focus;
    
    UPROPERTY()
    FRichCurve MapBlendingCurve;
    
    UPROPERTY()
    TArray<FDistortionZoomPoint> ZoomPoints;
    
    FDistortionFocusPoint();
};

