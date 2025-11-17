#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NetCore -ObjectName=FastArraySerializer -FallbackName=FastArraySerializer
#include "PalBaseCampItemStackRepInfo.h"
#include "PalFastBaseCampItemStackRepInfoArray.generated.h"

USTRUCT(BlueprintType)
struct FPalFastBaseCampItemStackRepInfoArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(Transient, VisibleInstanceOnly)
    TArray<FPalBaseCampItemStackRepInfo> Items;
    
    PAL_API FPalFastBaseCampItemStackRepInfoArray();
};

