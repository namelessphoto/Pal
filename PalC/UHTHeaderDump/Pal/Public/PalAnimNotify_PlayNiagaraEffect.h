#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NiagaraAnimNotifies -ObjectName=AnimNotify_PlayNiagaraEffect -FallbackName=AnimNotify_PlayNiagaraEffect
#include "PalAnimNotify_PlayNiagaraEffect.generated.h"

UCLASS(CollapseCategories)
class PAL_API UPalAnimNotify_PlayNiagaraEffect : public UAnimNotify_PlayNiagaraEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TMap<FName, float> UserParameterMap;
    
    UPROPERTY(EditAnywhere)
    bool NotSpawnWhenHidden;
    
public:
    UPalAnimNotify_PlayNiagaraEffect();

};

