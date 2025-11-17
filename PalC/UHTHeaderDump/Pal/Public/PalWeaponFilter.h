#pragma once
#include "CoreMinimal.h"
#include "PalHitFilter.h"
#include "PalWeaponFilter.generated.h"

class AActor;

UCLASS(EditInlineNew)
class PAL_API UPalWeaponFilter : public UPalHitFilter {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float BlowSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float BlowUpRate;
    
    UPROPERTY(EditDefaultsOnly)
    float DamageRate;
    
    UPROPERTY(EditDefaultsOnly)
    bool IsBlow;
    
private:
    UPROPERTY(Transient)
    AActor* Attacker;
    
public:
    UPalWeaponFilter();

};

