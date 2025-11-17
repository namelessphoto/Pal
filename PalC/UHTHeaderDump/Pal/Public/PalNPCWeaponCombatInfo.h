#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "PalNPCWeaponCombatInfo.generated.h"

class UPalAIActionBase;
class UPalStateMachineStateBase;

USTRUCT(BlueprintType)
struct FPalNPCWeaponCombatInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UPalAIActionBase> CombatAIActionClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 NPCWeaponRange_Near_cm;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 NPCWeaponRange_Far_cm;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ShootInterval;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 MxgazineSize;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 MaxShootCount;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ReloadTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RandomMoveTime_Min;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float AimOffset_Height;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool UseSideDashMovement;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool UseReloadMotion;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool MeleeAttackWithGun;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float AimRotateSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UPalStateMachineStateBase> FireStateClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SphereCastRadius;
    
    PAL_API FPalNPCWeaponCombatInfo();
};

