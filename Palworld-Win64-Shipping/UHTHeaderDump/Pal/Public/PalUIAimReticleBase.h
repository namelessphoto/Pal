#pragma once
#include "CoreMinimal.h"
#include "PalItemId.h"
#include "PalUserWidget.h"
#include "PalUIAimReticleBase.generated.h"

class APalWeaponBase;
class UPalDynamicWeaponItemDataBase;
class UPalStaticItemDataBase;

UCLASS(EditInlineNew)
class PAL_API UPalUIAimReticleBase : public UPalUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bHideDefaultReticle;
    
public:
    UPalUIAimReticleBase();

    UFUNCTION(BlueprintPure)
    bool ShouldHideDefaultReticle() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTick(const float DeltaTime);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnReticleDeactivated();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnReticleActivted(const FPalItemId& WeaponItemId);
    
    UFUNCTION(BlueprintPure)
    UPalStaticItemDataBase* GetCurrentWeaponStaticItemData() const;
    
    UFUNCTION(BlueprintPure)
    UPalDynamicWeaponItemDataBase* GetCurrentWeaponDynamicItemData() const;
    
    UFUNCTION(BlueprintPure)
    APalWeaponBase* GetCurrentWeaponActor() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void DeactivateReticle();
    
    UFUNCTION(BlueprintCallable)
    void ActivateReticle(const FPalItemId& WeaponItemId);
    
};

