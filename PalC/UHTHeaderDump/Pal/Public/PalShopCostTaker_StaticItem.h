#pragma once
#include "CoreMinimal.h"
#include "EPalItemShopProductType.h"
#include "PalShopProductCostTakerBase.h"
#include "PalShopCostTaker_StaticItem.generated.h"

UCLASS()
class PAL_API UPalShopCostTaker_StaticItem : public UPalShopProductCostTakerBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Replicated)
    EPalItemShopProductType ItemProductType;
    
    UPROPERTY(Replicated)
    FName RequireStaticItemID;
    
    UPROPERTY(Replicated)
    FName TargetProductStaticItemID;
    
public:
    UPalShopCostTaker_StaticItem();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};

