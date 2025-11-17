#pragma once
#include "CoreMinimal.h"
#include "DistortionInfo.generated.h"

USTRUCT(BlueprintType)
struct CAMERACALIBRATIONCORE_API FDistortionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<float> Parameters;
    
    FDistortionInfo();
};

