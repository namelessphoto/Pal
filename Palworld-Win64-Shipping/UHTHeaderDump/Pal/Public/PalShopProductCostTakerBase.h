#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalShopProductCreateData.h"
#include "PalShopProductCostTakerBase.generated.h"

class UPalShopProductBase;

UCLASS()
class PAL_API UPalShopProductCostTakerBase : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FPalShopProductCreateData ProductCreateData;
    
    UPROPERTY(Replicated)
    TWeakObjectPtr<UPalShopProductBase> ParentProduct;
    
public:
    UPalShopProductCostTakerBase();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};

