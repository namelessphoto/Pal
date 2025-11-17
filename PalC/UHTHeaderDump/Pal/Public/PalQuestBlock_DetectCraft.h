#pragma once
#include "CoreMinimal.h"
#include "PalDataTableRowName_ItemData.h"
#include "PalItemAndNum.h"
#include "PalQuestBlock.h"
#include "PalQuestBlock_DetectCraft.generated.h"

UCLASS()
class PAL_API UPalQuestBlock_DetectCraft : public UPalQuestBlock {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 RequireCount;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FPalDataTableRowName_ItemData DetectItemName;
    
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=NotifyUpdateQuest_Client)
    int32 NowCraftNumCount;
    
public:
    UPalQuestBlock_DetectCraft();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION()
    void OnCraftItem(TArray<FPalItemAndNum>& ItemInfos);
    
};

