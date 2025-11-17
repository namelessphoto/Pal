#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "PalMapObjectDamageReactionComponent.generated.h"

class UPalHitEffectSlot;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalMapObjectDamageReactionComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    UPalHitEffectSlot* EffectSlot;
    
public:
    UPalMapObjectDamageReactionComponent(const FObjectInitializer& ObjectInitializer);

};

