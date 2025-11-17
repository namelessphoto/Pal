#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "EPalAdditionalEffectType.h"
#include "EPalAttackType.h"
#include "EPalDamageAnimationReactionType.h"
#include "EPalElementType.h"
#include "EPalPlayerDamageCameraShakeCategory.h"
#include "EPalSizeType.h"
#include "EPalWazaCategory.h"
#include "EPalWeaponType.h"
#include "PalSpecialAttackRateInfo.h"
#include "PalMakeDamageInfo.generated.h"

class AActor;
class USceneComponent;

USTRUCT(BlueprintType)
struct FPalMakeDamageInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    AActor* Attacker;
    
    UPROPERTY(BlueprintReadWrite)
    AActor* Defender;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    USceneComponent* HitComponent;
    
    UPROPERTY(BlueprintReadWrite)
    int32 Power;
    
    UPROPERTY(BlueprintReadWrite)
    EPalWazaCategory Category;
    
    UPROPERTY(BlueprintReadWrite)
    EPalElementType Element;
    
    UPROPERTY(BlueprintReadWrite)
    EPalAttackType AttackType;
    
    UPROPERTY(BlueprintReadWrite)
    EPalWeaponType WeaponType;
    
    UPROPERTY(BlueprintReadWrite)
    FVector HitLocation;
    
    UPROPERTY(BlueprintReadWrite)
    bool IsLeanBack;
    
    UPROPERTY(BlueprintReadWrite)
    bool IsBlow;
    
    UPROPERTY(BlueprintReadWrite)
    FVector BlowVelocity;
    
    UPROPERTY(BlueprintReadWrite)
    FHitResult HitInfo;
    
    UPROPERTY(BlueprintReadWrite)
    EPalAdditionalEffectType EffectType1;
    
    UPROPERTY(BlueprintReadWrite)
    int32 EffectValue1;
    
    UPROPERTY(BlueprintReadWrite)
    float EffectValueEx1;
    
    UPROPERTY(BlueprintReadWrite)
    EPalAdditionalEffectType EffectType2;
    
    UPROPERTY(BlueprintReadWrite)
    int32 EffectValue2;
    
    UPROPERTY(BlueprintReadWrite)
    float EffectValueEx2;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<int32> HitFoliageIndex;
    
    UPROPERTY(BlueprintReadWrite)
    float SneakAttackRate;
    
    UPROPERTY(BlueprintReadWrite)
    float DamageRatePerCollision;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<FPalSpecialAttackRateInfo> SpecialAttackRateInfos;
    
    UPROPERTY(BlueprintReadWrite)
    EPalDamageAnimationReactionType DamageReactionAnimationType;
    
    UPROPERTY(BlueprintReadWrite)
    bool bAttackableToFriend;
    
    UPROPERTY(BlueprintReadWrite)
    bool NoDamage;
    
    UPROPERTY(BlueprintReadWrite)
    bool IgnoreShield;
    
    UPROPERTY(BlueprintReadWrite)
    bool UIDamageTextOverride_DoubleRegist;
    
    UPROPERTY(BlueprintReadWrite)
    EPalPlayerDamageCameraShakeCategory CameraShake;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    EPalSizeType ForceRagdollSize;
    
    UPROPERTY(BlueprintReadWrite)
    AActor* OverrideNetworkOwner;
    
    UPROPERTY(BlueprintReadWrite)
    float WeaponDamageRatePvP;
    
    UPROPERTY(BlueprintReadWrite)
    FName AttackStaticItemID;
    
    PAL_API FPalMakeDamageInfo();
};

