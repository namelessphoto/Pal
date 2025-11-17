#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "EPalInteractiveObjectIndicatorType.h"
#include "PalInteractiveObjectIndicatorInterface.h"
#include "PalPlayerTreasureMapPointDataItem.h"
#include "PalTreasureMapInteractivePoint.generated.h"

class APalPlayerState;
class IPalInteractiveObjectComponentInterface;
class UPalInteractiveObjectComponentInterface;
class UAkAudioEvent;
class UPalPlayerTreasureMapPointData;

UCLASS()
class PAL_API APalTreasureMapInteractivePoint : public AActor, public IPalInteractiveObjectIndicatorInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    TScriptInterface<IPalInteractiveObjectComponentInterface> InteractComp;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    FGuid OwnerLevelInstanceId;
    
    UPROPERTY(EditDefaultsOnly)
    UAkAudioEvent* PickupAkEvent;
    
public:
    APalTreasureMapInteractivePoint(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void SetVisualByPointDataItem(const FPalPlayerTreasureMapPointDataItem& Item);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetActiveForPlayerInteract(const bool bActive);
    
private:
    UFUNCTION()
    void OnTriggerInteract(AActor* Other, EPalInteractiveObjectIndicatorType IndicatorType);
    
    UFUNCTION()
    void OnRemovePointData_ClientInternal(const UPalPlayerTreasureMapPointData* PointData, const FGuid& PointId);
    
    UFUNCTION()
    void OnCompleteLocalPlayerSetup(APalPlayerState* PlayerState);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnChangedActorLocation();
    
private:
    UFUNCTION()
    void OnAddedOrChangedPointData_ClientInternal(const UPalPlayerTreasureMapPointData* PointData, const FGuid& PointId);
    

    // Fix for true pure virtual functions not being implemented
};

