#pragma once
#include "CoreMinimal.h"
#include "PalItemData.generated.h"

class UPalDynamicItemDataBase;
class UPalStaticItemDataBase;

USTRUCT(BlueprintType)
struct FPalItemData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    UPalStaticItemDataBase* StaticData;
    
    UPROPERTY(BlueprintReadOnly)
    UPalDynamicItemDataBase* DynamicData;
    
    PAL_API FPalItemData();
};

