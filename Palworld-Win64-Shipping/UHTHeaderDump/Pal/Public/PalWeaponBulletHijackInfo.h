#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Templates/SubclassOf.h"
#include "PalWeaponBulletHijackInfo.generated.h"

class AActor;
class UNiagaraSystem;

USTRUCT(BlueprintType)
struct FPalWeaponBulletHijackInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    UNiagaraSystem* MuzzleEffect;
    
    UPROPERTY(BlueprintReadOnly)
    FVector MuzzleLocation;
    
    UPROPERTY(BlueprintReadOnly)
    FRotator MuzzleRotation;
    
    UPROPERTY(BlueprintReadOnly)
    float BulrAngle;
    
    UPROPERTY(BlueprintReadOnly)
    TSubclassOf<AActor> AmmoClass;
    
    UPROPERTY(BlueprintReadOnly)
    FTransform AmmoEjectTransform;
    
    PAL_API FPalWeaponBulletHijackInfo();
};

