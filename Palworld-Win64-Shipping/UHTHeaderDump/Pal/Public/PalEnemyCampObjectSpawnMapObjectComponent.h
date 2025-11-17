#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "PalEnemyCampObjectSpawnMapObjectComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalEnemyCampObjectSpawnMapObjectComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPalEnemyCampObjectSpawnMapObjectComponent(const FObjectInitializer& ObjectInitializer);

};

