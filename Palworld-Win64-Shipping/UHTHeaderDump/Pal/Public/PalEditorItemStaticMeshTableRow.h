#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "PalEditorItemStaticMeshTableRow.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct FPalEditorItemStaticMeshTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName StaticMeshName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UStaticMesh> StaticMeshPath;
    
    PAL_API FPalEditorItemStaticMeshTableRow();
};

