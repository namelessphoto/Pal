#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AudioExtensions -ObjectName=SpatializationPluginSourceSettingsBase -FallbackName=SpatializationPluginSourceSettingsBase
#include "ERaDistanceRolloffModel.h"
#include "ERaSpatializationMethod.h"
#include "ResonanceAudioSpatializationSourceSettings.generated.h"

UCLASS(BlueprintType, EditInlineNew)
class RESONANCEAUDIO_API UResonanceAudioSpatializationSourceSettings : public USpatializationPluginSourceSettingsBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, GlobalConfig)
    ERaSpatializationMethod SpatializationMethod;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    float Pattern;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    float Sharpness;
    
    UPROPERTY(EditAnywhere)
    bool bToggleVisualization;
    
    UPROPERTY(EditAnywhere)
    float Scale;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    float Spread;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    ERaDistanceRolloffModel Rolloff;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    float minDistance;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    float MaxDistance;
    
    UResonanceAudioSpatializationSourceSettings();

    UFUNCTION(BlueprintCallable)
    void SetSoundSourceSpread(float InSpread);
    
    UFUNCTION(BlueprintCallable)
    void SetSoundSourceDirectivity(float InPattern, float InSharpness);
    
};

