#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "PalNetworkWorldSecurityComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalNetworkWorldSecurityComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPalNetworkWorldSecurityComponent(const FObjectInitializer& ObjectInitializer);

};

