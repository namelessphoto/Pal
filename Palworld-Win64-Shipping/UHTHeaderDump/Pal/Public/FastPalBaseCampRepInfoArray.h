#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NetCore -ObjectName=FastArraySerializer -FallbackName=FastArraySerializer
#include "PalBaseCampRepInfo.h"
#include "FastPalBaseCampRepInfoArray.generated.h"

USTRUCT(BlueprintType)
struct FFastPalBaseCampRepInfoArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleInstanceOnly)
    TArray<FPalBaseCampRepInfo> Items;
    
    PAL_API FFastPalBaseCampRepInfoArray();
};

