#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "EPalWorkSuitability.h"
#include "PalGainWorkSuitabilityRankItemDataRow.generated.h"

USTRUCT(BlueprintType)
struct FPalGainWorkSuitabilityRankItemDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPalWorkSuitability WorkSuitability;
    
    PAL_API FPalGainWorkSuitabilityRankItemDataRow();
};

