#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PalDataTableRowName_ItemData.h"
#include "PalFlowNode_NPCTalkBase.h"
#include "PalNetworkNPCTalkRequestData.h"
#include "PalFlowNode_GetItem.generated.h"

class APalCharacter;
class UDataTable;
class UObject;

UCLASS(Abstract)
class PAL_API UPalFlowNode_GetItem : public UPalFlowNode_NPCTalkBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<FPalDataTableRowName_ItemData, int32> GetItemList;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDataTable* LotteryDataTable;
    
public:
    UPalFlowNode_GetItem();

protected:
    UFUNCTION(BlueprintImplementableEvent, meta=(WorldContext="WorldContextObject"))
    void OnGetItemInServer(const UObject* WorldContextObject, const FGuid& PlayerUId, const FPalNetworkNPCTalkRequestData& RequestData);
    
    UFUNCTION(BlueprintImplementableEvent)
    void LotteryItemAndNum(const UDataTable* PresentLotteryDataTable, FName& OutItemName, int32& OutNum);
    
    UFUNCTION(BlueprintNativeEvent)
    bool CanGetItemInServer(APalCharacter* Talker);
    
};

