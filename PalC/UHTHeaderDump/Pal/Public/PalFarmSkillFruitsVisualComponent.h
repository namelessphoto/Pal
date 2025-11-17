#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ChildActorComponent -FallbackName=ChildActorComponent
#include "PalFarmSkillFruitsVisualComponent.generated.h"

class UNiagaraSystem;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalFarmSkillFruitsVisualComponent : public UChildActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    FName StaticItemId;
    
    UPROPERTY(EditDefaultsOnly)
    UNiagaraSystem* SpawnFX;
    
public:
    UPalFarmSkillFruitsVisualComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void UpdateVisual();
    
};

