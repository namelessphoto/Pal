#pragma once
#include "CoreMinimal.h"
#include "PalMasterDataTableAccessBase.h"
#include "PalOperatingTablePassiveSkillData.h"
#include "PalMasterDataTableAccess_OperatingTablePassiveSkillData.generated.h"

UCLASS()
class UPalMasterDataTableAccess_OperatingTablePassiveSkillData : public UPalMasterDataTableAccessBase {
    GENERATED_BODY()
public:
    UPalMasterDataTableAccess_OperatingTablePassiveSkillData();

    UFUNCTION(BlueprintPure)
    FPalOperatingTablePassiveSkillData BP_FindRowByStaticItemId(FName StaticItemId, bool& bResult) const;
    
    UFUNCTION(BlueprintPure)
    FPalOperatingTablePassiveSkillData BP_FindRowByPassiveSkill(FName PassiveSkill, bool& bResult) const;
    
    UFUNCTION(BlueprintPure)
    FPalOperatingTablePassiveSkillData BP_FindRow(FName RowName, bool& bResult) const;
    
};

