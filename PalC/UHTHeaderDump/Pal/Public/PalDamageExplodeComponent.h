#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "PalDamageInfo.h"
#include "PalDamageExplodeComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalDamageExplodeComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDamageDelegate_Ex, FPalDamageInfo, DamageInfo);
    
protected:
    UPROPERTY(EditDefaultsOnly)
    float ExplosionDelayTime;
    
public:
    UPROPERTY(BlueprintAssignable)
    FOnDamageDelegate_Ex OnDamageDelegate_Ex;
    
private:
    UPROPERTY(Transient)
    bool IsExploded;
    
public:
    UPalDamageExplodeComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintImplementableEvent)
    void SpawnExplosionActor_Delay(AActor* Attacker, float DelayTime);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SpawnExplosionActor(AActor* Attacker);
    
    UFUNCTION(BlueprintCallable)
    void ForceExplode(AActor* Attacker);
    
};

