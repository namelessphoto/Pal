#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractionMechanic -FallbackName=InteractionMechanic
#include "LatticeControlPointsMechanic.generated.h"

class APreviewGeometryActor;
class UCombinedTransformGizmo;
class ULineSetComponent;
class UPointSetComponent;
class URectangleMarqueeMechanic;
class UTransformProxy;

UCLASS(NonTransient)
class MODELINGCOMPONENTS_API ULatticeControlPointsMechanic : public UInteractionMechanic {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    APreviewGeometryActor* PreviewGeometryActor;
    
    UPROPERTY(Instanced)
    UPointSetComponent* DrawnControlPoints;
    
    UPROPERTY(Instanced)
    ULineSetComponent* DrawnLatticeEdges;
    
    UPROPERTY()
    UTransformProxy* PointTransformProxy;
    
    UPROPERTY()
    UCombinedTransformGizmo* PointTransformGizmo;
    
    UPROPERTY()
    URectangleMarqueeMechanic* MarqueeMechanic;
    
public:
    ULatticeControlPointsMechanic();

};

