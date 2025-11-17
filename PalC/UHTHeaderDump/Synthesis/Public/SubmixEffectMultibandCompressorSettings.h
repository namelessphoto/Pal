#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AudioMixer -ObjectName=ESubmixEffectDynamicsChannelLinkMode -FallbackName=ESubmixEffectDynamicsChannelLinkMode
//CROSS-MODULE INCLUDE V2: -ModuleName=AudioMixer -ObjectName=ESubmixEffectDynamicsKeySource -FallbackName=ESubmixEffectDynamicsKeySource
//CROSS-MODULE INCLUDE V2: -ModuleName=AudioMixer -ObjectName=ESubmixEffectDynamicsPeakMode -FallbackName=ESubmixEffectDynamicsPeakMode
//CROSS-MODULE INCLUDE V2: -ModuleName=AudioMixer -ObjectName=ESubmixEffectDynamicsProcessorType -FallbackName=ESubmixEffectDynamicsProcessorType
#include "DynamicsBandSettings.h"
#include "SubmixEffectMultibandCompressorSettings.generated.h"

class UAudioBus;
class USoundSubmix;

USTRUCT(BlueprintType)
struct SYNTHESIS_API FSubmixEffectMultibandCompressorSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESubmixEffectDynamicsProcessorType DynamicsProcessorType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESubmixEffectDynamicsPeakMode PeakMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESubmixEffectDynamicsChannelLinkMode LinkMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LookAheadMsec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAnalogMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bFourPole;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bBypass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESubmixEffectDynamicsKeySource KeySource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAudioBus* ExternalAudioBus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundSubmix* ExternalSubmix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float KeyGainDb;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bKeyAudition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FDynamicsBandSettings> Bands;
    
    FSubmixEffectMultibandCompressorSettings();
};

