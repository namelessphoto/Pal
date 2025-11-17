#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EPalWeaponType.h"
#include "PalContainerId.h"
#include "PalNPCWeaponGenerator.generated.h"

class APalWeaponBase;

UCLASS(Blueprintable)
class PAL_API UPalNPCWeaponGenerator : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TMap<EPalWeaponType, FName> WeaponIDMap;
    
private:
    UPROPERTY(Transient)
    FPalContainerId WeaponContainerId;
    
    UPROPERTY(Transient)
    APalWeaponBase* WeaponActorBP;
    
    UPROPERTY(Transient)
    bool IsDefaultEquipWeapon;
    
public:
    UPalNPCWeaponGenerator();

    UFUNCTION(BlueprintCallable)
    void UnequipWeapon();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnSpawnEvent(APalWeaponBase* WeaponActor);
    
public:
    UFUNCTION(BlueprintCallable)
    void GenerateWeapn(EPalWeaponType WeaponType, bool IsDefaultEquip);
    
    UFUNCTION(BlueprintCallable)
    void EquipWeapon();
    
};

