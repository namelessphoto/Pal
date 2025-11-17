#pragma once
#include "CoreMinimal.h"
#include "PalItemId.h"
#include "PalBaseCampItemStackInfo.generated.h"

class UPalDynamicItemDataBase;

USTRUCT(BlueprintType)
struct FPalBaseCampItemStackInfo {
    GENERATED_BODY()
public:
    UPROPERTY(Transient, VisibleInstanceOnly)
    FPalItemId ItemId;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    int32 StackCount;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    UPalDynamicItemDataBase* DynamicItemData;
    
    PAL_API FPalBaseCampItemStackInfo();
};

