#pragma once
#include "CoreMinimal.h"
#include "PalHUDDispatchParameterBase.h"
#include "PalHUDDispatchParameter_PalShop.generated.h"

class UPalShopBase;

UCLASS(BlueprintType)
class UPalHUDDispatchParameter_PalShop : public UPalHUDDispatchParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Transient)
    UPalShopBase* Shop;
    
    UPalHUDDispatchParameter_PalShop();

};

