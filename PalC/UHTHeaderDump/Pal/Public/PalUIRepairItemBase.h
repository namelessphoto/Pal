#pragma once
#include "CoreMinimal.h"
#include "PalStaticItemIdAndNum.h"
#include "PalUserWidgetOverlayUI.h"
#include "PalUIRepairItemBase.generated.h"

class UPalItemSlot;
class UPalMapObjectRepairItemModel;

UCLASS(EditInlineNew)
class PAL_API UPalUIRepairItemBase : public UPalUserWidgetOverlayUI {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    UPalMapObjectRepairItemModel* RepairItemModel;
    
public:
    UPalUIRepairItemBase();

protected:
    UFUNCTION(BlueprintCallable)
    void SetMaxDurabilityForce(const TArray<UPalItemSlot*>& TargetItemSlotArray);
    
    UFUNCTION(BlueprintCallable)
    void RequestRepair(const TArray<UPalItemSlot*>& TargetItemSlotArray);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnRecievedRepairResult(bool IsSuccess);
    
    UFUNCTION(BlueprintPure)
    void CollectRepairInfo(const TArray<UPalItemSlot*>& TargetItemSlotArray, TArray<FPalStaticItemIdAndNum>& OutRequiredMaterials, bool& OutCanRepair);
    
    UFUNCTION(BlueprintPure)
    void CollectRepairableSlot(TArray<UPalItemSlot*>& OutRepairableSlots);
    
};

