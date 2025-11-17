#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NetCore -ObjectName=FastArraySerializer -FallbackName=FastArraySerializer
#include "PalPlayerPlatformInfo.h"
#include "FastPlayerPlatformInfoArray.generated.h"

USTRUCT(BlueprintType)
struct FFastPlayerPlatformInfoArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleInstanceOnly)
    TArray<FPalPlayerPlatformInfo> Items;
    
    PAL_API FFastPlayerPlatformInfoArray();
};

