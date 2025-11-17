#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "PalBulletModifierComponent.generated.h"

class APalBullet;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalBulletModifierComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPalBulletModifierComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Initialize(const APalBullet* Bullet);
    
};

