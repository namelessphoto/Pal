#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractionMechanic -FallbackName=InteractionMechanic
#include "ConstructionPlaneMechanic.generated.h"

class UCombinedTransformGizmo;
class USingleClickInputBehavior;
class UTransformProxy;

UCLASS(NonTransient)
class MODELINGCOMPONENTS_API UConstructionPlaneMechanic : public UInteractionMechanic {
    GENERATED_BODY()
public:
    UPROPERTY()
    UCombinedTransformGizmo* PlaneTransformGizmo;
    
    UPROPERTY()
    UTransformProxy* PlaneTransformProxy;
    
protected:
    UPROPERTY()
    USingleClickInputBehavior* ClickToSetPlaneBehavior;
    
public:
    UConstructionPlaneMechanic();

};

