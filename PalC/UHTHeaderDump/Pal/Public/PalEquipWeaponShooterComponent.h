#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "EPalMonsterEquipWeaponSocketType.h"
#include "PalEquipWeaponInfo.h"
#include "Templates/SubclassOf.h"
#include "PalEquipWeaponShooterComponent.generated.h"

class APalMonsterEquipWeaponBase;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalEquipWeaponShooterComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TMap<EPalMonsterEquipWeaponSocketType, FPalEquipWeaponInfo> SpawnedWeaponInfoMap;
    
public:
    UPalEquipWeaponShooterComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetWeapon_ForDebug_DirectBP(EPalMonsterEquipWeaponSocketType SocketType, TSubclassOf<APalMonsterEquipWeaponBase> WeaponActorClass);
    
    UFUNCTION(BlueprintCallable)
    void SetWeapon_ForDebug(EPalMonsterEquipWeaponSocketType SocketType, FName ItemName);
    
    UFUNCTION(BlueprintCallable)
    void PullTrigger();
    
};

