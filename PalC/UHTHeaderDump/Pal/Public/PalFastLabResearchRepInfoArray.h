#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NetCore -ObjectName=FastArraySerializer -FallbackName=FastArraySerializer
#include "PalLabResearchRepInfo.h"
#include "PalFastLabResearchRepInfoArray.generated.h"

USTRUCT(BlueprintType)
struct FPalFastLabResearchRepInfoArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(Transient, VisibleInstanceOnly)
    TArray<FPalLabResearchRepInfo> Items;
    
    PAL_API FPalFastLabResearchRepInfoArray();
};

