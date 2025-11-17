#pragma once
#include "CoreMinimal.h"
#include "DistortionInfo.h"
#include "FocalLengthInfo.h"
#include "ImageCenterInfo.h"
#include "LensDistortionState.generated.h"

USTRUCT(BlueprintType)
struct CAMERACALIBRATIONCORE_API FLensDistortionState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDistortionInfo DistortionInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FFocalLengthInfo FocalLengthInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FImageCenterInfo ImageCenter;
    
    FLensDistortionState();
};

