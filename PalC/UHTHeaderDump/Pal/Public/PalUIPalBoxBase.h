#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "EPalItemSlotPressType.h"
#include "PalCharacterContainerSortInfo.h"
#include "PalUserWidgetOverlayUI.h"
#include "PalUIPalBoxBase.generated.h"

class UPalIndividualCharacterContainer;
class UPalIndividualCharacterSlot;

UCLASS(EditInlineNew)
class PAL_API UPalUIPalBoxBase : public UPalUserWidgetOverlayUI {
    GENERATED_BODY()
public:
    UPalUIPalBoxBase();

    UFUNCTION(BlueprintCallable)
    void TryMoveToOtomo(UPalIndividualCharacterSlot* MoveSlot);
    
    UFUNCTION(BlueprintCallable)
    void TryMoveToBox(UPalIndividualCharacterSlot* MoveSlot);
    
    UFUNCTION(BlueprintCallable)
    void TryMoveToBaseCamp(UPalIndividualCharacterSlot* MoveSlot);
    
    UFUNCTION(BlueprintCallable)
    void TryLoosePal(UPalIndividualCharacterSlot* TargetSlot);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ToggleFavorite(UPalIndividualCharacterSlot* TargetSlot);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetPagePalBoxList(int32 NewPage);
    
    UFUNCTION(BlueprintCallable)
    void SetByMapObjectInstanceId(const FGuid& ByMapObjectInstanceId);
    
    UFUNCTION(BlueprintCallable)
    void SetBaseCampId(const FGuid& BaseCampId);
    
    UFUNCTION(BlueprintCallable)
    void SelectCharacterSlot(UPalIndividualCharacterSlot* TargetSlot, const EPalItemSlotPressType PressType);
    
protected:
    UFUNCTION(BlueprintCallable)
    void RequestSortBox(const FPalCharacterContainerSortInfo& SortInfo);
    
private:
    UFUNCTION()
    void OnUpdateWorkerCapacity(UPalIndividualCharacterContainer* Container);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnUpdatePageWorkerList(const TArray<UPalIndividualCharacterSlot*>& SlotList);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnUpdatePagePalBoxList(int32 NowPage, const TArray<UPalIndividualCharacterSlot*>& SlotList);
    
public:
    UFUNCTION(BlueprintPure)
    bool GetNowDisplayWorkerList(TArray<UPalIndividualCharacterSlot*>& OutSlots);
    
    UFUNCTION(BlueprintPure)
    int32 GetBoxMaxPageNum();
    
    UFUNCTION(BlueprintCallable)
    void ChangePrevPagePalBoxList();
    
    UFUNCTION(BlueprintCallable)
    void ChangeNextPagePalBoxList();
    
    UFUNCTION(BlueprintCallable)
    void CancelLift();
    
};

