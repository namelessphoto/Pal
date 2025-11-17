#pragma once
#include "CoreMinimal.h"
#include "PalOptionUISettings.generated.h"

USTRUCT(BlueprintType)
struct FPalOptionUISettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float DamageTextScale;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    int32 DamageTextMaxNum;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    int32 ReticleColorIndex;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float ReticleOutlineOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float ChatUICloseDelayTime;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    int32 MinFontSize;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bHideUIWhenNotInBattle;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bCompletedGlobapPalboxTutotial;
    
    PAL_API FPalOptionUISettings();
};

