#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NiagaraAnimNotifies -ObjectName=AnimNotifyState_TimedNiagaraEffect -FallbackName=AnimNotifyState_TimedNiagaraEffect
#include "PalAnimNotifyState_Effect.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class PAL_API UPalAnimNotifyState_Effect : public UAnimNotifyState_TimedNiagaraEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TMap<FName, float> UserParameterMap;
    
    UPROPERTY(EditAnywhere)
    bool ScaleWithMesh;
    
    UPROPERTY(EditAnywhere)
    bool NotSpawnWhenHidden;
    
public:
    UPalAnimNotifyState_Effect();

};

