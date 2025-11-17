#pragma once
#include "CoreMinimal.h"
#include "EPalElementType.h"
#include "PalHitFilter.h"
#include "PalMonsterWeaponFilter.generated.h"

class AActor;

UCLASS(EditInlineNew)
class PAL_API UPalMonsterWeaponFilter : public UPalHitFilter {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    EPalElementType Element;
    
    UPROPERTY(EditDefaultsOnly)
    float BlowSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float BlowUpRate;
    
    UPROPERTY(EditDefaultsOnly)
    bool IsBlow;
    
private:
    UPROPERTY(Transient)
    AActor* Attacker;
    
public:
    UPalMonsterWeaponFilter();

};

