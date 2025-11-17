#pragma once
#include "CoreMinimal.h"
#include "PalPassivePartnerSkillItemParameter.h"
#include "PalPassiveRegeneParameter.h"
#include "PalPassiveSkillSetupInfo.generated.h"

USTRUCT()
struct FPalPassiveSkillSetupInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName SkillName;
    
    UPROPERTY()
    TArray<FName> Flags;
    
    UPROPERTY()
    FPalPassivePartnerSkillItemParameter ItemParam;
    
    UPROPERTY()
    FPalPassiveRegeneParameter RegeneParam;
    
    PAL_API FPalPassiveSkillSetupInfo();
};

