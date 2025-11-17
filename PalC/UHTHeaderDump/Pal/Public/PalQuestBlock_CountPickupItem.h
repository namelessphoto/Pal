#pragma once
#include "CoreMinimal.h"
#include "PalDataTableRowName_ItemData.h"
#include "PalItemAndNum.h"
#include "PalQuestBlock.h"
#include "PalQuestBlock_CountPickupItem.generated.h"

UCLASS()
class PAL_API UPalQuestBlock_CountPickupItem : public UPalQuestBlock {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 RequireCount;
    
    UPROPERTY(EditDefaultsOnly)
    FPalDataTableRowName_ItemData DetectItemName;
    
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=NotifyUpdateQuest_Client)
    int32 NowPickupCount;
    
public:
    UPalQuestBlock_CountPickupItem();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION()
    void OnPickupItem(TArray<FPalItemAndNum>& ItemInfos);
    
};

