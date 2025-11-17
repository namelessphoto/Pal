#pragma once
#include "CoreMinimal.h"
#include "PalPassiveSkillEffect.h"
#include "PalBaseCampPassiveSkillGrantedEffectInfo.generated.h"

USTRUCT()
struct FPalBaseCampPassiveSkillGrantedEffectInfo {
    GENERATED_BODY()
public:
    UPROPERTY(Transient, VisibleInstanceOnly)
    TArray<FPalPassiveSkillEffect> Effects;
    
    PAL_API FPalBaseCampPassiveSkillGrantedEffectInfo();
};

