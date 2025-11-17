#pragma once
#include "CoreMinimal.h"
#include "PalStaticItemIdAndDynamicItemDataSet.generated.h"

class UPalDynamicItemDataBase;

USTRUCT()
struct FPalStaticItemIdAndDynamicItemDataSet {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName StaticItemId;
    
    UPROPERTY()
    UPalDynamicItemDataBase* DynamicItemData;
    
    PAL_API FPalStaticItemIdAndDynamicItemDataSet();
};

