#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EWeaponAnimationType.h"
#include "WeaponAnimationInfo.h"
#include "PalShooterAnimeAssetBase.generated.h"

class UAnimMontage;

UCLASS(BlueprintType)
class PAL_API UPalShooterAnimeAssetBase : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FWeaponAnimationInfo AnimeInfo;
    
public:
    UPalShooterAnimeAssetBase();

protected:
    UFUNCTION(BlueprintCallable)
    void ChangeRideMontage(UAnimMontage* NextAnim, EWeaponAnimationType AnimType);
    
};

