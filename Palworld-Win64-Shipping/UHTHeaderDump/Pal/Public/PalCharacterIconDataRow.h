#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "PalCharacterIconDataRow.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FPalCharacterIconDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UTexture2D> Icon;
    
    PAL_API FPalCharacterIconDataRow();
};

