#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "PalNPCInteractConditionConstValueDataTableRow.generated.h"

USTRUCT(BlueprintType)
struct FPalNPCInteractConditionConstValueDataTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName ValText;
    
    PAL_API FPalNPCInteractConditionConstValueDataTableRow();
};

