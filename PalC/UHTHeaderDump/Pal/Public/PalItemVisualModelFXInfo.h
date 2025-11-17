#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "PalItemVisualModelFXInfo.generated.h"

class UNiagaraSystem;

USTRUCT(BlueprintType)
struct FPalItemVisualModelFXInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    UNiagaraSystem* NiagaraSystem;
    
    UPROPERTY(BlueprintReadOnly)
    FTransform LocalTransform;
    
    PAL_API FPalItemVisualModelFXInfo();
};

