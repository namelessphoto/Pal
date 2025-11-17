#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "PalNetworkRaidBossComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalNetworkRaidBossComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPalNetworkRaidBossComponent(const FObjectInitializer& ObjectInitializer);

};

