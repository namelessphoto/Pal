#pragma once
#include "CoreMinimal.h"
#include "EPalInteractiveObjectIndicatorType.h"
#include "PalInteractiveObjectIndicatorInterface.h"
#include "PalLevelObjectActor.h"
#include "PalLevelObjectUnlockableFastTravelPoint.generated.h"

class AActor;
class APalLevelObjectUnlockableFastTravelPoint;
class APalPlayerState;
class IPalInteractiveObjectComponentInterface;
class UPalInteractiveObjectComponentInterface;
class UAkAudioEvent;

UCLASS()
class PAL_API APalLevelObjectUnlockableFastTravelPoint : public APalLevelObjectActor, public IPalInteractiveObjectIndicatorInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReturnSelfDelegate, APalLevelObjectUnlockableFastTravelPoint*, Self);
    
    UPROPERTY(BlueprintAssignable)
    FReturnSelfDelegate OnUpdateUnlockStateDelegate;
    
protected:
    UPROPERTY(Transient)
    TScriptInterface<IPalInteractiveObjectComponentInterface> InteractComp;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    bool bUnlocked;
    
    UPROPERTY(Transient)
    bool EnableRequestUnlock;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName FastTravelPointID;
    
public:
    APalLevelObjectUnlockableFastTravelPoint(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION()
    void OnUpdateFlagMapRecord(const FName Key, const bool bFlag);
    
    UFUNCTION()
    void OnTriggerInteract(AActor* Other, EPalInteractiveObjectIndicatorType IndicatorType);
    
    UFUNCTION()
    void OnCompleteSyncPlayer(APalPlayerState* PlayerState);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsUnlocked() const;
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    UAkAudioEvent* GetUnlockAkAudioEvent();
    

    // Fix for true pure virtual functions not being implemented
};

