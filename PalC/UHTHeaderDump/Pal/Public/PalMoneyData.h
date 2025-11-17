#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalMoneyData.generated.h"

class UPalItemContainer;
class UPalPlayerInventoryData;

UCLASS(BlueprintType)
class PAL_API UPalMoneyData : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdatedMoneyDelegate, int64, NowMoney);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAddMoneyDelegate, int64, OldMoney, int64, AddMoney);
    
    UPROPERTY(BlueprintAssignable)
    FUpdatedMoneyDelegate OnUpdatedMoneyDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FAddMoneyDelegate OnAddMoneyDelegate;
    
private:
    UPROPERTY()
    UPalPlayerInventoryData* parentInventoryData;
    
public:
    UPalMoneyData();

private:
    UFUNCTION()
    void OnUpdateInventorylContainer(UPalItemContainer* Container);
    
public:
    UFUNCTION(BlueprintPure)
    int64 GetNowMoney() const;
    
};

