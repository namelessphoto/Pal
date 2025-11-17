#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "EPalShopLotteryBiomeType.h"
#include "EPalShopLotteryType.h"
#include "PalDataTableRowName_ItemShopLotteryData.h"
#include "PalDataTableRowName_PalShopCreateData.h"
#include "PalVenderDataComponent.generated.h"

class UPalShopBase;

UCLASS(Abstract, BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalVenderDataComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FRegisteredPalShopDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FRegisteredItemShopDelegate);
    
    UPROPERTY(BlueprintAssignable)
    FRegisteredItemShopDelegate OnRegisteredItemShopDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FRegisteredPalShopDelegate OnRegisteredPalShopDelegate;
    
private:
    UPROPERTY()
    FGuid MyShopID;
    
    UPROPERTY(EditDefaultsOnly)
    int32 ItemShopRestockMinute;
    
    UPROPERTY(EditDefaultsOnly)
    EPalShopLotteryType itemShopLotteryType;
    
    UPROPERTY(EditDefaultsOnly)
    FPalDataTableRowName_ItemShopLotteryData itemShopSimpleLotteryTableName;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<EPalShopLotteryBiomeType, FPalDataTableRowName_ItemShopLotteryData> itemShopBiomeLotteryTableMap;
    
    UPROPERTY(EditDefaultsOnly)
    int32 PalShopRestockMinute;
    
    UPROPERTY(EditDefaultsOnly)
    EPalShopLotteryType palShopLotteryType;
    
    UPROPERTY(EditDefaultsOnly)
    FPalDataTableRowName_PalShopCreateData palShopSimpleLotteryTableName;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<EPalShopLotteryBiomeType, FPalDataTableRowName_PalShopCreateData> palShopBiomeLotteryTableMap;
    
    UPROPERTY(ReplicatedUsing=OnRep_MyItemShop)
    UPalShopBase* MyItemShop;
    
    UPROPERTY(ReplicatedUsing=OnRep_MyPalShop)
    UPalShopBase* MyPalShop;
    
public:
    UPalVenderDataComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintPure)
    bool TryGetPalShop(UPalShopBase*& OutShop) const;
    
    UFUNCTION(BlueprintPure)
    bool TryGetItemShop(UPalShopBase*& OutShop) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetupShopData();
    
private:
    UFUNCTION()
    void OnRep_MyPalShop();
    
    UFUNCTION()
    void OnRep_MyItemShop();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsValidPalShop() const;
    
    UFUNCTION(BlueprintPure)
    bool IsValidItemShop() const;
    
};

