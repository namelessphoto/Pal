#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "PalRecruitDataRow.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct FPalRecruitDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 BaseCampLevelMin;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 BaseCampLevelMax;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UDataTable* PalRecruitMonsterInfo;
    
    PAL_API FPalRecruitDataRow();
};

