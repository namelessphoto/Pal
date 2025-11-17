#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "PalDataTableRowName_PalMonsterData.h"
#include "PalRecruitMonsterInfoRow.generated.h"

USTRUCT(BlueprintType)
struct FPalRecruitMonsterInfoRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FPalDataTableRowName_PalMonsterData PalName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float Weight;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 LevelMin;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 LevelMax;
    
    PAL_API FPalRecruitMonsterInfoRow();
};

