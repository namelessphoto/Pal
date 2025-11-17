#pragma once
#include "CoreMinimal.h"
#include "DistortionData.h"
#include "DerivedDistortionData.generated.h"

class UTextureRenderTarget2D;

USTRUCT()
struct CAMERACALIBRATIONCORE_API FDerivedDistortionData {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FDistortionData DistortionData;
    
    UPROPERTY(Transient, VisibleAnywhere)
    UTextureRenderTarget2D* UndistortionDisplacementMap;
    
    UPROPERTY(Transient, VisibleAnywhere)
    UTextureRenderTarget2D* DistortionDisplacementMap;
    
    FDerivedDistortionData();
};

