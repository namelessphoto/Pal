#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AudioExtensions -ObjectName=SoundfieldEncodingSettingsBase -FallbackName=SoundfieldEncodingSettingsBase
#include "EResonanceRenderMode.h"
#include "ResonanceAudioSoundfieldSettings.generated.h"

UCLASS(BlueprintType, EditInlineNew)
class RESONANCEAUDIO_API UResonanceAudioSoundfieldSettings : public USoundfieldEncodingSettingsBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EResonanceRenderMode RenderMode;
    
    UResonanceAudioSoundfieldSettings();

};

