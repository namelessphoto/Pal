#pragma once
#include "CoreMinimal.h"
#include "PalShopProductGiverBase.h"
#include "PalShopProductGiver_StaticItem.generated.h"

UCLASS()
class PAL_API UPalShopProductGiver_StaticItem : public UPalShopProductGiverBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Replicated)
    FName ProductStaticItemID;
    
    UPROPERTY(Replicated)
    int32 OverridePrice;
    
    UPROPERTY(Replicated)
    int32 StackNumPerProduct;
    
public:
    UPalShopProductGiver_StaticItem();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};

