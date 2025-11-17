#pragma once
#include "CoreMinimal.h"
#include "CalibratedMapFormat.h"
#include "STMapInfo.generated.h"

class UTexture;

USTRUCT(BlueprintType)
struct CAMERACALIBRATIONCORE_API FSTMapInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture* DistortionMap;
    
    UPROPERTY(EditAnywhere)
    FCalibratedMapFormat MapFormat;
    
    FSTMapInfo();
};

