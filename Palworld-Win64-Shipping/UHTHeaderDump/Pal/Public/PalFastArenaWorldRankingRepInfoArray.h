#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NetCore -ObjectName=FastArraySerializer -FallbackName=FastArraySerializer
#include "PalArenaWorldRankingRepInfo.h"
#include "PalFastArenaWorldRankingRepInfoArray.generated.h"

USTRUCT(BlueprintType)
struct FPalFastArenaWorldRankingRepInfoArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(Transient, VisibleInstanceOnly)
    TArray<FPalArenaWorldRankingRepInfo> Items;
    
    PAL_API FPalFastArenaWorldRankingRepInfoArray();
};

