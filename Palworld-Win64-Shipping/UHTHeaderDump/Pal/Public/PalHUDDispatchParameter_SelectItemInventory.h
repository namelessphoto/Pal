#pragma once
#include "CoreMinimal.h"
#include "EPalItemTypeA.h"
#include "EPalItemTypeB.h"
#include "EPalPlayerInventoryType.h"
#include "PalHUDDispatchParameterBase.h"
#include "PalItemSlotId.h"
#include "PalSelectedItemPlayerInventoryDelegateDelegate.h"
#include "PalHUDDispatchParameter_SelectItemInventory.generated.h"

UCLASS(BlueprintType)
class UPalHUDDispatchParameter_SelectItemInventory : public UPalHUDDispatchParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Transient)
    FText TitleText;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    TArray<EPalPlayerInventoryType> showInventoryTypes;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    TArray<EPalItemTypeA> showItemTypesA;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    TArray<EPalItemTypeB> showItemTypesB;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool shouldSelectNum;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    FPalSelectedItemPlayerInventoryDelegate Callback;
    
    UPalHUDDispatchParameter_SelectItemInventory();

    UFUNCTION(BlueprintCallable)
    void InvokeCallback(const FPalItemSlotId& itemSlotId, const int32 itemNum);
    
};

