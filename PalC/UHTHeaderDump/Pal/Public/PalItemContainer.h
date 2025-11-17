#pragma once
#include "CoreMinimal.h"
#include "FloatContainer.h"
#include "PalContainerBase.h"
#include "PalItemContainerBelongInfo.h"
#include "PalItemContainerFilter.h"
#include "PalItemPermission.h"
#include "PalItemContainer.generated.h"

class UPalItemContainer;
class UPalItemSlot;

UCLASS()
class PAL_API UPalItemContainer : public UPalContainerBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdateContentsDelegate, UPalItemContainer*, Container);
    
    UPROPERTY(BlueprintAssignable)
    FUpdateContentsDelegate OnUpdateContentsDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FUpdateContentsDelegate OnUpdateFilterPreferenceDelegate;
    
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleInstanceOnly, ReplicatedUsing=OnRep_ItemSlotArray)
    TArray<UPalItemSlot*> ItemSlotArray;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly, ReplicatedUsing=OnRep_Permission)
    FPalItemPermission Permission;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    float CorruptionMultiplier;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FFloatContainer CorruptionMultiplierContainer;
    
    UPROPERTY(Transient, VisibleInstanceOnly, ReplicatedUsing=OnRep_FilterPreference)
    FPalItemContainerFilter FilterPreference;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FPalItemContainerBelongInfo BelongInfo;
    
public:
    UPalItemContainer();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION()
    void OnUpdateSlotContent(UPalItemSlot* Slot);
    
public:
    UFUNCTION()
    void OnRep_Permission();
    
    UFUNCTION()
    void OnRep_ItemSlotArray();
    
    UFUNCTION()
    void OnRep_FilterPreference();
    
    UFUNCTION(BlueprintPure)
    int32 Num() const;
    
    UFUNCTION(BlueprintPure)
    FPalItemPermission GetPermission() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetItemStackCount(const FName StaticItemId) const;
    
    UFUNCTION(BlueprintPure)
    FPalItemContainerFilter GetFilterPreference() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FName> GetFilterOffList() const;
    
    UFUNCTION(BlueprintPure)
    UPalItemSlot* Get(const int32 Index) const;
    
protected:
    UFUNCTION()
    void ForceMarkSlotDirty_ServerInternal();
    
};

