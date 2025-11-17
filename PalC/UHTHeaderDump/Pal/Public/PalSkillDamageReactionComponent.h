#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "PalSkillDamageReactionComponent.generated.h"

class UPalHitEffectSlot;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalSkillDamageReactionComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnDamageDelegate OnDamageDelegate;
    
private:
    UPROPERTY()
    UPalHitEffectSlot* EffectSlot;
    
public:
    UPalSkillDamageReactionComponent(const FObjectInitializer& ObjectInitializer);

};

