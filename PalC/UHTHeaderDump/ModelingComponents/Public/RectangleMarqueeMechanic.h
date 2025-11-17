#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractionMechanic -FallbackName=InteractionMechanic
#include "RectangleMarqueeMechanic.generated.h"

class UClickDragInputBehavior;

UCLASS(NonTransient)
class MODELINGCOMPONENTS_API URectangleMarqueeMechanic : public UInteractionMechanic {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool bUseExternalClickDragBehavior;
    
    UPROPERTY()
    bool bUseExternalUpdateCameraState;
    
    UPROPERTY()
    double OnDragRectangleChangedDeferredThreshold;
    
protected:
    UPROPERTY()
    UClickDragInputBehavior* ClickDragBehavior;
    
public:
    URectangleMarqueeMechanic();

};

