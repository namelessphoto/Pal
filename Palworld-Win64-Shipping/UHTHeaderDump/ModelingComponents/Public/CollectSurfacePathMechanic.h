#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractionMechanic -FallbackName=InteractionMechanic
#include "CollectSurfacePathMechanic.generated.h"

UCLASS(NonTransient)
class MODELINGCOMPONENTS_API UCollectSurfacePathMechanic : public UInteractionMechanic {
    GENERATED_BODY()
public:
    UCollectSurfacePathMechanic();

};

