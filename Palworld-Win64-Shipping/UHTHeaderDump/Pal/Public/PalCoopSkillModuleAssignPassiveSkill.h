#pragma once
#include "CoreMinimal.h"
#include "PalCoopSkillModuleAssignPassiveSkillNames.h"
#include "PalCoopSkillModuleBase.h"
#include "PalDataTableRowName_PassiveSkillData.h"
#include "PalCoopSkillModuleAssignPassiveSkill.generated.h"

UCLASS()
class PAL_API UPalCoopSkillModuleAssignPassiveSkill : public UPalCoopSkillModuleBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TArray<FPalCoopSkillModuleAssignPassiveSkillNames> AssignSkillNamesPerRank;
    
private:
    UPROPERTY()
    FName PassiveSkillAssignFlagName;
    
public:
    UPalCoopSkillModuleAssignPassiveSkill();

private:
    UFUNCTION()
    void RemovePassiveSkills();
    
    UFUNCTION()
    void AssignPassiveSkills(const TArray<FPalDataTableRowName_PassiveSkillData>& AssignSkillName);
    
    UFUNCTION()
    void AssignPassiveSkill(const FName& SkillName);
    
};

