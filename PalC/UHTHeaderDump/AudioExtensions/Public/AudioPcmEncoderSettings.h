#pragma once
#include "CoreMinimal.h"
#include "AudioCodecEncoderSettings.h"
#include "EPcmBitDepthConversion.h"
#include "AudioPcmEncoderSettings.generated.h"

UCLASS()
class AUDIOEXTENSIONS_API UAudioPcmEncoderSettings : public UAudioCodecEncoderSettings {
    GENERATED_BODY()
public:
    UPROPERTY()
    EPcmBitDepthConversion BitDepthConversion;
    
    UAudioPcmEncoderSettings();

};

