#pragma once
#include "CoreMinimal.h"
#include "PalPassiveSkillParameters.h"
#include "PalPassiveSkills.generated.h"

USTRUCT(BlueprintType)
struct FPalPassiveSkills {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FPalPassiveSkillParameters> AllPassiveSkills;
    
    PAL_API FPalPassiveSkills();
};

