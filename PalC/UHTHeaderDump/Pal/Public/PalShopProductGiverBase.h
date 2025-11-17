#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalShopProductCreateData.h"
#include "PalShopProductGiverBase.generated.h"

class UPalShopProductBase;

UCLASS()
class PAL_API UPalShopProductGiverBase : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdateNowStockNumDelegate, int32, NowStock);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdateMaxStockNumDelegate, int32, MaxStockNum);
    
    UPROPERTY(BlueprintAssignable)
    FUpdateNowStockNumDelegate OnUpdateNowStockNumDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FUpdateMaxStockNumDelegate OnUpdateMaxStockNumDelegate;
    
private:
    UPROPERTY()
    FPalShopProductCreateData ProductCreateData;
    
    UPROPERTY()
    TWeakObjectPtr<UPalShopProductBase> ParentProduct;
    
    UPROPERTY(Replicated)
    bool bIsInfinityStockFlag;
    
    UPROPERTY(ReplicatedUsing=OnRep_StockNum)
    int32 StockNum;
    
    UPROPERTY(ReplicatedUsing=OnRep_MaxStockNum)
    int32 MaxStockNum;
    
public:
    UPalShopProductGiverBase();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION()
    void OnRep_StockNum();
    
    UFUNCTION()
    void OnRep_MaxStockNum();
    
};

