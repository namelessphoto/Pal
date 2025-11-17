#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "PalMapObjectRaidBossSummonParameterComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalMapObjectRaidBossSummonParameterComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPalMapObjectRaidBossSummonParameterComponent(const FObjectInitializer& ObjectInitializer);

};

