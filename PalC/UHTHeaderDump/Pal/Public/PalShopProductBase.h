#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalShopProductBase.generated.h"

class UPalShopProductCostTakerBase;
class UPalShopProductGiverBase;

UCLASS(BlueprintType)
class PAL_API UPalShopProductBase : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdateNowStockNumDelegate, int32, NowStock);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdateMaxStockNumDelegate, int32, MaxStockNum);
    
    UPROPERTY(BlueprintAssignable)
    FUpdateNowStockNumDelegate OnUpdateNowStockNumDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FUpdateMaxStockNumDelegate OnUpdateMaxStockNumDelegate;
    
private:
    UPROPERTY(Replicated)
    FGuid MyProductID;
    
    UPROPERTY(Replicated)
    bool IsValidProductFlag;
    
    UPROPERTY(ReplicatedUsing=OnRep_MyProductCostTaker)
    UPalShopProductCostTakerBase* MyProductCostTaker;
    
    UPROPERTY(ReplicatedUsing=OnRep_MyProductGiver)
    UPalShopProductGiverBase* MyProductGiver;
    
public:
    UPalShopProductBase();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION()
    void OnUpdateProductStock(int32 NowStock);
    
    UFUNCTION()
    void OnUpdateProductMaxStock(int32 MaxStock);
    
private:
    UFUNCTION()
    void OnRep_MyProductGiver();
    
    UFUNCTION()
    void OnRep_MyProductCostTaker();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsValidProduct();
    
    UFUNCTION(BlueprintPure)
    bool IsSoldout() const;
    
    UFUNCTION(BlueprintPure)
    bool IsInfinityStock() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetRemainStockNum() const;
    
    UFUNCTION(BlueprintPure)
    void GetProductNameText(FText& OutText) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetMaxStockNum() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetMaxBuyNum_LocalPlayer() const;
    
    UFUNCTION(BlueprintPure)
    void GetId(FGuid& OutID);
    
    UFUNCTION(BlueprintPure)
    bool CanBuy_LocalPlayer() const;
    
};

