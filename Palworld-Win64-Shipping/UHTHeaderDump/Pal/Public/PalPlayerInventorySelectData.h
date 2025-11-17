#pragma once
#include "CoreMinimal.h"
#include "PalPlayerInventorySelectData.generated.h"

class UPalItemContainer;

USTRUCT(BlueprintType)
struct FPalPlayerInventorySelectData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    int32 nowSelectedContainerIndex;
    
    UPROPERTY(BlueprintReadOnly)
    UPalItemContainer* targetItemContainer;
    
    PAL_API FPalPlayerInventorySelectData();
};

