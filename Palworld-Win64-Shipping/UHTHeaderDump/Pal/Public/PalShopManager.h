#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "EPalItemShopProductType.h"
#include "PalDroppedPalProductDataForShop.h"
#include "PalGameWorldDataSaveInterface.h"
#include "PalWorldSubsystem.h"
#include "Templates/SubclassOf.h"
#include "PalShopManager.generated.h"

class UDataTable;
class UPalShopBase;
class UPalShopProductBase;
class UPalShopProduct_LostPal;

UCLASS()
class PAL_API UPalShopManager : public UPalWorldSubsystem, public IPalGameWorldDataSaveInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FRecievedBuyResultDelegate OnRecievedBuyResultDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FReceivedDroppedPalDataDelegate OnReceivedDroppedPalDataDelegate;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    TMap<EPalItemShopProductType, TSubclassOf<UPalShopProductBase>> ItemShopProductClassMap;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* ItemShopSettingDataTable;
    
private:
    UPROPERTY(Transient)
    TMap<FGuid, UPalShopBase*> CreatedItemShopMap_ForServer;
    
    UPROPERTY(Transient)
    TMap<FGuid, UPalShopBase*> CreatedPalShopMap_ForServer;
    
    UPROPERTY(Transient)
    TArray<FPalDroppedPalProductDataForShop> LocalDroppedPalData;
    
    UPROPERTY(Transient)
    UPalShopProduct_LostPal* LostPalProduct_Tmp;
    
public:
    UPalShopManager();


    // Fix for true pure virtual functions not being implemented
};

