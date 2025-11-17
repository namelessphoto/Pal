#pragma once
#include "CoreMinimal.h"
#include "PalAIActionCombatBase.h"
#include "PalAIActionCombat_Standard.generated.h"

class UPalActiveSkill;

UCLASS(EditInlineNew)
class PAL_API UPalAIActionCombat_Standard : public UPalAIActionCombatBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UPalActiveSkill* CommonAttackSkill;
    
public:
    UPalAIActionCombat_Standard();

};

