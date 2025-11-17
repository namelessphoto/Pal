#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GeometryFramework -ObjectName=MeshVertexCommandChangeTarget -FallbackName=MeshVertexCommandChangeTarget
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolNestedAcceptCancelAPI -FallbackName=InteractiveToolNestedAcceptCancelAPI
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=SingleSelectionMeshEditingTool -FallbackName=SingleSelectionMeshEditingTool
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=ToolActivityHost -FallbackName=ToolActivityHost
#include "EditMeshPolygonsTool.generated.h"

class UCombinedTransformGizmo;
class UDragAlignmentMechanic;
class UEditMeshPolygonsToolAcceptCancelAction;
class UEditMeshPolygonsToolActions;
class UEditMeshPolygonsToolActions_Triangles;
class UEditMeshPolygonsToolCancelAction;
class UEditMeshPolygonsToolEdgeActions;
class UEditMeshPolygonsToolEdgeActions_Triangles;
class UEditMeshPolygonsToolUVActions;
class UMeshOpPreviewWithBackgroundCompute;
class UPolyEditActivityContext;
class UPolyEditBevelEdgeActivity;
class UPolyEditCommonProperties;
class UPolyEditCutFacesActivity;
class UPolyEditExtrudeActivity;
class UPolyEditInsertEdgeActivity;
class UPolyEditInsertEdgeLoopActivity;
class UPolyEditInsetOutsetActivity;
class UPolyEditPlanarProjectionUVActivity;
class UPolyEditTopologyProperties;
class UPolygonSelectionMechanic;
class UTransformProxy;

UCLASS(NonTransient)
class MESHMODELINGTOOLS_API UEditMeshPolygonsTool : public USingleSelectionMeshEditingTool, public IToolActivityHost, public IMeshVertexCommandChangeTarget, public IInteractiveToolNestedAcceptCancelAPI {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UMeshOpPreviewWithBackgroundCompute* Preview;
    
    UPROPERTY()
    UPolyEditCommonProperties* CommonProps;
    
    UPROPERTY()
    UEditMeshPolygonsToolActions* EditActions;
    
    UPROPERTY()
    UEditMeshPolygonsToolActions_Triangles* EditActions_Triangles;
    
    UPROPERTY()
    UEditMeshPolygonsToolEdgeActions* EditEdgeActions;
    
    UPROPERTY()
    UEditMeshPolygonsToolEdgeActions_Triangles* EditEdgeActions_Triangles;
    
    UPROPERTY()
    UEditMeshPolygonsToolUVActions* EditUVActions;
    
    UPROPERTY()
    UEditMeshPolygonsToolCancelAction* CancelAction;
    
    UPROPERTY()
    UEditMeshPolygonsToolAcceptCancelAction* AcceptCancelAction;
    
    UPROPERTY()
    UPolyEditTopologyProperties* TopologyProperties;
    
    UPROPERTY()
    UPolyEditExtrudeActivity* ExtrudeActivity;
    
    UPROPERTY()
    UPolyEditInsetOutsetActivity* InsetOutsetActivity;
    
    UPROPERTY()
    UPolyEditCutFacesActivity* CutFacesActivity;
    
    UPROPERTY()
    UPolyEditPlanarProjectionUVActivity* PlanarProjectionUVActivity;
    
    UPROPERTY()
    UPolyEditInsertEdgeActivity* InsertEdgeActivity;
    
    UPROPERTY()
    UPolyEditInsertEdgeLoopActivity* InsertEdgeLoopActivity;
    
    UPROPERTY()
    UPolyEditBevelEdgeActivity* BevelEdgeActivity;
    
    UPROPERTY()
    UPolyEditActivityContext* ActivityContext;
    
    UPROPERTY()
    UPolygonSelectionMechanic* SelectionMechanic;
    
    UPROPERTY()
    UDragAlignmentMechanic* DragAlignmentMechanic;
    
    UPROPERTY()
    UCombinedTransformGizmo* TransformGizmo;
    
    UPROPERTY()
    UTransformProxy* TransformProxy;
    
public:
    UEditMeshPolygonsTool();


    // Fix for true pure virtual functions not being implemented
};

