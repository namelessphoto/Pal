#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractionMechanic -FallbackName=InteractionMechanic
#include "CurveControlPointsMechanic.generated.h"

class APreviewGeometryActor;
class UCombinedTransformGizmo;
class ULineSetComponent;
class UMouseHoverBehavior;
class UPointSetComponent;
class USingleClickInputBehavior;
class UTransformProxy;

UCLASS(NonTransient)
class MODELINGCOMPONENTS_API UCurveControlPointsMechanic : public UInteractionMechanic {
    GENERATED_BODY()
public:
    UPROPERTY()
    USingleClickInputBehavior* ClickBehavior;
    
    UPROPERTY()
    UMouseHoverBehavior* HoverBehavior;
    
protected:
    UPROPERTY()
    APreviewGeometryActor* PreviewGeometryActor;
    
    UPROPERTY(Instanced)
    UPointSetComponent* DrawnControlPoints;
    
    UPROPERTY(Instanced)
    ULineSetComponent* DrawnControlSegments;
    
    UPROPERTY(Instanced)
    UPointSetComponent* PreviewPoint;
    
    UPROPERTY(Instanced)
    ULineSetComponent* PreviewSegment;
    
    UPROPERTY()
    UTransformProxy* PointTransformProxy;
    
    UPROPERTY()
    UCombinedTransformGizmo* PointTransformGizmo;
    
public:
    UCurveControlPointsMechanic();

};

