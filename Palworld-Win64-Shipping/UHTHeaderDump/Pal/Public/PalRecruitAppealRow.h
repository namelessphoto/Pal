#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "PalRecruitAppealRow.generated.h"

USTRUCT(BlueprintType)
struct FPalRecruitAppealRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName PassiveSkill;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName TextId;
    
    PAL_API FPalRecruitAppealRow();
};

