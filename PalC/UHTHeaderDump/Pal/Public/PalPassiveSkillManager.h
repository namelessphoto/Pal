#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EPalPassiveSkillEffectType.h"
#include "EPalTribeID.h"
#include "PalItemCreateParameter.h"
#include "PalPassiveSkillConditionInfo.h"
#include "PalPassiveSkillDatabaseRow.h"
#include "PalPassiveSkillEffect.h"
#include "PalPassiveSkillManager.generated.h"

class UDataTable;
class UPalDynamicItemDataBase;
class UPalPassiveSkillExtraParameterBase;

UCLASS(BlueprintType)
class PAL_API UPalPassiveSkillManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    UDataTable* PassiveSkillDataTable;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<EPalTribeID> YakushimaTribeIDs;
    
    UPROPERTY(EditDefaultsOnly, Instanced)
    TMap<EPalPassiveSkillEffectType, UPalPassiveSkillExtraParameterBase*> PassiveSkillExtraParameters;
    
    UPROPERTY()
    TMap<FName, FPalPassiveSkillDatabaseRow> PalAssignableSkillMap;
    
    UPROPERTY()
    TMap<FName, FPalPassiveSkillDatabaseRow> RarePalAssignableSkillMap;
    
    UPROPERTY()
    TMap<FName, FPalPassiveSkillDatabaseRow> RangedWeaponAssignableSkillMap;
    
    UPROPERTY()
    TMap<FName, FPalPassiveSkillDatabaseRow> MeleeWeaponAssignableSkillMap;
    
    UPROPERTY()
    TMap<FName, FPalPassiveSkillDatabaseRow> ArmorAssignableSkillMap;
    
    UPROPERTY()
    TMap<FName, FPalPassiveSkillDatabaseRow> AccessoryAssignableSkillMap;
    
    UPROPERTY()
    TMap<FName, FPalPassiveSkillDatabaseRow> RainbowPalAssignableSkillMap;
    
public:
    UPalPassiveSkillManager();

private:
    UFUNCTION()
    void OnCreatedDynamicItemDataInServer(UPalDynamicItemDataBase* CreatedItemData, const FPalItemCreateParameter& CreateParameter);
    
public:
    UFUNCTION(BlueprintPure)
    TArray<EPalPassiveSkillEffectType> GetSkillEffectTypes(FName SkillName);
    
    UFUNCTION(BlueprintPure)
    static float GetSkillEffectTotalValue(EPalPassiveSkillEffectType EffectType, const TArray<FPalPassiveSkillEffect>& skillEffectList);
    
    UFUNCTION(BlueprintPure)
    bool GetSkillData(const FName& SkillName, FPalPassiveSkillDatabaseRow& outSkillData);
    
    UFUNCTION(BlueprintPure)
    TArray<FName> GetPassiveSkillNamesRowName(const TArray<FName>& passiveList);
    
    UFUNCTION(BlueprintPure)
    TArray<FPalPassiveSkillEffect> GetPassiveSkillEffect(FPalPassiveSkillConditionInfo& ConditionInfo);
    
    UFUNCTION(BlueprintPure)
    static float GetParameterWithSkillEffect(float originalValue, EPalPassiveSkillEffectType EffectType, const TArray<FPalPassiveSkillEffect>& skillEffectList);
    
    UFUNCTION(BlueprintPure)
    void GetPalAssignablePassiveIDs(TArray<FName>& List);
    
    UFUNCTION(BlueprintPure)
    FName GetNameTextId(FName SkillName);
    
};

