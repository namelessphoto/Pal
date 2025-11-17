#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "EPalQuestType.h"
#include "PalQuestDataSetRow.generated.h"

class UPalQuestData;

USTRUCT(BlueprintType)
struct FPalQuestDataSetRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EPalQuestType QuestType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftClassPtr<UPalQuestData> QuestData;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bReorderable;
    
    PAL_API FPalQuestDataSetRow();
};

