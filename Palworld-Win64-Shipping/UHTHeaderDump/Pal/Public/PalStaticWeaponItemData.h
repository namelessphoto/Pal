#pragma once
#include "CoreMinimal.h"
#include "PalStaticItemDataBase.h"
#include "PalStaticWeaponItemData.generated.h"

UCLASS()
class PAL_API UPalStaticWeaponItemData : public UPalStaticItemDataBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 MxgazineSize;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float SneakAttackRate;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 AttackValua;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 DefenseValua;
    
public:
    UPalStaticWeaponItemData();

    UFUNCTION(BlueprintPure)
    int32 GetWeaponDefense() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetWeaponBaseDamage() const;
    
    UFUNCTION(BlueprintPure)
    float GetSneakAttackRate() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetMaxMagazineSize() const;
    
};

