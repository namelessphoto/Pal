#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractionMechanic -FallbackName=InteractionMechanic
#include "PolygonSelectionMechanic.generated.h"

class APreviewGeometryActor;
class UMaterialInterface;
class UMouseHoverBehavior;
class UPolygonSelectionMechanicProperties;
class URectangleMarqueeMechanic;
class USingleClickOrDragInputBehavior;
class UTriangleSetComponent;

UCLASS(NonTransient)
class MODELINGCOMPONENTS_API UPolygonSelectionMechanic : public UInteractionMechanic {
    GENERATED_BODY()
public:
    UPROPERTY()
    UPolygonSelectionMechanicProperties* Properties;
    
protected:
    UPROPERTY()
    UMouseHoverBehavior* HoverBehavior;
    
    UPROPERTY()
    USingleClickOrDragInputBehavior* ClickOrDragBehavior;
    
    UPROPERTY()
    URectangleMarqueeMechanic* MarqueeMechanic;
    
    UPROPERTY()
    APreviewGeometryActor* PreviewGeometryActor;
    
    UPROPERTY(Instanced)
    UTriangleSetComponent* DrawnTriangleSetComponent;
    
    UPROPERTY()
    UMaterialInterface* HighlightedFaceMaterial;
    
public:
    UPolygonSelectionMechanic();

};

