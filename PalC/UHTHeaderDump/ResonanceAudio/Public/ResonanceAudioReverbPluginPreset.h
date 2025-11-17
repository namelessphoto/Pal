#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SoundEffectSubmixPreset -FallbackName=SoundEffectSubmixPreset
#include "ERaMaterialName.h"
#include "ResonanceAudioReverbPluginSettings.h"
#include "ResonanceAudioReverbPluginPreset.generated.h"

UCLASS(BlueprintType, EditInlineNew)
class RESONANCEAUDIO_API UResonanceAudioReverbPluginPreset : public USoundEffectSubmixPreset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FResonanceAudioReverbPluginSettings Settings;
    
    UResonanceAudioReverbPluginPreset();

    UFUNCTION(BlueprintCallable)
    void SetRoomRotation(const FQuat& InRotation);
    
    UFUNCTION(BlueprintCallable)
    void SetRoomPosition(const FVector& InPosition);
    
    UFUNCTION(BlueprintCallable)
    void SetRoomMaterials(const TArray<ERaMaterialName>& InMaterials);
    
    UFUNCTION(BlueprintCallable)
    void SetRoomDimensions(const FVector& InDimensions);
    
    UFUNCTION(BlueprintCallable)
    void SetReverbTimeModifier(float InReverbTimeModifier);
    
    UFUNCTION(BlueprintCallable)
    void SetReverbGain(float InReverbGain);
    
    UFUNCTION(BlueprintCallable)
    void SetReverbBrightness(float InReverbBrightness);
    
    UFUNCTION(BlueprintCallable)
    void SetReflectionScalar(float InReflectionScalar);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableRoomEffects(bool bInEnableRoomEffects);
    
};

