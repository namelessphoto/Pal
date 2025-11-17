#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "EPalPartnerSkillTriggerType.h"
#include "PalPartnerSkillDatabaseRow.generated.h"

USTRUCT(BlueprintType)
struct FPalPartnerSkillDatabaseRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName DevName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float EffectTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float CoolDownTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ExecCost;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float IdleCost;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool CanThrowPal;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool CanChangeWeapon;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool IsToggleKey;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPalPartnerSkillTriggerType TriggerType;
    
    PAL_API FPalPartnerSkillDatabaseRow();
};

