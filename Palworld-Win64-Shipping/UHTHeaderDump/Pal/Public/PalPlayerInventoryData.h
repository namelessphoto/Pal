#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TimerHandle -FallbackName=TimerHandle
#include "EPalItemOperationResult.h"
#include "EPalItemTypeA.h"
#include "EPalPassiveSkillEffectType.h"
#include "EPalPlayerEquipItemSlotType.h"
#include "EPalPlayerInventoryType.h"
#include "PalContainerId.h"
#include "PalItemAndNum.h"
#include "PalItemId.h"
#include "PalPlayerDataEquipLanternData.h"
#include "PalPlayerDataInventoryInfo.h"
#include "PalPlayerInventoryData.generated.h"

class UAkAudioEvent;
class UPalItemContainer;
class UPalItemContainerMultiHelper;
class UPalItemSlot;
class UPalMoneyData;
class UPalStaticItemDataBase;

UCLASS(BlueprintType)
class PAL_API UPalPlayerInventoryData : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdateWeightInventoryDelegate, float, NowWeight);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdateMaxWeightInventoryDelegate, float, MaxWeight);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FUpdateLoadoutSlotDelegate, UPalItemSlot*, itemSlot, EPalPlayerInventoryType, UpdatedLoadoutType);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdateLanternEquipSettingDelegate, const FPalPlayerDataEquipLanternData&, LanternEquipData);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdateInventoryContainerDelegate, UPalItemContainer*, Container);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdateEssentialContainerDelegate, UPalItemContainer*, Container);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FUpdateEquipmentSlotDelegate, UPalItemSlot*, itemSlot, EPalPlayerEquipItemSlotType, slotType);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPickupItemDelegate, TArray<FPalItemAndNum>&, ItemInfos);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOverWeightInventoryDelegate, float, NowWeight);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FMaxWeightBuffedDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFixedWeightInventoryDelegate, float, NowWeight);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCurrentWeightBuffedDelegate, float, ChangedWeight);
    
    UPROPERTY(BlueprintAssignable)
    FUpdateInventoryContainerDelegate OnUpdateInventoryContainerDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FUpdateEssentialContainerDelegate OnUpdateEssentialContainerDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FUpdateLoadoutSlotDelegate OnUpdateLoadoutSlotDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FUpdateEquipmentSlotDelegate OnUpdateEquipmentSlotDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FUpdateWeightInventoryDelegate OnUpdateWeightInventoryDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FUpdateMaxWeightInventoryDelegate OnUpdateMaxWeightInventoryDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOverWeightInventoryDelegate OnOverWeightInventoryDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FFixedWeightInventoryDelegate OnFixedInventoryWeightDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FMaxWeightBuffedDelegate OnMaxWeightBuffedDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FCurrentWeightBuffedDelegate OnCurrentWeightBuffedDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FPickupItemDelegate OnPickupItemDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FPickupItemDelegate OnGetItemFromConvertItemMapObject;
    
    UPROPERTY(BlueprintAssignable)
    FUpdateLanternEquipSettingDelegate OnUpdateLanternEquipSettingDelegate;
    
private:
    UPROPERTY(VisibleInstanceOnly, ReplicatedUsing=OnRep_InventoryInfo)
    FPalPlayerDataInventoryInfo MyInventoryInfo;
    
    UPROPERTY()
    FTimerHandle FullInventoryLogGuardTimerHandle;
    
public:
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    float NowItemWeight;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly, ReplicatedUsing=OnRep_maxInventoryWeight)
    float MaxInventoryWeight;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    float MaxInventoryWeight_Cached;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    UPalItemContainerMultiHelper* InventoryMultiHelper;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly, ReplicatedUsing=OnRep_BuffMaxWeight)
    float PassiveBuffedMaxWeight;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly, ReplicatedUsing=OnRep_BuffCurrentWeight)
    float PassiveBuffedCurrentWeight;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    FGuid OwnerPlayerUId;
    
private:
    UPROPERTY()
    UPalMoneyData* MyMoneyData;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    UAkAudioEvent* EquipmentBreakAudioEvent;
    
public:
    UPalPlayerInventoryData();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    bool TryRemoveEquipment(UPalItemSlot* EquipSlot);
    
    UFUNCTION(BlueprintPure)
    bool TryGetItemSlotFromEquipmentType(EPalPlayerEquipItemSlotType EquipmentSlotType, UPalItemSlot*& OutSlot) const;
    
    UFUNCTION(BlueprintPure)
    bool TryGetItemIdBySlot(EPalPlayerEquipItemSlotType EquipmentSlotType, FPalItemId& OutItemId);
    
    UFUNCTION(BlueprintPure)
    EPalPlayerEquipItemSlotType TryGetEquipmentTypeFromStaticItemID(const FName& StaticItemId) const;
    
    UFUNCTION(BlueprintPure)
    bool TryGetEquipmentContainerIDFromStaticItemID(const FName& StaticItemId, FPalContainerId& OutContainerId) const;
    
    UFUNCTION(BlueprintPure)
    bool TryGetEmptySlot(EPalPlayerInventoryType inventoryType, UPalItemSlot*& EmptySlot);
    
    UFUNCTION(BlueprintPure)
    bool TryGetContainerIdFromItemType(EPalItemTypeA ItemTypeA, FPalContainerId& OutContainerId) const;
    
    UFUNCTION(BlueprintPure)
    bool TryGetContainerIDFromInventoryType(const EPalPlayerInventoryType inventoryType, FPalContainerId& OutContainerId) const;
    
    UFUNCTION(BlueprintPure)
    bool TryGetContainerFromStaticItemID(const FName& StaticItemId, UPalItemContainer*& OutContainer) const;
    
    UFUNCTION(BlueprintPure)
    bool TryGetContainerFromInventoryType(const EPalPlayerInventoryType inventoryType, UPalItemContainer*& OutContainer) const;
    
    UFUNCTION(BlueprintCallable)
    bool TryEquipSlot(UPalItemSlot* Slot);
    
    UFUNCTION()
    void RequestSortInventory_ServerInternal();
    
    UFUNCTION(BlueprintCallable)
    void RequestSortInventory();
    
    UFUNCTION(Reliable, Server)
    void RequestForceMarkAllDirty_ToServer(const bool ForceOn);
    
    UFUNCTION(BlueprintCallable)
    void RequestForceMarkAllDirty(const bool IsOn);
    
private:
    UFUNCTION(Reliable, Server)
    void RequestFillSlotToTargetContainerFromInventory_ToServer(const FPalContainerId& ToContainerId);
    
    UFUNCTION(Reliable, Server)
    void RequestFillSlotToInventoryFromTargetContainer_ToServer(const FPalContainerId& FromContainerId);
    
public:
    UFUNCTION(BlueprintCallable)
    void RequestChangeLanternSetting(const FPalPlayerDataEquipLanternData& NewLanternSettings);
    
    UFUNCTION(BlueprintCallable)
    void RequestAddItem(const FName StaticItemId, const int32 Count, bool IsAssignPassive);
    
protected:
    UFUNCTION()
    void OnUpdatePassiveSkill(EPalPassiveSkillEffectType EffectType, float Value);
    
    UFUNCTION()
    void OnUpdateLoadoutSlot(UPalItemSlot* Slot);
    
    UFUNCTION()
    void OnUpdateInventoryContainer(UPalItemContainer* Container);
    
    UFUNCTION()
    void OnUpdateEssentialContainer(UPalItemContainer* Container);
    
    UFUNCTION()
    void OnUpdateEquipmentSlot_ForServer(UPalItemSlot* Slot);
    
    UFUNCTION()
    void OnUpdateEquipmentSlot(UPalItemSlot* Slot);
    
    UFUNCTION()
    void OnUpdateAnyEquipmentDurability(float OldDurability, float NewDurability);
    
private:
    UFUNCTION()
    void OnRep_maxInventoryWeight();
    
    UFUNCTION()
    void OnRep_InventoryInfo();
    
    UFUNCTION()
    void OnRep_BuffMaxWeight();
    
    UFUNCTION()
    void OnRep_BuffCurrentWeight();
    
protected:
    UFUNCTION()
    void OnOnUpdateStatusPoint(FName StatusName, int32 prevPoint, int32 NewPoint);
    
private:
    UFUNCTION()
    void OnEquipSlotChanged(UPalItemSlot* Slot, EPalPlayerEquipItemSlotType slotType);
    
protected:
    UFUNCTION()
    void OnEndPassiveSkill(EPalPassiveSkillEffectType EffectType);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsExistItem(const FName& StaticItemId) const;
    
    UFUNCTION(BlueprintPure)
    bool IsEquipSlot(UPalItemSlot* CheckSlot);
    
    UFUNCTION(BlueprintPure)
    bool IsEquip(EPalPlayerEquipItemSlotType EquipmentSlotType, const FName& StaticItemId) const;
    
    UFUNCTION(BlueprintPure)
    bool IsAlreadyEquipedAccessory(const FName& AccessoryItemId) const;
    
    UFUNCTION(BlueprintPure)
    bool IsAccessorySlot(UPalItemSlot*& Slot);
    
    UFUNCTION(BlueprintPure)
    int32 GetUnlockedFoodEquipSlotNum() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetUnlockedAccessorySlotNum() const;
    
    UFUNCTION(BlueprintPure)
    float GetPassiveBuffedItemWeight(const UPalStaticItemDataBase* Item);
    
    UFUNCTION(BlueprintPure)
    float GetNowItemWeight() const;
    
    UFUNCTION(BlueprintPure)
    float GetMaxItemWeight() const;
    
    UFUNCTION(BlueprintPure)
    FPalPlayerDataEquipLanternData GetLanternEquipData() const;
    
    UFUNCTION(BlueprintPure)
    void GetItemInfoByItemTypeA(TArray<EPalItemTypeA> ItemTypeA, TArray<FPalItemAndNum>& OutItemInfos);
    
    UFUNCTION(BlueprintPure)
    EPalPlayerInventoryType GetInventoryTypeFromStaticItemID(const FName& StaticItemId) const;
    
    UFUNCTION(BlueprintPure)
    EPalPlayerInventoryType GetInventoryTypeFromItemTypeA(const EPalItemTypeA ItemTypeA) const;
    
    UFUNCTION(BlueprintPure)
    int32 CountItemNum(const FName& StaticItemId) const;
    
    UFUNCTION(BlueprintPure)
    bool CanEquip(EPalPlayerEquipItemSlotType EquipmentSlotType, const FName& StaticItemId) const;
    
    UFUNCTION(BlueprintPure)
    bool CanCheckPalTalentsByInventoryItem();
    
    UFUNCTION(BlueprintCallable)
    EPalItemOperationResult AddItem_ServerInternal(const FName StaticItemId, const int32 Count, bool IsAssignPassive, const float LogDelay);
    
    UFUNCTION()
    void AddFullInventoryLog_Client();
    
};

