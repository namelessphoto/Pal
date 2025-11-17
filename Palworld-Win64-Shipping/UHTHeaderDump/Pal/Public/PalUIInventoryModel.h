#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EPalItemSlotPressType.h"
#include "EPalItemTypeA.h"
#include "EPalItemTypeB.h"
#include "EPalPlayerInventoryType.h"
#include "PalContainerId.h"
#include "PalItemAndNum.h"
#include "PalItemSlotId.h"
#include "PalStaticItemIdAndNum.h"
#include "PalUIInventoryModel.generated.h"

class UPalItemContainer;
class UPalItemContainerMultiHelper;
class UPalItemSlot;

UCLASS(BlueprintType)
class UPalUIInventoryModel : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FUpdateContainerContentDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFinishedItemTrashDelegate, bool, Result);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFinishedItemDropDelegate, bool, Result);
    
    UPROPERTY(BlueprintAssignable)
    FUpdateContainerContentDelegate OnUpdateContainerContentDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FFinishedItemTrashDelegate OnFinishedItemTrashDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FFinishedItemDropDelegate OnFinishedItemDropDelegate;
    
protected:
    UPROPERTY(Transient)
    UPalItemContainerMultiHelper* InventoryContainers;
    
    UPROPERTY()
    FPalItemSlotId tmpLiftedItemSlotId;
    
    UPROPERTY()
    FPalItemAndNum tmpLiftedItemAndNum;
    
public:
    UPalUIInventoryModel();

    UFUNCTION(BlueprintCallable)
    bool TryUseLiftUpItemToPlayer();
    
    UFUNCTION(BlueprintCallable)
    void TryMoveSlotToInventory(UPalItemSlot* fromSlot, bool tryAutoEquip);
    
    UFUNCTION(BlueprintCallable)
    void TryMoveContainerToInventory(UPalItemContainer* fromContainer, bool tryAutoEquip);
    
    UFUNCTION(BlueprintPure)
    bool TryGetInventoryContainer(const EPalPlayerInventoryType Type, UPalItemContainer*& Container) const;
    
    UFUNCTION(BlueprintCallable)
    void TryFillSlotToTargetContainerFromInventory(const FPalContainerId& ToContainerId);
    
    UFUNCTION(BlueprintCallable)
    void TryFillSlotToInventoryFromTargetContainer(const FPalContainerId& FromContainerId);
    
    UFUNCTION(BlueprintCallable)
    void TrashLiftUpItem();
    
    UFUNCTION(BlueprintCallable)
    void Setup();
    
    UFUNCTION(BlueprintCallable)
    void SelectItemSlot(const FPalItemSlotId SlotId, const EPalItemSlotPressType PressType);
    
    UFUNCTION(BlueprintCallable)
    void ResetLiftItem();
    
    UFUNCTION(BlueprintCallable)
    void RequestSortInventory();
    
    UFUNCTION()
    void OnUpdateContainerContent(UPalItemContainer* Container);
    
private:
    UFUNCTION()
    void OnFinishedTrashItemDialog(bool Result);
    
    UFUNCTION()
    void OnFinishedTrashItemAlert(bool Result);
    
    UFUNCTION()
    void OnFinishedDropItem(bool Result);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsExistItems(TArray<FPalStaticItemIdAndNum> RequiredItems);
    
    UFUNCTION(BlueprintCallable)
    void DropLiftUpItem();
    
    UFUNCTION(BlueprintCallable)
    void Dispose();
    
    UFUNCTION(BlueprintPure)
    bool CheckLiftItemTypeB(EPalItemTypeB checkType);
    
    UFUNCTION(BlueprintPure)
    bool CheckLiftItemTypeA(EPalItemTypeA checkType);
    
};

