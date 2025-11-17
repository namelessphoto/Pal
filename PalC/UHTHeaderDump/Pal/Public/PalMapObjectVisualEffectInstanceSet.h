#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectVisualEffectInstanceSet.generated.h"

class UNiagaraComponent;

USTRUCT(BlueprintType)
struct FPalMapObjectVisualEffectInstanceSet {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    TArray<UNiagaraComponent*> Instances;
    
    PAL_API FPalMapObjectVisualEffectInstanceSet();
};

