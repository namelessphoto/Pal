#pragma once
#include "CoreMinimal.h"
#include "EPalElementType.h"
#include "PalDataTableRowName_PalMonsterData.h"
#include "PalPassivePartnerSkillFindOtomoParameter.generated.h"

USTRUCT()
struct FPalPassivePartnerSkillFindOtomoParameter {
    GENERATED_BODY()
public:
    UPROPERTY()
    EPalElementType TargetElementType;
    
    UPROPERTY()
    TArray<FPalDataTableRowName_PalMonsterData> TargetPalIds;
    
    PAL_API FPalPassivePartnerSkillFindOtomoParameter();
};

