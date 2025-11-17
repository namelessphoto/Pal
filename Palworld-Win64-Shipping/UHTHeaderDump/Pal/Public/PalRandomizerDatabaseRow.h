#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "PalRandomizerDatabaseRow.generated.h"

USTRUCT(BlueprintType)
struct FPalRandomizerDatabaseRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName PalId;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 BaseLv;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 NumMin;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 NumMax;
    
    PAL_API FPalRandomizerDatabaseRow();
};

