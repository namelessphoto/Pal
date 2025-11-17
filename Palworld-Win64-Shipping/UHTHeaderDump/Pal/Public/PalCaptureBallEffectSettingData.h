#pragma once
#include "CoreMinimal.h"
#include "PalCaptureBallEffectSettingData.generated.h"

USTRUCT(BlueprintType)
struct FPalCaptureBallEffectSettingData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 CaptureAbsorbToBall_ParticleCount;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float CaptureAbsorbToBall_Scale;
    
    PAL_API FPalCaptureBallEffectSettingData();
};

