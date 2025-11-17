#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RichCurve -FallbackName=RichCurve
#include "BaseFocusPoint.h"
#include "NodalOffsetFocusPoint.generated.h"

USTRUCT()
struct CAMERACALIBRATIONCORE_API FNodalOffsetFocusPoint : public FBaseFocusPoint {
    GENERATED_BODY()
public:
    UPROPERTY()
    float Focus;
    
    UPROPERTY()
    FRichCurve LocationOffset[3];
    
    UPROPERTY()
    FRichCurve RotationOffset[3];
    
    FNodalOffsetFocusPoint();
};

