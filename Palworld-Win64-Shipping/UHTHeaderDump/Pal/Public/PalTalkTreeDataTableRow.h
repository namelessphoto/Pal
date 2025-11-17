#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "PalTalkTreeDataTableRow.generated.h"

USTRUCT(BlueprintType)
struct FPalTalkTreeDataTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName NPCID;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName TalkName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName TextId;
    
    PAL_API FPalTalkTreeDataTableRow();
};

