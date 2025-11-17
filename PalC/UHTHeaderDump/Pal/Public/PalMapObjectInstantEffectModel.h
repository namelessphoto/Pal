#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PalMapObjectConcreteModelBase.h"
#include "PalMapObjectInstantEffectModel.generated.h"

class AActor;
class IPalInteractiveObjectComponentInterface;
class UPalInteractiveObjectComponentInterface;

UCLASS()
class PAL_API UPalMapObjectInstantEffectModel : public UPalMapObjectConcreteModelBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Replicated)
    bool bEnableInteract;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    FGuid AuthorizedPlayerUid;
    
public:
    UPalMapObjectInstantEffectModel();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION()
    void RequestInstantEffect_ServerInternal(const int32 RequestPlayerId);
    
public:
    UFUNCTION(BlueprintCallable)
    void RequestInstantEffect();
    
protected:
    UFUNCTION()
    void OnInteractEnd(AActor* Other, TScriptInterface<IPalInteractiveObjectComponentInterface> Component);
    
    UFUNCTION()
    void OnInteractBegin(AActor* Other, TScriptInterface<IPalInteractiveObjectComponentInterface> Component);
    
    UFUNCTION()
    void OnEnableTriggerInteract(TScriptInterface<IPalInteractiveObjectComponentInterface> Component);
    
};

