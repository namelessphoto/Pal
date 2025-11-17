#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EPalAudioBus.h"
#include "EPalAudioFadeType.h"
#include "FloatContainer.h"
#include "PalAudioFadeParameter.h"
#include "PalAudioSettingSystem.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalAudioSettingSystem : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TMap<EPalAudioBus, FFloatContainer> BusVolumeMap;
    
    UPROPERTY()
    TMap<EPalAudioBus, FPalAudioFadeParameter> BussFadeMap;
    
public:
    UPalAudioSettingSystem();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Tick_BP(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void StartAudioFade(EPalAudioBus AudioBus, EPalAudioFadeType FadeType, bool bImmediately);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetAudioBusVolume(EPalAudioBus AudioBus, const FName& Key, float Volume);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetAudioBusMute(EPalAudioBus AudioBus, bool IsMute);
    
    UFUNCTION(BlueprintPure)
    FString PalAudioBusToString(EPalAudioBus AudioBus) const;
    
    UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
    bool IsAudioBusMute(EPalAudioBus AudioBus) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Initialize();
    
    UFUNCTION(BlueprintPure)
    float GetAudioBusVolume(EPalAudioBus AudioBus) const;
    
};

