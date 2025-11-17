#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RichCurve -FallbackName=RichCurve
#include "BaseFocusPoint.h"
#include "STMapZoomPoint.h"
#include "STMapFocusPoint.generated.h"

USTRUCT()
struct CAMERACALIBRATIONCORE_API FSTMapFocusPoint : public FBaseFocusPoint {
    GENERATED_BODY()
public:
    UPROPERTY()
    float Focus;
    
    UPROPERTY()
    FRichCurve MapBlendingCurve;
    
    UPROPERTY()
    TArray<FSTMapZoomPoint> ZoomPoints;
    
    FSTMapFocusPoint();
};

