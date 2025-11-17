#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "ResonanceAudioDirectivityVisualizer.generated.h"

class UMaterial;
class UResonanceAudioSpatializationSourceSettings;

UCLASS()
class RESONANCEAUDIO_API AResonanceAudioDirectivityVisualizer : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    UMaterial* Material;
    
    UPROPERTY()
    UResonanceAudioSpatializationSourceSettings* Settings;
    
public:
    AResonanceAudioDirectivityVisualizer(const FObjectInitializer& ObjectInitializer);

};

