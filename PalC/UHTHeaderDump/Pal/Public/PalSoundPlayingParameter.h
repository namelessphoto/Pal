#pragma once
#include "CoreMinimal.h"
#include "PalSoundOptions.h"
#include "PalSoundPlayingParameter.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct FPalSoundPlayingParameter {
    GENERATED_BODY()
public:
    UPROPERTY()
    UAkAudioEvent* AudioEvent;
    
    UPROPERTY()
    FPalSoundOptions Options;
    
    UPROPERTY()
    bool bStopAbsolutely;
    
    PAL_API FPalSoundPlayingParameter();
};

