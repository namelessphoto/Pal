#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "PalEditorItemIconTableRow.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FPalEditorItemIconTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UTexture2D> Icon;
    
    PAL_API FPalEditorItemIconTableRow();
};

