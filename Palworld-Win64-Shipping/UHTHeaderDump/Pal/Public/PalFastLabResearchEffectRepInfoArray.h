#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NetCore -ObjectName=FastArraySerializer -FallbackName=FastArraySerializer
#include "PalLabResearchEffectRepInfo.h"
#include "PalFastLabResearchEffectRepInfoArray.generated.h"

USTRUCT(BlueprintType)
struct FPalFastLabResearchEffectRepInfoArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(Transient, VisibleInstanceOnly)
    TArray<FPalLabResearchEffectRepInfo> Items;
    
    PAL_API FPalFastLabResearchEffectRepInfoArray();
};

