#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NetCore -ObjectName=FastArraySerializer -FallbackName=FastArraySerializer
#include "PalEggRepInfo.h"
#include "PalFastPalEggRepInfoArray.generated.h"

USTRUCT(BlueprintType)
struct FPalFastPalEggRepInfoArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(Transient, VisibleInstanceOnly)
    TArray<FPalEggRepInfo> Items;
    
    PAL_API FPalFastPalEggRepInfoArray();
};

