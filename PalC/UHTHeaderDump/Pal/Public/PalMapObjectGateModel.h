#pragma once
#include "CoreMinimal.h"
#include "GameDateTime.h"
#include "PalInstanceID.h"
#include "PalMapObjectConcreteModelBase.h"
#include "PalMapObjectGateModel.generated.h"

class AActor;
class IPalInteractiveObjectComponentInterface;
class UPalInteractiveObjectComponentInterface;
class UPalIndividualCharacterParameter;

UCLASS()
class PAL_API UPalMapObjectGateModel : public UPalMapObjectConcreteModelBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    FGameDateTime UnlockDateTime;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    TMap<FPalInstanceID, TWeakObjectPtr<UPalIndividualCharacterParameter>> WeakInteractingCharacterParameters;
    
public:
    UPalMapObjectGateModel();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION()
    void RequestTrigger_ServerInternal(const int32 RequestPlayerId, const int32 ToStateInt);
    
protected:
    UFUNCTION()
    void OnInteractEnd(AActor* Other, TScriptInterface<IPalInteractiveObjectComponentInterface> Component);
    
    UFUNCTION()
    void OnInteractBegin(AActor* Other, TScriptInterface<IPalInteractiveObjectComponentInterface> Component);
    
};

