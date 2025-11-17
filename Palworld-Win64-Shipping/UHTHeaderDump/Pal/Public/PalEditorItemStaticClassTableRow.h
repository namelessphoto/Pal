#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "Templates/SubclassOf.h"
#include "PalEditorItemStaticClassTableRow.generated.h"

class UPalStaticItemDataBase;

USTRUCT(BlueprintType)
struct FPalEditorItemStaticClassTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName ClassName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UPalStaticItemDataBase> StaticClass;
    
    PAL_API FPalEditorItemStaticClassTableRow();
};

