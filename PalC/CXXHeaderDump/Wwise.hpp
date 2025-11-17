#ifndef UE4SS_SDK_Wwise_HPP
#define UE4SS_SDK_Wwise_HPP

class UWwiseAudioLinkComponent : public UAkComponent
{
    class UWwiseAudioLinkSettings* Settings;
    class USoundBase* Sound;
    bool bAutoPlay;
    class UAudioComponent* AudioComponent;

};

class UWwiseAudioLinkSettings : public UAudioLinkSettingsAbstract
{
    TSoftObjectPtr<UAkAudioEvent> StartEvent;
    bool bShouldClearBufferOnReceipt;
    float ProducerToConsumerBufferRatio;
    float InitialSilenceFillRatio;
    class UAkAudioEvent* StartEventResolved;

};

#endif
