#pragma once
#include "CoreMinimal.h"
#include "SkyCreatorPostProcessSettings.generated.h"

USTRUCT(BlueprintType)
struct FSkyCreatorPostProcessSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float BloomIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float BloomThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float ExposureCompensation;
    
    SKYCREATORPLUGIN_API FSkyCreatorPostProcessSettings();
};

