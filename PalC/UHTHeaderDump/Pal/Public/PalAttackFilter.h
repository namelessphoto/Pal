#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EPalAdditionalEffectType.h"
#include "EPalBlowVelocityOwner.h"
#include "EPalElementType.h"
#include "EPalWazaID.h"
#include "PalHitFilter.h"
#include "PalAttackFilter.generated.h"

class AActor;
class UNiagaraSystem;

UCLASS(EditInlineNew)
class UPalAttackFilter : public UPalHitFilter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnAttackDelegate OnAttackDelegate;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPalWazaID Waza;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPalBlowVelocityOwner VelocityOwner;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FVector NativeBlowVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float WazaPowerRate;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UNiagaraSystem> OverrideHitEffect;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPalElementType OverrideElementType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPalAdditionalEffectType OverrideAdditionalEffectType1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPalAdditionalEffectType OverrideAdditionalEffectType2;
    
private:
    UPROPERTY(Transient)
    AActor* Attacker;
    
public:
    UPalAttackFilter();

};

