#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "EPalMapObjectVisualEffectType.h"
#include "EPalStatusID.h"
#include "PalMapObjectVisualEffectInstanceSet.h"
#include "PalMapObjectVisualEffectComponent.generated.h"

class UPalMapObjectModel;
class UPalMapObjectModelEffectBase;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalMapObjectVisualEffectComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TMap<EPalMapObjectVisualEffectType, FPalMapObjectVisualEffectInstanceSet> SpawnedEffectMap;
    
public:
    UPalMapObjectVisualEffectComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION()
    void UpdateVisualByEffect(UPalMapObjectModelEffectBase* Effect);
    
    UFUNCTION()
    void OnRemoveEffect(UPalMapObjectModel* Model, UPalMapObjectModelEffectBase* Effect, const EPalStatusID statusID);
    
    UFUNCTION()
    void OnGrantedEffect(UPalMapObjectModel* Model, UPalMapObjectModelEffectBase* Effect);
    
};

