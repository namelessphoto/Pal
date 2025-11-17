#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "PalSoundIDDataTableRow.generated.h"

USTRUCT()
struct FPalSoundIDDataTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName Description;
    
    PAL_API FPalSoundIDDataTableRow();
};

