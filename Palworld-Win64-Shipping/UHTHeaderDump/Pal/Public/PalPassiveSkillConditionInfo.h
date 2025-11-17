#pragma once
#include "CoreMinimal.h"
#include "EPalPassiveSkillEffectTargetType.h"
#include "EPalPassiveSkillEffectType.h"
#include "PalPassiveSkillConditionInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalPassiveSkillConditionInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName SkillName;
    
    UPROPERTY()
    TArray<EPalPassiveSkillEffectType> DisablePassiveTypes;
    
    UPROPERTY()
    EPalPassiveSkillEffectTargetType TargetType;
    
    PAL_API FPalPassiveSkillConditionInfo();
};

