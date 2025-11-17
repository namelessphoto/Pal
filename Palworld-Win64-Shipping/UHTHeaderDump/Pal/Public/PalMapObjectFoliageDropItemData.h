#pragma once
#include "CoreMinimal.h"
#include "PalDataTableRowName_ItemData.h"
#include "PalMapObjectFoliageDropItemData.generated.h"

USTRUCT(BlueprintType)
struct FPalMapObjectFoliageDropItemData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FPalDataTableRowName_ItemData StaticItemId;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 Num;
    
    PAL_API FPalMapObjectFoliageDropItemData();
};

