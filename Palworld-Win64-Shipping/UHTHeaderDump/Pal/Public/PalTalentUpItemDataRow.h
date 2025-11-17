#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "EPalTalentType.h"
#include "PalTalentUpItemDataRow.generated.h"

USTRUCT(BlueprintType)
struct FPalTalentUpItemDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    EPalTalentType TalentType;
    
    UPROPERTY(EditDefaultsOnly)
    int32 addValue;
    
    PAL_API FPalTalentUpItemDataRow();
};

