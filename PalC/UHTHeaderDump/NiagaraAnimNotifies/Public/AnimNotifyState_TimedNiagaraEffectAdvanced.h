#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyState_TimedNiagaraEffect.h"
#include "CurveParameterPair.h"
#include "AnimNotifyState_TimedNiagaraEffectAdvanced.generated.h"

class UMeshComponent;

UCLASS(CollapseCategories, EditInlineNew)
class NIAGARAANIMNOTIFIES_API UAnimNotifyState_TimedNiagaraEffectAdvanced : public UAnimNotifyState_TimedNiagaraEffect {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bEnableNormalizedNotifyProgress;
    
    UPROPERTY(EditAnywhere)
    FName NotifyProgressUserParameter;
    
    UPROPERTY(EditAnywhere)
    TArray<FCurveParameterPair> AnimCurves;
    
    UAnimNotifyState_TimedNiagaraEffectAdvanced();

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    float GetNotifyProgress(UMeshComponent* MeshComp) const;
    
};

