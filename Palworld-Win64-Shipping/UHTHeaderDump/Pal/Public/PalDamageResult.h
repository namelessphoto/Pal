#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EPalDamageAnimationReactionType.h"
#include "EPalElementType.h"
#include "EPalPlayerDamageCameraShakeCategory.h"
#include "PalDamageResult.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FPalDamageResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    int32 Damage;
    
    UPROPERTY(BlueprintReadOnly)
    AActor* Attacker;
    
    UPROPERTY(BlueprintReadOnly)
    AActor* Defender;
    
    UPROPERTY(BlueprintReadOnly)
    FVector BlowVelocity;
    
    UPROPERTY(BlueprintReadOnly)
    FVector HitLocation;
    
    UPROPERTY(BlueprintReadOnly)
    EPalDamageAnimationReactionType DamageReactionAnimationType;
    
    UPROPERTY(BlueprintReadWrite)
    bool IgnoreShield;
    
    UPROPERTY(BlueprintReadWrite)
    bool IsPlayedLeanBack;
    
    UPROPERTY(BlueprintReadOnly)
    EPalPlayerDamageCameraShakeCategory CameraShake;
    
    UPROPERTY(BlueprintReadOnly)
    bool IgnorePlayerEquipItemDamage;
    
    UPROPERTY(BlueprintReadOnly)
    EPalElementType AttackElementType;
    
    PAL_API FPalDamageResult();
};

