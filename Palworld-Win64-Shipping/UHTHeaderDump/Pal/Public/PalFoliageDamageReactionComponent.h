#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "PalFoliageDamageReactionComponent.generated.h"

class UPalHitEffectSlot;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalFoliageDamageReactionComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    UPalHitEffectSlot* EffectSlot;
    
public:
    UPalFoliageDamageReactionComponent(const FObjectInitializer& ObjectInitializer);

};

