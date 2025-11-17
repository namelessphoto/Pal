#pragma once
#include "CoreMinimal.h"
#include "PalPassiveSkillAssignInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalPassiveSkillAssignInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool isDoNotSetSkills;
    
    UPROPERTY()
    TArray<FName> ForceSetSkillList;
    
    PAL_API FPalPassiveSkillAssignInfo();
};

