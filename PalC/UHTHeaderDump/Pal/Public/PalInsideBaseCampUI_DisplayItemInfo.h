#pragma once
#include "CoreMinimal.h"
#include "PalInsideBaseCampUI_DisplayItemInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalInsideBaseCampUI_DisplayItemInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool isShowWhenNothingItem;
    
    PAL_API FPalInsideBaseCampUI_DisplayItemInfo();
};

