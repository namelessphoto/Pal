#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "EPalAdditionalEffectType.h"
#include "EPalElementType.h"
#include "EPalPlayerDamageCameraShakeCategory.h"
#include "EPalSizeType.h"
#include "EPalWazaCategory.h"
#include "EPalWazaID.h"
#include "PalSpecialAttackRateInfo.h"
#include "PalWazaCustomExecuteCondition.h"
#include "Templates/SubclassOf.h"
#include "PalWazaDatabaseRaw.generated.h"

class UPalWazaBulletEmiiterOverlapBase;

USTRUCT(BlueprintType)
struct FPalWazaDatabaseRaw : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPalWazaID WazaType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPalElementType Element;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool IgnoreRandomInherit;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPalWazaCategory Category;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 Power;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool IsLeanBack;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPalPlayerDamageCameraShakeCategory CameraShake;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool IgnoreRaycast;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 MinRange;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 MaxRange;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float CoolTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPalSizeType ForceRagdollSize;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPalAdditionalEffectType EffectType1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 EffectValue1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float EffectValueEx1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPalAdditionalEffectType EffectType2;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 EffectValue2;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float EffectValueEx2;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FPalSpecialAttackRateInfo> SpecialAttackRateInfos;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bIsWeaponDamage;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FPalWazaCustomExecuteCondition> WazaCustomExecuteConditions;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool DisabledData;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UPalWazaBulletEmiiterOverlapBase> BulletEmiiterOverlapClass;
    
    PAL_API FPalWazaDatabaseRaw();
};

