#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NetCore -ObjectName=FastArraySerializer -FallbackName=FastArraySerializer
#include "PalBaseCampMapObjectRepInfo.h"
#include "PalFastBaseCampMapObjectRepInfoArray.generated.h"

USTRUCT(BlueprintType)
struct FPalFastBaseCampMapObjectRepInfoArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(Transient, VisibleInstanceOnly)
    TArray<FPalBaseCampMapObjectRepInfo> Items;
    
    PAL_API FPalFastBaseCampMapObjectRepInfoArray();
};

