#pragma once
#include "CoreMinimal.h"
#include "PalShopProductRequireItemData.generated.h"

USTRUCT(BlueprintType)
struct FPalShopProductRequireItemData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName StaticItemId;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 requireNum;
    
    PAL_API FPalShopProductRequireItemData();
};

