#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "PalNetworkTimeComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalNetworkTimeComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPalNetworkTimeComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(Client, Reliable)
    void PreNightSkip_ToClient();
    
    UFUNCTION(Client, Reliable)
    void NightSkip_ToClient();
    
};

