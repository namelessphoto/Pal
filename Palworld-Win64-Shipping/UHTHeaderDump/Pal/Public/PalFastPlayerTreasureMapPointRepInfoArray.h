#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NetCore -ObjectName=FastArraySerializer -FallbackName=FastArraySerializer
#include "PalPlayerTreasureMapPointRepInfo.h"
#include "PalFastPlayerTreasureMapPointRepInfoArray.generated.h"

USTRUCT(BlueprintType)
struct FPalFastPlayerTreasureMapPointRepInfoArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(Transient, VisibleInstanceOnly)
    TArray<FPalPlayerTreasureMapPointRepInfo> Items;
    
    PAL_API FPalFastPlayerTreasureMapPointRepInfoArray();
};

