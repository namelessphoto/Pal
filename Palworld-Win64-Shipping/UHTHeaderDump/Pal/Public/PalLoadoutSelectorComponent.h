#pragma once
#include "CoreMinimal.h"
#include "EPalPlayerInventoryType.h"
#include "PalItemSelectorComponent.h"
#include "PalLoadoutSummonData.h"
#include "PalLoadoutSynchronalizedData.h"
#include "Templates/SubclassOf.h"
#include "PalLoadoutSelectorComponent.generated.h"

class APalWeaponBase;
class UPalDynamicWeaponItemDataBase;
class UPalItemSlot;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalLoadoutSelectorComponent : public UPalItemSelectorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRemoveItem, EPalPlayerInventoryType, inventoryType, int32, Index);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEquipmentItem, EPalPlayerInventoryType, inventoryType, int32, Index);
    
protected:
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<APalWeaponBase> ThrowOtomoPalWeaponClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<APalWeaponBase> DummyBallWeaponClass;
    
public:
    UPROPERTY(BlueprintAssignable)
    FEquipmentItem OnEquipmentItemDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FRemoveItem OnRemoveItemDelegate;
    
private:
    UPROPERTY(Transient)
    EPalPlayerInventoryType primaryTargetInventoryType;
    
    UPROPERTY(Transient)
    int32 currentItemSlotIndex;
    
    UPROPERTY(Replicated, Transient)
    FName NowEquipBallItemID;
    
    UPROPERTY(Transient)
    APalWeaponBase* ThrowOtomoPalWeapon;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    TArray<APalWeaponBase*> spawnedWeaponsArray;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    TMap<FName, APalWeaponBase*> spawnedBallMap;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    APalWeaponBase* DummyBall;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_PrimaryTargetInventoryType)
    EPalPlayerInventoryType replicatedPrimaryTargetInventoryType;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_CurrentItemSlotIndex)
    int32 replicatedCurrentItemSlotIndex;
    
    UPROPERTY(Replicated, Transient)
    TArray<FPalLoadoutSummonData> replicatedSummonData;
    
    UPROPERTY(Transient)
    TArray<FPalLoadoutSummonData> localonlySummonData;
    
public:
    UPalLoadoutSelectorComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void TryEquipNowSelectedWeapon_ToAll();
    
    UFUNCTION(BlueprintCallable)
    bool TryEquipNowSelectedWeapon();
    
private:
    UFUNCTION()
    void SetWeaponLoadoutIndex_Internal(int32 Index);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetWeaponLoadoutIndex(int32 Index);
    
private:
    UFUNCTION()
    void SetupItemContainer();
    
    UFUNCTION()
    void SetBallLoadoutIndex_Internal(int32 Index);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetBallLoadoutIndex(int32 Index);
    
    UFUNCTION(Reliable, Server)
    void ReserveSummonWeapon_ToServer(UPalDynamicWeaponItemDataBase* InDynamicItem);
    
    UFUNCTION(BlueprintCallable)
    void ReserveSummonWeapon(APalWeaponBase* InWeapon);
    
private:
    UFUNCTION(Reliable, Server)
    void RequestChangeNowEquipBallItemID_ToServer(FName NextBallID);
    
public:
    UFUNCTION(Reliable, Server)
    void ReleaseSummonWeapon_ToServer(UPalDynamicWeaponItemDataBase* InDynamicItem);
    
    UFUNCTION(BlueprintCallable)
    void ReleaseSummonWeapon(APalWeaponBase* InWeapon);
    
    UFUNCTION()
    void OnUpdateWeaponLoadoutSlot(UPalItemSlot* itemSlot);
    
    UFUNCTION()
    void OnUpdateInventorySlot(UPalItemSlot* itemSlot);
    
private:
    UFUNCTION()
    void OnRep_PrimaryTargetInventoryType();
    
    UFUNCTION()
    void OnRep_CurrentItemSlotIndex();
    
    UFUNCTION()
    void OnRemoveEquipItem(EPalPlayerInventoryType inventoryType, int32 Index);
    
    UFUNCTION()
    void OnEquipItem(EPalPlayerInventoryType inventoryType, int32 Index);
    
public:
    UFUNCTION(BlueprintPure)
    TArray<APalWeaponBase*> GetWeaponList() const;
    
    UFUNCTION(BlueprintCallable)
    EPalPlayerInventoryType GetPrimaryInventoryType();
    
    UFUNCTION(BlueprintPure)
    TMap<FName, APalWeaponBase*> GetPalSphereActorMap();
    
    UFUNCTION(BlueprintPure)
    void GetNowEquipedBallItemID(FName& OutBallItemID) const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetNeedSpawnSummonWeaponCount(APalWeaponBase* InWeapon);
    
    UFUNCTION(BlueprintPure)
    int32 GetMaxSummonCount() const;
    
    UFUNCTION(Reliable, Server)
    void ClearSummonWeapon_ToServer(UPalDynamicWeaponItemDataBase* InDynamicItem);
    
    UFUNCTION(BlueprintCallable)
    void ClearSummonWeapon(APalWeaponBase* InWeapon);
    
private:
    UFUNCTION()
    void CheckRespawnWeaponActor(TArray<FPalLoadoutSynchronalizedData> synchroData, TArray<APalWeaponBase*> WeaponActorList, EPalPlayerInventoryType inventoryType);
    
    UFUNCTION()
    void ChangeWeaponByReplicated();
    
public:
    UFUNCTION(BlueprintCallable)
    void ChangePrimiryInventoryType(EPalPlayerInventoryType targetInventory);
    
private:
    UFUNCTION()
    void ChangePrevWeaponLoadout_Internal();
    
public:
    UFUNCTION(BlueprintCallable)
    void ChangePrevWeaponLoadout();
    
private:
    UFUNCTION()
    void ChangePrevBallLoadout_Internal();
    
public:
    UFUNCTION(BlueprintCallable)
    void ChangePrevBallLoadout();
    
private:
    UFUNCTION()
    void ChangeNextWeaponLoadout_Internal();
    
public:
    UFUNCTION(BlueprintCallable)
    void ChangeNextWeaponLoadout();
    
private:
    UFUNCTION()
    void ChangeNextBallLoadout_Internal();
    
public:
    UFUNCTION(BlueprintCallable)
    void ChangeNextBallLoadout();
    
    UFUNCTION(BlueprintPure)
    bool CanReserveSummonWeapon() const;
    
private:
    UFUNCTION(Reliable, Server)
    void AttachSpawnOtomoPalThrowWeapon_ToServer(int32 issuerID, bool IsAttach, bool ShouldEquipDummyWeapon);
    
    UFUNCTION(NetMulticast, Reliable)
    void AttachSpawnOtomoPalThrowWeapon_ToAll(int32 issuerID, bool IsAttach, bool ShouldEquipDummyWeapon);
    
};

