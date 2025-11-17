#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "EPalWazaID.h"
#include "PalWazaMasterLevelDataRow.generated.h"

USTRUCT(BlueprintType)
struct FPalWazaMasterLevelDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName PalId;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPalWazaID WazaID;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 Level;
    
    PAL_API FPalWazaMasterLevelDataRow();
};

