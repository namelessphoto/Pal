#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AkAudio -ObjectName=EAkCallbackType -FallbackName=EAkCallbackType
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=PhysicsCore -ObjectName=EPhysicalSurface -FallbackName=EPhysicalSurface
#include "PalDataTableRowName_SoundID.h"
#include "PalSoundOptions.h"
#include "PalSoundSlot.generated.h"

class UAkAudioEvent;
class UAkCallbackInfo;
class UPalSoundPlayer;

UCLASS(Blueprintable)
class UPalSoundSlot : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TMap<FPalDataTableRowName_SoundID, UAkAudioEvent*> SoundMap;
    
private:
    UPROPERTY()
    TMap<int32, FPalDataTableRowName_SoundID> PlaySoundParameters;
    
    UPROPERTY()
    UPalSoundPlayer* SoundPlayer;
    
public:
    UPalSoundSlot();

    UFUNCTION(BlueprintNativeEvent)
    void Terminate();
    
    UFUNCTION(BlueprintCallable)
    void StopSoundBySoundId(const FPalDataTableRowName_SoundID& SoundId);
    
    UFUNCTION(BlueprintCallable)
    void StopSound();
    
private:
    UFUNCTION()
    void StopByPlayingId(int32 PlayingID);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetSwitch(const FString& SwitchGroup, const FString& SwitchState);
    
    UFUNCTION(BlueprintCallable)
    void SetRTPCValue(const FName& Name, float Value, float interpolSec);
    
    UFUNCTION(BlueprintCallable)
    void SetPhysicalMaterial(TEnumAsByte<EPhysicalSurface> PhysicalSurface);
    
    UFUNCTION(BlueprintCallable)
    int32 PlaySoundByAkEvent(UAkAudioEvent* AkEvent, const FPalSoundOptions& Options);
    
    UFUNCTION(BlueprintCallable)
    int32 PlaySound(const FPalDataTableRowName_SoundID& ID, const FPalSoundOptions& Options);
    
private:
    UFUNCTION()
    void OnAkPostEventCallback(EAkCallbackType CallbackType, UAkCallbackInfo* CallbackInfo);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsPlayingBySoundId(const FPalDataTableRowName_SoundID& SoundId) const;
    
    UFUNCTION(BlueprintNativeEvent)
    void Initialize();
    
    UFUNCTION(BlueprintPure)
    UPalSoundPlayer* GetSoundPlayer() const;
    
    UFUNCTION(BlueprintPure)
    UAkAudioEvent* GetAkEvent(const FPalDataTableRowName_SoundID& ID);
    
};

