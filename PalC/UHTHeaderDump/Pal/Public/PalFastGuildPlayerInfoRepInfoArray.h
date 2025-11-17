#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NetCore -ObjectName=FastArraySerializer -FallbackName=FastArraySerializer
#include "PalGuildPlayerInfoRepInfo.h"
#include "PalFastGuildPlayerInfoRepInfoArray.generated.h"

USTRUCT(BlueprintType)
struct FPalFastGuildPlayerInfoRepInfoArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(Transient, VisibleInstanceOnly)
    TArray<FPalGuildPlayerInfoRepInfo> Items;
    
    PAL_API FPalFastGuildPlayerInfoRepInfoArray();
};

