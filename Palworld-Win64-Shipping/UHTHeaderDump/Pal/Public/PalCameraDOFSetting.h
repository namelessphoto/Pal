#pragma once
#include "CoreMinimal.h"
#include "PalCameraDOFSetting.generated.h"

USTRUCT(BlueprintType)
struct FPalCameraDOFSetting {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float DepthOfFieldFocalDistance;
    
    UPROPERTY(EditAnywhere)
    float DepthOfFieldDepthBlurAmount;
    
    UPROPERTY(EditAnywhere)
    float DepthOfFieldDepthBlurRadius;
    
    UPROPERTY(EditAnywhere)
    float DepthOfFieldFstop;
    
    UPROPERTY(EditAnywhere)
    float FOV;
    
    PAL_API FPalCameraDOFSetting();
};

