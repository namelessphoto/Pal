#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EPalItemSlotPressType.h"
#include "PalCharacterSlotId.h"
#include "PalItemAndNum.h"
#include "PalItemSlotId.h"
#include "PalUILiftSlotModel.generated.h"

class UPalIndividualCharacterHandle;
class UPalIndividualCharacterSlot;
class UPalItemSlot;
class UPalUILiftSlotModelBehaviourBase;
class UTexture2D;

UCLASS(BlueprintType)
class UPalUILiftSlotModel : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUpdateIconDelegate, TSoftObjectPtr<UTexture2D>, IconTexture);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUpdateHandleSlotDelegate, UPalIndividualCharacterSlot*, TargetHandleSlot);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnUpdateDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUpdateCountDelegate, int32, Count);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnFailedItemOperationDelegate);
    
    UPROPERTY(BlueprintAssignable)
    FOnUpdateDelegate OnUpdateDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnUpdateHandleSlotDelegate OnUpdateHandleSlotDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnUpdateIconDelegate OnUpdateIconDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnUpdateCountDelegate OnUpdateCountDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnFailedItemOperationDelegate OnFailedItemOperationDelegate;
    
protected:
    UPROPERTY(BlueprintReadOnly, Transient, VisibleInstanceOnly)
    FPalItemSlotId SourceItemSlotId;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FPalItemAndNum SourceLiftItemInfo;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UPalIndividualCharacterSlot* CharacterSlot;
    
private:
    UPROPERTY(Transient, VisibleInstanceOnly)
    UPalUILiftSlotModelBehaviourBase* Behaviour;
    
public:
    UPalUILiftSlotModel();

    UFUNCTION(BlueprintCallable)
    void SelectItemSlot(const FPalItemSlotId SlotId, const EPalItemSlotPressType Type);
    
    UFUNCTION(BlueprintCallable)
    void SelectCharacterSlot(const FPalCharacterSlotId SlotId, const EPalItemSlotPressType Type);
    
    UFUNCTION(BlueprintCallable)
    void ResetLiftItem();
    
private:
    UFUNCTION()
    void OnUpdateLiftItemSourceSlot(UPalItemSlot* Slot);
    
    UFUNCTION()
    void OnUpdateLiftHandleSlot(UPalIndividualCharacterSlot* Slot, UPalIndividualCharacterHandle* LastHandle);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsLift() const;
    
};

