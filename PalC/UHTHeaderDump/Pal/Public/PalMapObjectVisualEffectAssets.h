#pragma once
#include "CoreMinimal.h"
#include "EPalMapObjectVisualEffectType.h"
#include "PalMapObjectVisualEffectAssets.generated.h"

class UNiagaraSystem;

USTRUCT(BlueprintType)
struct FPalMapObjectVisualEffectAssets {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TMap<EPalMapObjectVisualEffectType, TSoftObjectPtr<UNiagaraSystem>> AssetMap;
    
    PAL_API FPalMapObjectVisualEffectAssets();
};

