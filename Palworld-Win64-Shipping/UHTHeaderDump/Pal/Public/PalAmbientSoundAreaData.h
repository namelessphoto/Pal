#pragma once
#include "CoreMinimal.h"
#include "PalAmbientSoundAreaData.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct FPalAmbientSoundAreaData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    int32 AmbientPriority;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<UAkAudioEvent*> DayAmbientEvents;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<UAkAudioEvent*> NightAmbientEvents;
    
    PAL_API FPalAmbientSoundAreaData();
};

