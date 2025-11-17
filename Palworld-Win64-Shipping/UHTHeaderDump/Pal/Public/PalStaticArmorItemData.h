#pragma once
#include "CoreMinimal.h"
#include "PalStaticItemDataBase.h"
#include "PalStaticArmorItemData.generated.h"

UCLASS()
class PAL_API UPalStaticArmorItemData : public UPalStaticItemDataBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 AttackValua;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 DefenseValua;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 HPValua;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 ShieldValua;
    
public:
    UPalStaticArmorItemData();

    UFUNCTION(BlueprintPure)
    int32 GetShieldValue() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetHPValue() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetDefenseValue() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetAttackValue() const;
    
};

