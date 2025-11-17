#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "EPalPlayerInventoryType.h"
#include "PalPlayerInventorySelectData.h"
#include "PalItemSelectorComponent.generated.h"

class UPalItemContainer;
class UPalItemSlot;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalItemSelectorComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FChangeSelectedIndexDelegate, EPalPlayerInventoryType, inventoryType, int32, Index);
    
    UPROPERTY(BlueprintAssignable)
    FChangeSelectedIndexDelegate OnChangeSelectedIndex;
    
protected:
    UPROPERTY(Transient, VisibleInstanceOnly)
    TMap<EPalPlayerInventoryType, FPalPlayerInventorySelectData> itemSelectDataMap;
    
public:
    UPalItemSelectorComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SelectPrevItem(EPalPlayerInventoryType targetInventory);
    
    UFUNCTION(BlueprintCallable)
    void SelectNextItem(EPalPlayerInventoryType targetInventory);
    
    UFUNCTION(BlueprintCallable)
    void SelectItem(EPalPlayerInventoryType targetInventory, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveTargetInventoryType(EPalPlayerInventoryType targetInventoryType);
    
    UFUNCTION(BlueprintPure)
    UPalItemSlot* GetNowSelectedItemSlot(EPalPlayerInventoryType targetInventory) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetNowSelectedIndex(EPalPlayerInventoryType targetInventory) const;
    
    UFUNCTION(BlueprintPure)
    UPalItemContainer* GetContainer(EPalPlayerInventoryType targetInventory) const;
    
    UFUNCTION(BlueprintCallable)
    bool AddTargetInventoryType(EPalPlayerInventoryType targetInventoryType);
    
};

