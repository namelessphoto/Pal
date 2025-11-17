#pragma once
#include "CoreMinimal.h"
#include "EPalLabCategorySubType.h"
#include "EPalPassiveSkillEffectType.h"
#include "EPalWorkSuitability.h"
#include "PalPassiveSkillEffectKeyOption.h"
#include "PalUIGuildLabPassiveEffectInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalUIGuildLabPassiveEffectInfo {
    GENERATED_BODY()
public:
    UPROPERTY(Transient, VisibleInstanceOnly)
    EPalPassiveSkillEffectType EffectType;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FPalPassiveSkillEffectKeyOption EffectOption;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    float EffectValueSum;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FName EffectDescriptionTextIdOverwrite;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    EPalWorkSuitability CategoryWorkSuitability;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    EPalLabCategorySubType CategorySubType;
    
    PAL_API FPalUIGuildLabPassiveEffectInfo();
};

