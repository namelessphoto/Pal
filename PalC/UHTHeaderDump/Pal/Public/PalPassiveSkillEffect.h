#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "EPalPassiveSkillEffectType.h"
#include "PalPassivePartnerSkillItemParameter.h"
#include "PalPassiveSkillEffect.generated.h"

USTRUCT(BlueprintType)
struct FPalPassiveSkillEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPalPassiveSkillEffectType Type;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float Value;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FName> Flags;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FPalPassivePartnerSkillItemParameter ItemParam;
    
    UPROPERTY()
    FGuid PassiveId;
    
    PAL_API FPalPassiveSkillEffect();
};

