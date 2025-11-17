#pragma once
#include "CoreMinimal.h"
#include "EPalAudioFadeType.h"
#include "PalAudioFadeParameter.generated.h"

USTRUCT(BlueprintType)
struct FPalAudioFadeParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    EPalAudioFadeType FadeType;
    
    UPROPERTY(BlueprintReadWrite)
    float CurrentVolume;
    
    PAL_API FPalAudioFadeParameter();
};

