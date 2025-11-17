#pragma once
#include "CoreMinimal.h"
#include "PalOptionAudioSettings.generated.h"

USTRUCT(BlueprintType)
struct FPalOptionAudioSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float Master;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float BGM;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float SE;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float PalVoice;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float HumanVoice;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float Ambient;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float UI;
    
    PAL_API FPalOptionAudioSettings();
};

