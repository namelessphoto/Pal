#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NetCore -ObjectName=FastArraySerializerItem -FallbackName=FastArraySerializerItem
#include "PalArenaWorldRankingRecord.h"
#include "PalArenaWorldRankingRepInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalArenaWorldRankingRepInfo : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    FPalArenaWorldRankingRecord Record;
    
    PAL_API FPalArenaWorldRankingRepInfo();
};

