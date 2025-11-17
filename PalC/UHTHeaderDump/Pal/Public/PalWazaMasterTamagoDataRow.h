#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "EPalWazaID.h"
#include "PalWazaMasterTamagoDataRow.generated.h"

USTRUCT(BlueprintType)
struct FPalWazaMasterTamagoDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName PalId;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPalWazaID WazaID;
    
    PAL_API FPalWazaMasterTamagoDataRow();
};

