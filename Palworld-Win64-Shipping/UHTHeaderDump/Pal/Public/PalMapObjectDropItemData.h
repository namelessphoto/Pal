#pragma once
#include "CoreMinimal.h"
#include "PalDataTableRowName_ItemData.h"
#include "PalMapObjectDropItemData.generated.h"

USTRUCT(BlueprintType)
struct FPalMapObjectDropItemData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FPalDataTableRowName_ItemData StaticItemId;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 Num;
    
    PAL_API FPalMapObjectDropItemData();
};

