#pragma once
#include "CoreMinimal.h"
#include "PalDamageResult.h"
#include "PalWorldSecurityLawTrigger.h"
#include "PalWorldSecurityLawTrigger_CharacterDamaged.generated.h"

class UPalIndividualCharacterHandle;

UCLASS(Blueprintable)
class PAL_API UPalWorldSecurityLawTrigger_CharacterDamaged : public UPalWorldSecurityLawTrigger {
    GENERATED_BODY()
public:
    UPalWorldSecurityLawTrigger_CharacterDamaged();

protected:
    UFUNCTION()
    void OnNotifiedEvent(const FPalDamageResult& DamageResult);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool Condition(const FPalDamageResult& DamageResult, UPalIndividualCharacterHandle*& CriminalHandle);
    
};

