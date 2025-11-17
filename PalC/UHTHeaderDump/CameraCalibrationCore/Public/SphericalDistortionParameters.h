#pragma once
#include "CoreMinimal.h"
#include "SphericalDistortionParameters.generated.h"

USTRUCT(BlueprintType)
struct CAMERACALIBRATIONCORE_API FSphericalDistortionParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float K1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float K2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float K3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float P1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float P2;
    
    FSphericalDistortionParameters();
};

