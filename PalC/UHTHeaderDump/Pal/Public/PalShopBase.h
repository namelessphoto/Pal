#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TimerHandle -FallbackName=TimerHandle
#include "PalItemShopSettingDataRow.h"
#include "PalShopBase.generated.h"

class UPalShopProductBase;

UCLASS(BlueprintType)
class PAL_API UPalShopBase : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FUpdateAnyProductDelegate);
    
    UPROPERTY(BlueprintAssignable)
    FUpdateAnyProductDelegate OnUpdateAnyProduct;
    
private:
    UPROPERTY(Replicated)
    FGuid MyShopID;
    
    UPROPERTY(ReplicatedUsing=OnRep_MyShopName)
    FName MyShopName;
    
    UPROPERTY(ReplicatedUsing=OnRep_ProductArray)
    TArray<UPalShopProductBase*> ProductArray;
    
    UPROPERTY(Transient)
    TMap<FGuid, UPalShopProductBase*> ProductMap_ForServer;
    
    UPROPERTY(Transient)
    FTimerHandle RestockTimerHandle_ForServer;
    
public:
    UPalShopBase();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION()
    void OnUpdateAnyProductStock(int32 NowStock);
    
    UFUNCTION()
    void OnUpdateAnyProductMaxStock(int32 MaxStock);
    
    UFUNCTION()
    void OnTimerTrigger_Restock();
    
private:
    UFUNCTION()
    void OnRep_ProductArray();
    
    UFUNCTION()
    void OnRep_MyShopName();
    
public:
    UFUNCTION(BlueprintPure)
    bool GetShopSettingData(FPalItemShopSettingDataRow& OutSettingData);
    
    UFUNCTION(BlueprintPure)
    FName GetShopName() const;
    
    UFUNCTION(BlueprintPure)
    void GetId(FGuid& OutID) const;
    
    UFUNCTION(BlueprintPure)
    void GetAllProduct(TArray<UPalShopProductBase*>& OutProductArray) const;
    
};

