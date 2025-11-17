#pragma once
#include "CoreMinimal.h"
#include "PalHUDDispatchParameterBase.h"
#include "PalHUDDispatchParameter_ItemShop.generated.h"

class UPalShopBase;

UCLASS(BlueprintType)
class UPalHUDDispatchParameter_ItemShop : public UPalHUDDispatchParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Transient)
    UPalShopBase* Shop;
    
    UPalHUDDispatchParameter_ItemShop();

};

