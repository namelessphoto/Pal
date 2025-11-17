#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalContainerId.h"
#include "PalInstanceID.h"
#include "PalItemId.h"
#include "PalItemPermission.h"
#include "PalItemSlotId.h"
#include "PalItemSlot.generated.h"

class UPalDynamicItemDataBase;
class UPalItemSlot;
class UPalStaticItemDataBase;

UCLASS(BlueprintType)
class UPalItemSlot : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FUpdateSlotContentDurabilityDelegate, float, OldDurability, float, NewDurability);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdateSlotContentDelegate, UPalItemSlot*, Slot);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLiftedSlotContentDelegate, const int32, LiftItemNum);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFinishLiftedContentDelegate);
    
    UPROPERTY(BlueprintAssignable)
    FUpdateSlotContentDelegate OnUpdateSlotContentDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FLiftedSlotContentDelegate OnLiftedSlotContentDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FFinishLiftedContentDelegate OnFinishLiftedContentDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FUpdateSlotContentDurabilityDelegate OnUpdateSlotContentDurabilityDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FUpdateSlotContentDelegate OnUpdateSlotCorruptionDelegate;
    
    UPROPERTY()
    TMap<int32, bool> DirtyMap;
    
    UPROPERTY()
    TMap<int32, bool> WeaponReplicatedMap;
    
protected:
    UPROPERTY(BlueprintReadOnly, Replicated, VisibleInstanceOnly)
    int32 SlotIndex;
    
    UPROPERTY(BlueprintReadOnly, Replicated, VisibleInstanceOnly)
    FPalContainerId ContainerId;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly, ReplicatedUsing=OnRep_ItemId)
    FPalItemId ItemId;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly, ReplicatedUsing=OnRep_StackCount)
    int32 StackCount;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly, ReplicatedUsing=OnRep_CorruptionProgressValue)
    float CorruptionProgressValue;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly, ReplicatedUsing=OnRep_Permission)
    FPalItemPermission Permission;
    
private:
    UPROPERTY(Transient, VisibleInstanceOnly, ReplicatedUsing=OnRep_DynamicItemData)
    TWeakObjectPtr<UPalDynamicItemDataBase> DynamicItemData;
    
    UPROPERTY(Transient)
    FPalItemId LastItemId_Client;
    
public:
    UPalItemSlot();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintPure)
    bool TryGetStaticItemData(UPalStaticItemDataBase*& OutStaticItemData) const;
    
    UFUNCTION(BlueprintPure)
    bool TryGetDynamicItemData(UPalDynamicItemDataBase*& OutDynamicItemData);
    
    UFUNCTION(BlueprintCallable)
    void RequestUseToCharacter(const FPalInstanceID& TargetCharacterID, int32 UseNum);
    
    UFUNCTION()
    void OnUpdateSlotContentDurability(float OldDurability, float NewDurability);
    
protected:
    UFUNCTION()
    void OnRep_StackCount();
    
    UFUNCTION()
    void OnRep_Permission();
    
    UFUNCTION()
    void OnRep_ItemId();
    
    UFUNCTION()
    void OnRep_DynamicItemData();
    
    UFUNCTION()
    void OnRep_CorruptionProgressValue();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsMaxStack() const;
    
    UFUNCTION(BlueprintPure)
    bool IsEmpty() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetStackCount() const;
    
    UFUNCTION(BlueprintPure)
    FPalItemSlotId GetSlotId() const;
    
    UFUNCTION(BlueprintPure)
    FPalItemPermission GetPermission() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetMaxStack() const;
    
    UFUNCTION(BlueprintPure)
    FPalItemId GetItemId() const;
    
    UFUNCTION(BlueprintPure)
    FText GetCorruptionRemainTimeText() const;
    
    UFUNCTION(BlueprintPure)
    float GetCorruptionProgressRate() const;
    
    UFUNCTION(BlueprintPure)
    bool CanUseItemToCharacter(const FPalInstanceID& TargetCharacterID);
    
};

