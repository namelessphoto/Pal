#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractionMechanic -FallbackName=InteractionMechanic
#include "SpaceCurveDeformationMechanic.generated.h"

class APreviewGeometryActor;
class UCombinedTransformGizmo;
class ULineSetComponent;
class UMouseHoverBehavior;
class UPointSetComponent;
class USingleClickInputBehavior;
class USpaceCurveDeformationMechanicPropertySet;
class UTransformProxy;

UCLASS(NonTransient)
class MODELINGCOMPONENTS_API USpaceCurveDeformationMechanic : public UInteractionMechanic {
    GENERATED_BODY()
public:
    UPROPERTY()
    USingleClickInputBehavior* ClickBehavior;
    
    UPROPERTY()
    UMouseHoverBehavior* HoverBehavior;
    
    UPROPERTY()
    USpaceCurveDeformationMechanicPropertySet* TransformProperties;
    
protected:
    UPROPERTY()
    APreviewGeometryActor* PreviewGeometryActor;
    
    UPROPERTY(Instanced)
    UPointSetComponent* RenderPoints;
    
    UPROPERTY(Instanced)
    ULineSetComponent* RenderSegments;
    
    UPROPERTY()
    UTransformProxy* PointTransformProxy;
    
    UPROPERTY()
    UCombinedTransformGizmo* PointTransformGizmo;
    
public:
    USpaceCurveDeformationMechanic();

};

