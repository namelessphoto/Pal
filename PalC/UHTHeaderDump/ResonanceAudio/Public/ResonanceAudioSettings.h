#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
#include "ERaQualityMode.h"
#include "ResonanceAudioSettings.generated.h"

UCLASS(DefaultConfig)
class RESONANCEAUDIO_API UResonanceAudioSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, GlobalConfig)
    FSoftObjectPath OutputSubmix;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    ERaQualityMode QualityMode;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    FSoftObjectPath GlobalReverbPreset;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    FSoftObjectPath GlobalSourcePreset;
    
    UResonanceAudioSettings();

};

