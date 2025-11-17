#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "PalStaticCharacterInfo_WaterEffect.generated.h"

class UNiagaraSystem;

USTRUCT(BlueprintType)
struct FPalStaticCharacterInfo_WaterEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UNiagaraSystem* Effect;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FVector Offset;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float Scale;
    
    PAL_API FPalStaticCharacterInfo_WaterEffect();
};

