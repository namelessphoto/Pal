#pragma once
#include "CoreMinimal.h"
#include "PPSkyCreatorPostProcessSettings.generated.h"

USTRUCT(BlueprintType)
struct FPPSkyCreatorPostProcessSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float BloomIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float BloomThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float ExposureCompensation;
    
    PPSKYCREATORPLUGIN_API FPPSkyCreatorPostProcessSettings();
};

