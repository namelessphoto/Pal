#pragma once
#include "CoreMinimal.h"
#include "EPalActionType.h"
#include "EPalMapObjectItemCollectableType.h"
#include "PalMapObjectItemCollectableInterface.h"
#include "PalMapObjectPickableItemModelBase.h"
#include "PalMapObjectPickupItemOnLevelModel.generated.h"

class UPalItemContainer;

UCLASS()
class UPalMapObjectPickupItemOnLevelModel : public UPalMapObjectPickableItemModelBase, public IPalMapObjectItemCollectableInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    FName VisualStaticItemId;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    float LongHoldInteractDuration;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    EPalActionType InteractPlayerActionType;
    
public:
    UPalMapObjectPickupItemOnLevelModel();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION()
    void OnUpdateItemContainerContents(UPalItemContainer* Container);
    
protected:
    UFUNCTION(BlueprintPure)
    FName GetVisualStaticItemId() const;
    

    // Fix for true pure virtual functions not being implemented
public:
    UFUNCTION(BlueprintCallable)
    EPalMapObjectItemCollectableType GetItemCollectableType() const override PURE_VIRTUAL(GetItemCollectableType, return EPalMapObjectItemCollectableType::Pickup;);
    
};

