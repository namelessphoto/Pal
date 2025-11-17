#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RichCurve -FallbackName=RichCurve
#include "BaseFocusPoint.h"
#include "ImageCenterFocusPoint.generated.h"

USTRUCT()
struct CAMERACALIBRATIONCORE_API FImageCenterFocusPoint : public FBaseFocusPoint {
    GENERATED_BODY()
public:
    UPROPERTY()
    float Focus;
    
    UPROPERTY()
    FRichCurve Cx;
    
    UPROPERTY()
    FRichCurve Cy;
    
    FImageCenterFocusPoint();
};

