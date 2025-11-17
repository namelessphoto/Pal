#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EPalTribeID.h"
#include "PalCharacterSlotId.h"
#include "PalContainerId.h"
#include "PalInstanceID.h"
#include "PalIndividualCharacterSlot.generated.h"

class UPalIndividualCharacterHandle;
class UPalIndividualCharacterParameter;
class UPalIndividualCharacterSlot;

UCLASS(BlueprintType)
class UPalIndividualCharacterSlot : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdateSlotLockDelegate, UPalIndividualCharacterSlot*, Slot);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FUpdateSlotHandleDelegate, UPalIndividualCharacterSlot*, Slot, UPalIndividualCharacterHandle*, LastHandle);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReplicatedParameterDelegate, UPalIndividualCharacterParameter*, Parameter);
    
    UPROPERTY(BlueprintAssignable)
    FUpdateSlotHandleDelegate OnUpdateSlotHandleDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FUpdateSlotLockDelegate OnUpdateSlotLockDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FReplicatedParameterDelegate OnReplicatedParameterDelegate;
    
protected:
    UPROPERTY(Transient, VisibleInstanceOnly)
    UPalIndividualCharacterHandle* Handle;
    
    UPROPERTY(Transient, VisibleInstanceOnly, ReplicatedUsing=OnRep_HandleID)
    FPalInstanceID ReplicateHandleID;
    
    UPROPERTY(Transient, VisibleInstanceOnly, ReplicatedUsing=OnRep_Parameter)
    UPalIndividualCharacterParameter* ReplicateIndividualParameter;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    FPalContainerId ContainerId;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    int32 SlotIndex;
    
    UPROPERTY(Transient, VisibleInstanceOnly, ReplicatedUsing=OnRep_LockPlayerUId)
    FGuid LockPlayerUId;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient, VisibleInstanceOnly)
    EPalTribeID PermissionTribeID;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    bool bIsReplicateCharacterParameter;
    
public:
    UPalIndividualCharacterSlot();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void Setup(const int32 InSlotIndex, const FPalContainerId& InContainerId);
    
private:
    UFUNCTION()
    void OnRep_Parameter();
    
    UFUNCTION()
    void OnRep_LockPlayerUId();
    
    UFUNCTION()
    void OnRep_HandleID();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsLocked() const;
    
    UFUNCTION(BlueprintPure)
    bool IsEmpty() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetSlotIndex() const;
    
    UFUNCTION(BlueprintPure)
    FPalCharacterSlotId GetSlotId() const;
    
    UFUNCTION(BlueprintPure)
    FGuid GetLockPlayerUId() const;
    
    UFUNCTION(BlueprintPure)
    UPalIndividualCharacterHandle* GetLastHandleForClient() const;
    
    UFUNCTION(BlueprintPure)
    UPalIndividualCharacterHandle* GetHandle() const;
    
};

