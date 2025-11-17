#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "PalMapObjectSpawnerDamageReactionComponent.generated.h"

class UPalHitEffectSlot;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalMapObjectSpawnerDamageReactionComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    bool bDropItemOnDamaged;
    
private:
    UPROPERTY()
    UPalHitEffectSlot* EffectSlot;
    
public:
    UPalMapObjectSpawnerDamageReactionComponent(const FObjectInitializer& ObjectInitializer);

};

