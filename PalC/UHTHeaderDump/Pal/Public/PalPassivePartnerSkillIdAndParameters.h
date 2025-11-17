#pragma once
#include "CoreMinimal.h"
#include "PalDataTableRowName_PassiveSkillData.h"
#include "PalPassivePartnerSkillParameters.h"
#include "PalPassivePartnerSkillIdAndParameters.generated.h"

USTRUCT(BlueprintType)
struct FPalPassivePartnerSkillIdAndParameters {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TMap<FPalDataTableRowName_PassiveSkillData, FPalPassivePartnerSkillParameters> SkillAndParameters;
    
    PAL_API FPalPassivePartnerSkillIdAndParameters();
};

