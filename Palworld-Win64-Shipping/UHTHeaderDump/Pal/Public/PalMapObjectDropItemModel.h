#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EPalMapObjectItemCollectableType.h"
#include "PalItemId.h"
#include "PalMapObjectItemCollectableInterface.h"
#include "PalMapObjectPickableItemModelBase.h"
#include "PalMapObjectDropItemModel.generated.h"

class AActor;
class IPalInteractiveObjectComponentInterface;
class UPalInteractiveObjectComponentInterface;
class UPalItemContainer;

UCLASS()
class UPalMapObjectDropItemModel : public UPalMapObjectPickableItemModelBase, public IPalMapObjectItemCollectableInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Replicated)
    FPalItemId ItemId;
    
    UPROPERTY(BlueprintReadOnly)
    FVector ReleaseDirection;
    
    UPROPERTY(BlueprintReadOnly, Replicated)
    bool bEnableInteract;
    
public:
    UPalMapObjectDropItemModel();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION()
    void OnUpdateItemContainerContentInServer(UPalItemContainer* Container);
    
protected:
    UFUNCTION()
    void OnInteractEnd(AActor* Other, TScriptInterface<IPalInteractiveObjectComponentInterface> Component);
    
    UFUNCTION()
    void OnInteractBegin(AActor* Other, TScriptInterface<IPalInteractiveObjectComponentInterface> Component);
    
    UFUNCTION()
    void OnEnableTriggerInteract(TScriptInterface<IPalInteractiveObjectComponentInterface> Component);
    

    // Fix for true pure virtual functions not being implemented
public:
    UFUNCTION(BlueprintCallable)
    EPalMapObjectItemCollectableType GetItemCollectableType() const override PURE_VIRTUAL(GetItemCollectableType, return EPalMapObjectItemCollectableType::Pickup;);
    
};

