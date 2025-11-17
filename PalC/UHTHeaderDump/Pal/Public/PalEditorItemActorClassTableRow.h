#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "PalEditorItemActorClassTableRow.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FPalEditorItemActorClassTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName ClassName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftClassPtr<AActor> actorClass;
    
    PAL_API FPalEditorItemActorClassTableRow();
};

