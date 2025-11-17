#pragma once
#include "CoreMinimal.h"
#include "PalDataTableRowName_PassiveSkillData.h"
#include "PalFishShadowRareInfo.generated.h"

class UNiagaraSystem;

USTRUCT(BlueprintType)
struct FPalFishShadowRareInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FPalDataTableRowName_PassiveSkillData PassiveSkillId;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UNiagaraSystem* RareEffect;
    
    PAL_API FPalFishShadowRareInfo();
};

