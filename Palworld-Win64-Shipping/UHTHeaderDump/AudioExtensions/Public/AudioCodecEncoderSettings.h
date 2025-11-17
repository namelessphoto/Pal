#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "AudioCodecEncoderSettings.generated.h"

UCLASS(Abstract)
class AUDIOEXTENSIONS_API UAudioCodecEncoderSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 Version;
    
    UAudioCodecEncoderSettings();

};

