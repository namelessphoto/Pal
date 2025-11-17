#pragma once
#include "CoreMinimal.h"
#include "EPalPassiveSkillEffectTargetItemType.h"
#include "EPalWorkSuitability.h"
#include "PalPassiveSkillEffectKeyOption.generated.h"

USTRUCT(BlueprintType)
struct PAL_API FPalPassiveSkillEffectKeyOption {
    GENERATED_BODY()
public:
    UPROPERTY(Transient, VisibleInstanceOnly)
    EPalWorkSuitability WorkSuitability;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    EPalPassiveSkillEffectTargetItemType ItemType;
    
    FPalPassiveSkillEffectKeyOption();
};

