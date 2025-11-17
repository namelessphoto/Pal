#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "Templates/SubclassOf.h"
#include "PalEditorSkinStaticClassTableRow.generated.h"

class UPalSkinDataBase;

USTRUCT(BlueprintType)
struct FPalEditorSkinStaticClassTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName ClassName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UPalSkinDataBase> StaticClass;
    
    PAL_API FPalEditorSkinStaticClassTableRow();
};

