#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AkAudio -ObjectName=AkComponent -FallbackName=AkComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=AudioLinkEngine -ObjectName=AudioLinkBlueprintInterface -FallbackName=AudioLinkBlueprintInterface
#include "WwiseAudioLinkComponent.generated.h"

class UAudioComponent;
class USoundBase;
class UWwiseAudioLinkSettings;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWwiseAudioLinkComponent : public UAkComponent, public IAudioLinkBlueprintInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UWwiseAudioLinkSettings* Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USoundBase* Sound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAutoPlay;
    
protected:
    UPROPERTY(Instanced, Transient)
    UAudioComponent* AudioComponent;
    
public:
    UWwiseAudioLinkComponent(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    void StopLink() override PURE_VIRTUAL(StopLink,);
    
    UFUNCTION(BlueprintCallable)
    void SetLinkSound(USoundBase* NewSound) override PURE_VIRTUAL(SetLinkSound,);
    
    UFUNCTION(BlueprintCallable)
    void PlayLink(float StartTime) override PURE_VIRTUAL(PlayLink,);
    
    UFUNCTION(BlueprintCallable)
    bool IsLinkPlaying() const override PURE_VIRTUAL(IsLinkPlaying, return false;);
    
};

