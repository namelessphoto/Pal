#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AudioLinkCore -ObjectName=AudioLinkSettingsAbstract -FallbackName=AudioLinkSettingsAbstract
#include "WwiseAudioLinkSettings.generated.h"

class UAkAudioEvent;

UCLASS(DefaultConfig, EditInlineNew, Config=Game)
class WWISE_API UWwiseAudioLinkSettings : public UAudioLinkSettingsAbstract {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UAkAudioEvent> StartEvent;
    
    UPROPERTY(Config, EditAnywhere)
    bool bShouldClearBufferOnReceipt;
    
    UPROPERTY(Config, EditAnywhere)
    float ProducerToConsumerBufferRatio;
    
    UPROPERTY(Config, EditAnywhere)
    float InitialSilenceFillRatio;
    
protected:
    UPROPERTY(Transient)
    UAkAudioEvent* StartEventResolved;
    
public:
    UWwiseAudioLinkSettings();

};

