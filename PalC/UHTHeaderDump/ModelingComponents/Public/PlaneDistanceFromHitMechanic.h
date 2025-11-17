#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractionMechanic -FallbackName=InteractionMechanic
#include "PlaneDistanceFromHitMechanic.generated.h"

UCLASS(NonTransient)
class MODELINGCOMPONENTS_API UPlaneDistanceFromHitMechanic : public UInteractionMechanic {
    GENERATED_BODY()
public:
    UPlaneDistanceFromHitMechanic();

};

