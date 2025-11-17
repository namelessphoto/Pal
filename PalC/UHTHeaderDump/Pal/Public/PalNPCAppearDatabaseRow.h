#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "PalNPCAppearDatabaseRow.generated.h"

USTRUCT()
struct FPalNPCAppearDatabaseRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    int32 DummyValue;
    
    PAL_API FPalNPCAppearDatabaseRow();
};

