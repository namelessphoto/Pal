#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AkAudio -ObjectName=EAkCallbackType -FallbackName=EAkCallbackType
//CROSS-MODULE INCLUDE V2: -ModuleName=AkAudio -ObjectName=OnAkPostEventCallback__DelegateSignature -FallbackName=OnAkPostEventCallbackDelegate
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=PhysicsCore -ObjectName=EPhysicalSurface -FallbackName=EPhysicalSurface
#include "PalSoundOptions.h"
#include "PalSoundPlayingParameter.h"
#include "PalSoundPlayer.generated.h"

class UAkAudioEvent;
class UAkCallbackInfo;
class UAkComponent;
class USceneComponent;

UCLASS(BlueprintType)
class UPalSoundPlayer : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    FOnAkPostEventCallback AkCallbackOuter;
    
    UPROPERTY()
    bool StopWhenOwnerDestroyed;
    
private:
    UPROPERTY(Instanced)
    USceneComponent* OwnerComponent;
    
    UPROPERTY(Instanced)
    UAkComponent* AkComponent;
    
    UPROPERTY()
    FName OwnerAttachPointName;
    
    UPROPERTY()
    FOnAkPostEventCallback AkCallback;
    
    UPROPERTY()
    TMap<int32, FPalSoundPlayingParameter> PlaySoundParameters;
    
    UPROPERTY()
    TMap<FName, float> OutputBusVolumes;
    
public:
    UPalSoundPlayer();

private:
    UFUNCTION()
    void UpdateOutputBusBolume();
    
public:
    UFUNCTION(BlueprintCallable)
    void Terminate();
    
    UFUNCTION(BlueprintCallable)
    void StopSound();
    
    UFUNCTION()
    void StopByPlayingId(int32 PlayingID);
    
    UFUNCTION(BlueprintCallable)
    void SetWorldLocation(const FVector& Location);
    
    UFUNCTION(BlueprintCallable)
    void SetSwitch(const FString& SwitchGroup, const FString& SwitchState);
    
    UFUNCTION(BlueprintCallable)
    void SetRTPCValue(const FName& Name, float Value, float interpolSec);
    
    UFUNCTION(BlueprintCallable)
    void SetPhysicalMaterial(TEnumAsByte<EPhysicalSurface> PhysicalSurface);
    
    UFUNCTION(BlueprintCallable)
    void SetOutputBusVolume(FName Name, float Volume);
    
    UFUNCTION(BlueprintCallable)
    void SetOcclusionRefreshInterval(float Interval);
    
    UFUNCTION()
    void PostTrigger(const FString& Trigger);
    
    UFUNCTION(BlueprintCallable)
    int32 PlaySound(UAkAudioEvent* AudioEvent, const FPalSoundOptions& Options);
    
private:
    UFUNCTION()
    void OnAkPostEventCallback(EAkCallbackType CallbackType, UAkCallbackInfo* CallbackInfo);
    
public:
    UFUNCTION(BlueprintCallable)
    void Initialize();
    
    UFUNCTION(BlueprintCallable)
    FVector GetWorldLocation();
    
private:
    UFUNCTION()
    FRotator GetOwnerRotation();
    
    UFUNCTION()
    FVector GetOwnerLocation();
    
public:
    UFUNCTION(BlueprintCallable)
    bool GetOutputBusVolume(FName Name, float& Volume);
    
    UFUNCTION()
    void FadeOutByPlayingId(int32 PlayingID, int32 FadeOutDuration);
    
    UFUNCTION(BlueprintCallable)
    void ClearOutputBusVolume(FName Name);
    
};

