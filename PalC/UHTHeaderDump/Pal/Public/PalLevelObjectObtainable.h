#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EPalInteractiveObjectIndicatorType.h"
#include "PalInteractiveObjectIndicatorInterface.h"
#include "PalLevelObjectActor.h"
#include "PalLevelObjectObtainable.generated.h"

class AActor;
class APalLevelObjectObtainable;
class APalPlayerState;
class IPalInteractiveObjectComponentInterface;
class UPalInteractiveObjectComponentInterface;
class UNiagaraSystem;

UCLASS()
class PAL_API APalLevelObjectObtainable : public APalLevelObjectActor, public IPalInteractiveObjectIndicatorInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReturnSelfDelegate, APalLevelObjectObtainable*, Self);
    
    UPROPERTY(BlueprintAssignable)
    FReturnSelfDelegate OnUpdatePickupStatusInClient;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UNiagaraSystem> ObtainFXSoftObj;
    
    UPROPERTY(Transient)
    TScriptInterface<IPalInteractiveObjectComponentInterface> InteractComp;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleInstanceOnly)
    bool bPickedInClient;
    
public:
    APalLevelObjectObtainable(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION()
    void OnUpdateFlagMapRecord(const FName Key, const bool bFlag);
    
    UFUNCTION()
    void OnTriggerInteract(AActor* Other, EPalInteractiveObjectIndicatorType IndicatorType);
    
    UFUNCTION()
    void OnCompleteSyncPlayer(APalPlayerState* PlayerState);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    FVector GetObtainFXLocation() const;
    

    // Fix for true pure virtual functions not being implemented
};

