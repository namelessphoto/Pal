#pragma once
#include "CoreMinimal.h"
#include "PalDataTableRowName_PassiveSkillData.h"
#include "PalDebugAttachPassiveSkillInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalDebugAttachPassiveSkillInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FPalDataTableRowName_PassiveSkillData> skill;
    
    PAL_API FPalDebugAttachPassiveSkillInfo();
};

