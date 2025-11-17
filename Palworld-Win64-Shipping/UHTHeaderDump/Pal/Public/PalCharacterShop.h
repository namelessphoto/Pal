#pragma once
#include "CoreMinimal.h"
#include "PalShopBase.h"
#include "PalCharacterShop.generated.h"

class UPalShopProduct_LostPal;

UCLASS()
class PAL_API UPalCharacterShop : public UPalShopBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<UPalShopProduct_LostPal*> LocalLostPalProductArray;
    
public:
    UPalCharacterShop();

};

