#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "EPalElementType.h"
#include "EPalPassiveCategory.h"
#include "EPalPassiveSkillEffectTargetType.h"
#include "EPalPassiveSkillEffectType.h"
#include "PalPassiveSkillDatabaseRow.generated.h"

USTRUCT(BlueprintType)
struct FPalPassiveSkillDatabaseRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 Rank;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 LotteryWeight;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName OverrideDescMsgID;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPalElementType TargetElementType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPalPassiveSkillEffectType EffectType1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float EffectValue1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPalPassiveSkillEffectTargetType TargetType1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPalPassiveSkillEffectType EffectType2;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float EffectValue2;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPalPassiveSkillEffectTargetType TargetType2;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPalPassiveSkillEffectType EffectType3;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float EffectValue3;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPalPassiveSkillEffectTargetType TargetType3;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool InvokeActiveOtomo;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool InvokeWorker;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool InvokeRiding;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool InvokeReserve;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool InvokeInOtomo;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool InvokeAlways;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool InvokeInBaseCamp;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool AddPal;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool AddRarePal;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool AddShotWeapon;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool AddMeleeWeapon;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool AddArmor;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool AddAccessory;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName OverrideNameTextID;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName OverrideSummaryTextId;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPalPassiveCategory Category;
    
    PAL_API FPalPassiveSkillDatabaseRow();
};

