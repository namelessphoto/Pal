#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "PalCaptureReactionComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalCaptureReactionComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPalCaptureReactionComponent(const FObjectInitializer& ObjectInitializer);

};

