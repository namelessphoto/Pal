#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "PalArenaUnusableItemRow.generated.h"

USTRUCT()
struct FPalArenaUnusableItemRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName ItemId;
    
    PAL_API FPalArenaUnusableItemRow();
};

