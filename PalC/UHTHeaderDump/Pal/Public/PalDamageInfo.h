#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EPalAdditionalEffectType.h"
#include "EPalAttackType.h"
#include "EPalBodyPartsType.h"
#include "EPalDamageAnimationReactionType.h"
#include "EPalElementType.h"
#include "EPalPlayerDamageCameraShakeCategory.h"
#include "EPalSizeType.h"
#include "EPalStatusID.h"
#include "EPalWazaCategory.h"
#include "EPalWeaponType.h"
#include "PalFoliageInstanceId.h"
#include "PalSpecialAttackRateInfo.h"
#include "PalDamageInfo.generated.h"

class AActor;
class UNiagaraSystem;

USTRUCT(BlueprintType)
struct FPalDamageInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    int32 NativeDamageValue;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    int32 RedirectDamageValue;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    EPalWazaCategory Category;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    bool IsBlowAttack;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    bool IsLeanBack;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FVector BlowVelocity;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    EPalBodyPartsType BodyPartsType;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    int32 AttackerLevel;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    EPalElementType AttackElementType;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FGuid AttackerGroupID;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    AActor* Attacker;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    AActor* OverrideNetworkOwner;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    EPalAttackType AttackType;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    EPalWeaponType WeaponType;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FVector HitLocation;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FName FoliageModelId;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    TArray<FPalFoliageInstanceId> FoliageInstanceIds;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    EPalAdditionalEffectType EffectType1;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    int32 EffectValue1;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    float EffectValueEx1;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    EPalAdditionalEffectType EffectType2;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    int32 EffectValue2;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    float EffectValueEx2;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    float SneakAttackRate;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    bool PlaySneakAttackEffect;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    float DamageRatePerCollision;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    TArray<FPalSpecialAttackRateInfo> SpecialAttackRateInfos;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    EPalDamageAnimationReactionType DamageReactionAnimationType;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    bool bAttackableToFriend;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    bool NoDamage;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    bool IgnoreShield;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    bool UIDamageTextOverride_DoubleRegist;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    EPalPlayerDamageCameraShakeCategory CameraShake;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    EPalSizeType ForceRagdollSize;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    bool bApplyNativeDamageValue;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    bool IgnorePlayerEquipItemDamage;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    bool IgnoreCheckGroupForStun;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    bool IsPlayerVsPlayerDamage;
    
    UPROPERTY(BlueprintReadWrite)
    float WeaponDamageRatePvP;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    TSoftObjectPtr<UNiagaraSystem> OverrideHitEffect;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    EPalStatusID statusID;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    bool bRedirectDamage;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FName AttackStaticItemID;
    
    PAL_API FPalDamageInfo();
};

