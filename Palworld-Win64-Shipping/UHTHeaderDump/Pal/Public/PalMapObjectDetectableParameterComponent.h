#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "PalMapObjectDetectableParameterComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalMapObjectDetectableParameterComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPalMapObjectDetectableParameterComponent(const FObjectInitializer& ObjectInitializer);

};

