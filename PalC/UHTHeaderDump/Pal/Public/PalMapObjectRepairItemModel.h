#pragma once
#include "CoreMinimal.h"
#include "PalItemId.h"
#include "PalItemSlotId.h"
#include "PalMapObjectConcreteModelBase.h"
#include "PalNetArchive.h"
#include "PalStaticItemIdAndNum.h"
#include "Templates/SubclassOf.h"
#include "PalMapObjectRepairItemModel.generated.h"

class UPalUserWidgetOverlayUI;

UCLASS()
class UPalMapObjectRepairItemModel : public UPalMapObjectConcreteModelBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnNotifyRepairResult, bool, IsSuccess);
    
private:
    UPROPERTY(Transient, VisibleInstanceOnly)
    float RequiredRepairItemRate;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UPalUserWidgetOverlayUI> WidgetClass;
    
public:
    UPalMapObjectRepairItemModel();

    UFUNCTION(BlueprintCallable)
    void RequestRepairItem(const TArray<FPalItemSlotId>& TargetItemSlotIdArray);
    
private:
    UFUNCTION()
    void RepairItem_ServerInternal(const int32 RequestPlayerId, const FPalNetArchive& Archive);
    
protected:
    UFUNCTION()
    void NotifyRepairResult(bool IsSuccess);
    
public:
    UFUNCTION(BlueprintPure)
    void GetRequiredMaterials(const TArray<FPalItemId>& TargetRepairItemIdArray, TArray<FPalStaticItemIdAndNum>& OutRequiredMaterials) const;
    
};

