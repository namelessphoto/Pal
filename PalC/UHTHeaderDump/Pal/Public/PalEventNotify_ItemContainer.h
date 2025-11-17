#pragma once
#include "CoreMinimal.h"
#include "PalEventNotifyBase.h"
#include "PalEventNotifyItemMoveDelegateDelegate.h"
#include "PalItemOperationInfo_Move.h"
#include "PalEventNotify_ItemContainer.generated.h"

class UObject;
class UPalEventNotify_ItemContainer;

UCLASS(BlueprintType)
class PAL_API UPalEventNotify_ItemContainer : public UPalEventNotifyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FPalEventNotifyItemMoveDelegate OnNotifyEventMoveInServer;
    
    UPalEventNotify_ItemContainer();

private:
    UFUNCTION()
    void OnItemOperationMove_ServerInternal(const TArray<FPalItemOperationInfo_Move>& OperationInfoSet);
    
public:
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPalEventNotify_ItemContainer* GetEventNotify_Item(const UObject* WorldContextObject);
    
};

