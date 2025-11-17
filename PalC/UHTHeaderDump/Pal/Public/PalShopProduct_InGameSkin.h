#pragma once
#include "CoreMinimal.h"
#include "PalShopProductBase.h"
#include "PalShopProduct_InGameSkin.generated.h"

UCLASS()
class PAL_API UPalShopProduct_InGameSkin : public UPalShopProductBase {
    GENERATED_BODY()
public:
    UPalShopProduct_InGameSkin();

    UFUNCTION(BlueprintPure)
    int32 GetSkinPrice() const;
    
    UFUNCTION(BlueprintPure)
    FName GetProductSkinName() const;
    
};

