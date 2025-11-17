#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NetCore -ObjectName=FastArraySerializer -FallbackName=FastArraySerializer
#include "PalMapObjectModuleRepInfo.h"
#include "PalFastMapObjectModuleRepInfoArray.generated.h"

USTRUCT(BlueprintType)
struct FPalFastMapObjectModuleRepInfoArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(Transient, VisibleInstanceOnly)
    TArray<FPalMapObjectModuleRepInfo> Items;
    
    PAL_API FPalFastMapObjectModuleRepInfoArray();
};

