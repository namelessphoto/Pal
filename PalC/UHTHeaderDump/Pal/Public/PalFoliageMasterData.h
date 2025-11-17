#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "PalFoliageMasterData.generated.h"

USTRUCT()
struct FPalFoliageMasterData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName ClassRefId;
    
    PAL_API FPalFoliageMasterData();
};

