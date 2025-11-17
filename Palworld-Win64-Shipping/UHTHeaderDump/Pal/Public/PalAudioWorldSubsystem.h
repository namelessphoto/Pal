#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AkAudio -ObjectName=EAkCallbackType -FallbackName=EAkCallbackType
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EPalAudioRTPC.h"
#include "EPalAudioState.h"
#include "EPalAudioStateGroup.h"
#include "EPalAudioTrigger.h"
#include "PalSoundOptions.h"
#include "PalWorldSubsystem.h"
#include "PalAudioWorldSubsystem.generated.h"

class AActor;
class AController;
class APalAmbientSoundAreaBase;
class APalPlayerCharacter;
class APalSpotAreaBase;
class APawn;
class UAkAudioEvent;
class UAkCallbackInfo;
class UPalBaseCampModel;
class UPalSoundPlayer;

UCLASS(Blueprintable)
class PAL_API UPalAudioWorldSubsystem : public UPalWorldSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 FadeDuration;
    
private:
    UPROPERTY()
    UPalSoundPlayer* SoundPlayer;
    
public:
    UPalAudioWorldSubsystem();

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void Tick_BP(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void StopSound();
    
    UFUNCTION(BlueprintCallable)
    void SetSwitch(const FString& SwitchGroup, const FString& SwitchState);
    
    UFUNCTION(BlueprintCallable)
    void SetStateFlagByName(FName StateGroup, bool flg);
    
    UFUNCTION(BlueprintCallable)
    void SetStateFlagByEnum(EPalAudioStateGroup StateGroup, bool flg);
    
    UFUNCTION(BlueprintCallable)
    void SetStateByName(FName StateGroup, FName State);
    
    UFUNCTION(BlueprintCallable)
    void SetStateByEnum(EPalAudioStateGroup StateGroup, EPalAudioState State);
    
    UFUNCTION(BlueprintCallable)
    void SetSoundPlayerLocation(const FVector& Location);
    
    UFUNCTION(BlueprintCallable)
    void SetRTPCValueByName(const FName& Name, float Value, float interpolSec);
    
    UFUNCTION(BlueprintCallable)
    void SetRTPCValueByEnum(EPalAudioRTPC RTPC, float Value, float interpolSec);
    
    UFUNCTION(BlueprintCallable)
    void SetOutputBusVolume(float Volume);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetDsiableBattleBGM(bool bIsDisable);
    
protected:
    UFUNCTION(BlueprintCallable)
    void PostTriggerByString(const FString& Trigger);
    
    UFUNCTION(BlueprintCallable)
    void PostTriggerByEnum(EPalAudioTrigger Trigger);
    
    UFUNCTION(BlueprintCallable)
    int32 PlaySound(UAkAudioEvent* AudioEvent, const FPalSoundOptions& Options);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSpawnedLocalPlayerCharacter(APawn* Pawn, AController* Controller);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPlayerExitSpotArea(APalPlayerCharacter* Player, APalSpotAreaBase* SpotArea);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPlayerExitBaseCamp(APalPlayerCharacter* Player, UPalBaseCampModel* BaseCampModel);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPlayerExitAmbientArea(APalPlayerCharacter* Player, APalAmbientSoundAreaBase* AmbientSoundArea);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPlayerEnterSpotArea(APalPlayerCharacter* Player, APalSpotAreaBase* SpotArea);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPlayerEnterBaseCamp(APalPlayerCharacter* Player, UPalBaseCampModel* BaseCampModel);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPlayerEnterAmbientArea(APalPlayerCharacter* Player, APalAmbientSoundAreaBase* AmbientSoundArea);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnEndOfEvent();
    
private:
    UFUNCTION()
    void OnAkPostEventCallback(EAkCallbackType CallbackType, UAkCallbackInfo* CallbackInfo);
    
protected:
    UFUNCTION(BlueprintCallable)
    void InitializeSystem(AActor* AkOwnerActor);
    
    UFUNCTION(BlueprintPure)
    void GetSoundPlayerLocation(FVector& OutLocation) const;
    
    UFUNCTION(BlueprintCallable)
    void FadeOutByPlayingId_CustomFadeDuration(int32 PlayingID, int32 Duration);
    
    UFUNCTION(BlueprintCallable)
    void FadeOutByPlayingId(int32 PlayingID);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BeginPlay();
    
};

