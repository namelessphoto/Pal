#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "EPalShopBuyResultType.h"
#include "PalCharacterSlotId.h"
#include "PalCharacterStoredParameterId.h"
#include "PalDroppedPalProductDataForShop.h"
#include "PalItemSlotIdAndNum.h"
#include "PalNetworkShopComponent.generated.h"

class AActor;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalNetworkShopComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPalNetworkShopComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(Reliable, Server)
    void SetupShopDataForActor_ToServer(AActor* VenderActor);
    
    UFUNCTION(Reliable, Server)
    void RequestSellPals_ToServer(const FGuid& ShopID, const TArray<FPalCharacterSlotId>& SellPalSlotIDArray);
    
    UFUNCTION(Reliable, Server)
    void RequestSellItems_ToServer(const FGuid& ShopID, const TArray<FPalItemSlotIdAndNum>& SellItemSlotIDArray);
    
    UFUNCTION(Reliable, Server)
    void RequestCollectDroppedPalProductData(const int32 MaxCollectNum);
    
    UFUNCTION(Reliable, Server)
    void RequestBuyProduct_ToServer(const FGuid& ShopID, const FGuid& ProductId, int32 BuyNum);
    
    UFUNCTION(Reliable, Server)
    void RequestBuyLostPal_ToServer(const FPalCharacterStoredParameterId& StoredParameterId);
    
    UFUNCTION(Client, Reliable)
    void RecieveBuyResult_ToClient(EPalShopBuyResultType resultType);
    
    UFUNCTION(Client, Reliable)
    void ReceiveDroppedPalProductData_ToClient(const TArray<FPalDroppedPalProductDataForShop>& CollectedData);
    
};

