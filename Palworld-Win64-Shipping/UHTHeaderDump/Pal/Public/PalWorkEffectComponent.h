#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Niagara -ObjectName=NiagaraComponent -FallbackName=NiagaraComponent
#include "PalInstanceID.h"
#include "PalWorkEffectComponent.generated.h"

class UPalWorkBase;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalWorkEffectComponent : public UNiagaraComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient, VisibleInstanceOnly, ReplicatedUsing=OnRep_ActiveFX)
    bool bActiveFX;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    bool bWorkFacingChild;
    
public:
    UPalWorkEffectComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION()
    void OnWorkStarted(UPalWorkBase* Work, const FPalInstanceID& IndividualId);
    
    UFUNCTION()
    void OnWorkEnded(UPalWorkBase* Work, const FPalInstanceID& IndividualId);
    
    UFUNCTION()
    void OnWorkDisposed(UPalWorkBase* Work);
    
    UFUNCTION()
    void OnRep_ActiveFX();
    
};

