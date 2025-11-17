#pragma once
#include "CoreMinimal.h"
#include "EPalPassivePartnerSkillState.h"
#include "PalPassivePartnerSkillItemParameter.h"
#include "PalPassiveRegeneParameter.h"
#include "PalPassivePartnerSkillStatus.generated.h"

USTRUCT(BlueprintType)
struct FPalPassivePartnerSkillStatus {
    GENERATED_BODY()
public:
    UPROPERTY()
    EPalPassivePartnerSkillState State;
    
    UPROPERTY()
    float ElapsedTime;
    
    UPROPERTY()
    TArray<FName> Flags;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FPalPassivePartnerSkillItemParameter ItemParam;
    
    UPROPERTY()
    FPalPassiveRegeneParameter RegeneParam;
    
    PAL_API FPalPassivePartnerSkillStatus();
};

