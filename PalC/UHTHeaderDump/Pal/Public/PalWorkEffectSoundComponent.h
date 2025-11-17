#pragma once
#include "CoreMinimal.h"
#include "PalAkComponent.h"
#include "PalInstanceID.h"
#include "PalWorkEffectSoundComponent.generated.h"

class UPalWorkBase;
class UPalWorkProgress;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalWorkEffectSoundComponent : public UPalAkComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient, VisibleInstanceOnly, ReplicatedUsing=OnRep_ActiveFX)
    bool bActiveFX;
    
public:
    UPalWorkEffectSoundComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION()
    void OnWorkStarted(UPalWorkBase* Work, const FPalInstanceID& IndividualId);
    
    UFUNCTION()
    void OnWorkEnded(UPalWorkBase* Work, const FPalInstanceID& IndividualId);
    
    UFUNCTION()
    void OnWorkDisposed(UPalWorkBase* Work);
    
    UFUNCTION()
    void OnRep_ActiveFX(const bool bOldValue);
    
    UFUNCTION()
    void OnChangedInProgress(UPalWorkProgress* WorkProgress);
    
};

