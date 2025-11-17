#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EPalUIPalCharacterRankUpRequestResult.h"
#include "EPalUIPalCharacterRankUpSelectMode.h"
#include "EPalUIPalCharacterRankUpSelectResourceType.h"
#include "PalContainerId.h"
#include "PalInstanceID.h"
#include "Templates/SubclassOf.h"
#include "PalUIPalCharacterRankUpModel.generated.h"

class UPalHUDDispatchParameter_CharacterRankUp;
class UPalIndividualCharacterHandle;
class UPalIndividualCharacterParameter;
class UPalIndividualCharacterReferenceSlot;
class UPalIndividualCharacterSlot;
class UPalUIPalCharacterRankUpModel;
class UPalUIPalStorageModel;

UCLASS(BlueprintType)
class UPalUIPalCharacterRankUpModel : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FModelDelegate, UPalUIPalCharacterRankUpModel*, Model);
    
    UPROPERTY(BlueprintAssignable)
    FModelDelegate OnUpdateTargetSlotDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FModelDelegate OnUpdateResourceSlotDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FModelDelegate OnUpdateSelectModeDelegate;
    
protected:
    UPROPERTY(Transient, VisibleInstanceOnly)
    FPalContainerId LocalContainerId;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UPalUIPalStorageModel> PalStorageModelClass;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleInstanceOnly)
    UPalUIPalStorageModel* PalStorageModel;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleInstanceOnly)
    EPalUIPalCharacterRankUpSelectMode SelectMode;
    
public:
    UPalUIPalCharacterRankUpModel();

    UFUNCTION(BlueprintCallable)
    bool ToggleResourceCharacter(UPalIndividualCharacterHandle* Handle);
    
    UFUNCTION(BlueprintCallable)
    void Setup(UPalHUDDispatchParameter_CharacterRankUp* Parameter);
    
    UFUNCTION(BlueprintCallable)
    void SelectTargetCharacter(UPalIndividualCharacterHandle* Handle);
    
    UFUNCTION(BlueprintCallable)
    void SelectResourcesAuto(const EPalUIPalCharacterRankUpSelectResourceType SelectType);
    
    UFUNCTION(BlueprintCallable)
    bool SelectResourceCharacterTo(UPalIndividualCharacterHandle* Handle, const int32 ToResourceSlotIndex);
    
private:
    UFUNCTION()
    void OnUpdateTargetSlot(UPalIndividualCharacterReferenceSlot* Slot, FPalInstanceID LastIndividualId);
    
    UFUNCTION()
    void OnUpdateTargetCharacterRank(const int32 NowRank, const int32 OldRank);
    
    UFUNCTION()
    void OnUpdateResourceSlot(UPalIndividualCharacterReferenceSlot* Slot, FPalInstanceID LastIndividualId);
    
protected:
    UFUNCTION(BlueprintPure)
    bool IsSelectableSlotInternal(const UPalIndividualCharacterSlot* Slot) const;
    
public:
    UFUNCTION(BlueprintPure)
    bool IsOverflowResourcesForTarget() const;
    
    UFUNCTION(BlueprintPure)
    bool IsFilledResourcesForTarget() const;
    
    UFUNCTION(BlueprintCallable)
    void InvokeRankUp();
    
    UFUNCTION(BlueprintPure)
    UPalIndividualCharacterReferenceSlot* GetTargetSlot() const;
    
    UFUNCTION(BlueprintPure)
    UPalIndividualCharacterReferenceSlot* GetSlot(const int32 SlotIndex) const;
    
    UFUNCTION(BlueprintPure)
    void GetResourceSlots(TArray<UPalIndividualCharacterSlot*>& Slots) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetCurrentResourceCount() const;
    
    UFUNCTION(BlueprintCallable)
    void Dispose();
    
    UFUNCTION(BlueprintCallable)
    UPalIndividualCharacterParameter* CreatePredicateTargetCharacterParameter();
    
    UFUNCTION(BlueprintCallable)
    void ClearSelected();
    
    UFUNCTION(BlueprintCallable)
    void ClearResourceCharacters();
    
    UFUNCTION(BlueprintPure)
    EPalUIPalCharacterRankUpRequestResult CanInvokeRankUp() const;
    
    UFUNCTION(BlueprintPure)
    void CalcRankByCurrentSelectForUI(int32& OutToRank, int32& OutToRankUpExp, int32& OutTotalRankUpExp) const;
    
};

