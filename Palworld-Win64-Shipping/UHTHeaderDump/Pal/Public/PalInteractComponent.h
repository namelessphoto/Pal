#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "EPalInteractiveObjectActionType.h"
#include "FlagContainer.h"
#include "PalInteractComponentOverlapComponentSet.h"
#include "PalInteractComponent.generated.h"

class IPalInteractiveObjectComponentInterface;
class UPalInteractiveObjectComponentInterface;
class UObject;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalInteractComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdateInteractiveObjectDelegate, TScriptInterface<IPalInteractiveObjectComponentInterface>, InteractiveObject);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FStartInteractiveObjectDelegate, TScriptInterface<IPalInteractiveObjectComponentInterface>, InteractiveObject);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FEndInteractiveObjectDelegate);
    
    UPROPERTY(BlueprintAssignable)
    FStartInteractiveObjectDelegate OnStartInteractiveObjectDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FEndInteractiveObjectDelegate OnEndInteractiveObjectDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FUpdateInteractiveObjectDelegate OnUpdateInteractiveObjectDelegate;
    
protected:
    UPROPERTY(Transient, VisibleDefaultsOnly)
    TArray<TScriptInterface<IPalInteractiveObjectComponentInterface>> InteractiveObjects;
    
    UPROPERTY(Transient)
    TMap<UObject*, FPalInteractComponentOverlapComponentSet> InteractComponentOverlapMap;
    
    UPROPERTY()
    TScriptInterface<IPalInteractiveObjectComponentInterface> TargetInteractiveObject;
    
    UPROPERTY()
    TScriptInterface<IPalInteractiveObjectComponentInterface> LastInteractingObject;
    
private:
    UPROPERTY()
    FFlagContainer InteractDisableFlags;
    
public:
    UPalInteractComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TerminateInteract();
    
    UFUNCTION(BlueprintCallable)
    void StartTriggerInteract(EPalInteractiveObjectActionType ActionType, bool IsToggle);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void SetEnableInteractByFlagName(const FName& flagName, const bool bEnable, const bool bTerminateInteractIfDisable);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableInteract(const bool bEnable, const bool bTerminateInteractIfDisable);
    
private:
    UFUNCTION()
    void OnEnableInteract(TScriptInterface<IPalInteractiveObjectComponentInterface> Component);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsToggleInteracting() const;
    
    UFUNCTION(BlueprintPure)
    bool IsInteracting() const;
    
    UFUNCTION(BlueprintPure)
    bool IsEnableInteract() const;
    
    UFUNCTION(BlueprintPure)
    EPalInteractiveObjectActionType GetTriggeringActionType() const;
    
    UFUNCTION(BlueprintCallable)
    void EndTriggerInteract(EPalInteractiveObjectActionType ActionType);
    
};

