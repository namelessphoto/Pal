#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=PhysicsCore -ObjectName=EPhysicalSurface -FallbackName=EPhysicalSurface
#include "FootStepEffectInfo.generated.h"

class UNiagaraSystem;

USTRUCT(BlueprintType)
struct FFootStepEffectInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TMap<TEnumAsByte<EPhysicalSurface>, TSoftObjectPtr<UNiagaraSystem>> PhysicalSurfaceToEffect;
    
    PAL_API FFootStepEffectInfo();
};

