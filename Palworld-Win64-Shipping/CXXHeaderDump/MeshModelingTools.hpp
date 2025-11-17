#ifndef UE4SS_SDK_MeshModelingTools_HPP
#define UE4SS_SDK_MeshModelingTools_HPP

#include "MeshModelingTools_enums.hpp"

class UAddArrowPrimitiveTool : public UAddPrimitiveTool
{
};

class UAddBoxPrimitiveTool : public UAddPrimitiveTool
{
};

class UAddConePrimitiveTool : public UAddPrimitiveTool
{
};

class UAddCylinderPrimitiveTool : public UAddPrimitiveTool
{
};

class UAddDiscPrimitiveTool : public UAddPrimitiveTool
{
};

class UAddPrimitiveTool : public USingleClickTool
{
    class UCreateMeshObjectTypeProperties* OutputTypeProperties;
    class UProceduralShapeToolProperties* ShapeSettings;
    class UNewMeshMaterialProperties* MaterialProperties;
    class UPreviewMesh* PreviewMesh;
    class UCombinedTransformGizmo* Gizmo;
    class UDragAlignmentMechanic* DragAlignmentMechanic;
    FString AssetName;

};

class UAddPrimitiveToolBuilder : public UInteractiveToolBuilder
{
};

class UAddRectanglePrimitiveTool : public UAddPrimitiveTool
{
};

class UAddSpherePrimitiveTool : public UAddPrimitiveTool
{
};

class UAddStairsPrimitiveTool : public UAddPrimitiveTool
{
};

class UAddTorusPrimitiveTool : public UAddPrimitiveTool
{
};

class UCSGMeshesTool : public UBaseCreateFromSelectedTool
{
    class UCSGMeshesToolProperties* CSGProperties;
    class UTrimMeshesToolProperties* TrimProperties;
    TArray<class UPreviewMesh*> OriginalMeshPreviews;
    class UMaterialInstanceDynamic* PreviewsGhostMaterial;
    class ULineSetComponent* DrawnLineSet;

};

class UCSGMeshesToolBuilder : public UBaseCreateFromSelectedToolBuilder
{
};

class UCSGMeshesToolProperties : public UInteractiveToolPropertySet
{
    ECSGOperation Operation;
    bool bTryFixHoles;
    bool bTryCollapseEdges;
    float WindingThreshold;
    bool bShowNewBoundaries;
    bool bShowSubtractedMesh;
    float SubtractedMeshOpacity;
    FLinearColor SubtractedMeshColor;
    bool bUseFirstMeshMaterials;

};

class UCombineMeshesTool : public UMultiSelectionMeshEditingTool
{
    class UCombineMeshesToolProperties* BasicProperties;
    class UCreateMeshObjectTypeProperties* OutputTypeProperties;
    class UOnAcceptHandleSourcesPropertiesBase* HandleSourceProperties;

};

class UCombineMeshesToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{
};

class UCombineMeshesToolProperties : public UInteractiveToolPropertySet
{
    bool bIsDuplicateMode;
    EBaseCreateFromSelectedTargetType OutputWriteTo;
    FString OutputNewName;
    FString OutputExistingName;

};

class UCutMeshWithMeshTool : public UBaseCreateFromSelectedTool
{
    class UCutMeshWithMeshToolProperties* CutProperties;
    class UPreviewMesh* IntersectPreviewMesh;
    class ULineSetComponent* DrawnLineSet;

};

class UCutMeshWithMeshToolBuilder : public UBaseCreateFromSelectedToolBuilder
{
};

class UCutMeshWithMeshToolProperties : public UInteractiveToolPropertySet
{
    bool bTryFixHoles;
    bool bTryCollapseEdges;
    float WindingThreshold;
    bool bShowNewBoundaries;
    bool bUseFirstMeshMaterials;

};

class UDeleteGeometrySelectionCommand : public UGeometrySelectionEditCommand
{
};

class UDrawAndRevolveTool : public UInteractiveTool
{
    class UCurveControlPointsMechanic* ControlPointsMechanic;
    class UConstructionPlaneMechanic* PlaneMechanic;
    class UCreateMeshObjectTypeProperties* OutputTypeProperties;
    class URevolveToolProperties* Settings;
    class UNewMeshMaterialProperties* MaterialProperties;
    class UMeshOpPreviewWithBackgroundCompute* Preview;

};

class UDrawAndRevolveToolBuilder : public UInteractiveToolBuilder
{
};

class UDrawPolygonTool : public UInteractiveTool
{
    class UCreateMeshObjectTypeProperties* OutputTypeProperties;
    class UDrawPolygonToolStandardProperties* PolygonProperties;
    class UDrawPolygonToolSnapProperties* SnapProperties;
    class UNewMeshMaterialProperties* MaterialProperties;
    class UPreviewMesh* PreviewMesh;
    class UCombinedTransformGizmo* PlaneTransformGizmo;
    class UTransformProxy* PlaneTransformProxy;
    class UPlaneDistanceFromHitMechanic* HeightMechanic;
    class UDragAlignmentMechanic* DragAlignmentMechanic;

};

class UDrawPolygonToolBuilder : public UInteractiveToolBuilder
{
};

class UDrawPolygonToolSnapProperties : public UInteractiveToolPropertySet
{
    bool bEnableSnapping;
    bool bSnapToWorldGrid;
    bool bSnapToVertices;
    bool bSnapToEdges;
    bool bSnapToAxes;
    bool bSnapToLengths;
    bool bSnapToSurfaces;
    float SnapToSurfacesOffset;

};

class UDrawPolygonToolStandardProperties : public UInteractiveToolPropertySet
{
    EDrawPolygonDrawMode PolygonDrawMode;
    bool bAllowSelfIntersections;
    float FeatureSizeRatio;
    int32 RadialSlices;
    float Distance;
    bool bShowGridGizmo;
    EDrawPolygonExtrudeMode ExtrudeMode;
    float ExtrudeHeight;

};

class UEdgeLoopInsertionProperties : public UInteractiveToolPropertySet
{
    EEdgeLoopPositioningMode PositionMode;
    EEdgeLoopInsertionMode InsertionMode;
    int32 NumLoops;
    double ProportionOffset;
    double DistanceOffset;
    bool bInteractive;
    bool bFlipOffsetDirection;
    bool bHighlightProblemGroups;
    double VertexTolerance;

};

class UEditMeshPolygonsActionModeToolBuilder : public UEditMeshPolygonsToolBuilder
{
};

class UEditMeshPolygonsSelectionModeToolBuilder : public UEditMeshPolygonsToolBuilder
{
};

class UEditMeshPolygonsTool : public USingleSelectionMeshEditingTool
{
    class UMeshOpPreviewWithBackgroundCompute* Preview;
    class UPolyEditCommonProperties* CommonProps;
    class UEditMeshPolygonsToolActions* EditActions;
    class UEditMeshPolygonsToolActions_Triangles* EditActions_Triangles;
    class UEditMeshPolygonsToolEdgeActions* EditEdgeActions;
    class UEditMeshPolygonsToolEdgeActions_Triangles* EditEdgeActions_Triangles;
    class UEditMeshPolygonsToolUVActions* EditUVActions;
    class UEditMeshPolygonsToolCancelAction* CancelAction;
    class UEditMeshPolygonsToolAcceptCancelAction* AcceptCancelAction;
    class UPolyEditTopologyProperties* TopologyProperties;
    class UPolyEditExtrudeActivity* ExtrudeActivity;
    class UPolyEditInsetOutsetActivity* InsetOutsetActivity;
    class UPolyEditCutFacesActivity* CutFacesActivity;
    class UPolyEditPlanarProjectionUVActivity* PlanarProjectionUVActivity;
    class UPolyEditInsertEdgeActivity* InsertEdgeActivity;
    class UPolyEditInsertEdgeLoopActivity* InsertEdgeLoopActivity;
    class UPolyEditBevelEdgeActivity* BevelEdgeActivity;
    class UPolyEditActivityContext* ActivityContext;
    class UPolygonSelectionMechanic* SelectionMechanic;
    class UDragAlignmentMechanic* DragAlignmentMechanic;
    class UCombinedTransformGizmo* TransformGizmo;
    class UTransformProxy* TransformProxy;

};

class UEditMeshPolygonsToolAcceptCancelAction : public UEditMeshPolygonsToolActionPropertySet
{

    void Cancel();
    void Apply();
};

class UEditMeshPolygonsToolActionPropertySet : public UInteractiveToolPropertySet
{
};

class UEditMeshPolygonsToolActions : public UEditMeshPolygonsToolActionPropertySet
{

    void SimplifyByGroups();
    void Retriangulate();
    void RecalcNormals();
    void PushPull();
    void Outset();
    void Offset();
    void Merge();
    void Inset();
    void InsertEdgeLoop();
    void InsertEdge();
    void Flip();
    void Extrude();
    void Duplicate();
    void Disconnect();
    void Delete();
    void Decompose();
    void CutFaces();
    void Bevel();
};

class UEditMeshPolygonsToolActions_Triangles : public UEditMeshPolygonsToolActionPropertySet
{

    void RecalcNormals();
    void PushPull();
    void Poke();
    void Outset();
    void Offset();
    void Inset();
    void Flip();
    void Extrude();
    void Duplicate();
    void Disconnect();
    void Delete();
    void CutFaces();
};

class UEditMeshPolygonsToolBuilder : public USingleSelectionMeshEditingToolBuilder
{
};

class UEditMeshPolygonsToolCancelAction : public UEditMeshPolygonsToolActionPropertySet
{

    void Done();
};

class UEditMeshPolygonsToolEdgeActions : public UEditMeshPolygonsToolActionPropertySet
{

    void Weld();
    void Straighten();
    void FillHole();
    void Bridge();
    void Bevel();
};

class UEditMeshPolygonsToolEdgeActions_Triangles : public UEditMeshPolygonsToolActionPropertySet
{

    void Weld();
    void Split();
    void Flip();
    void FillHole();
    void Collapse();
};

class UEditMeshPolygonsToolUVActions : public UEditMeshPolygonsToolActionPropertySet
{

    void PlanarProjection();
};

class UExistingMeshMaterialProperties : public UInteractiveToolPropertySet
{
    ESetMeshMaterialMode MaterialMode;
    float CheckerDensity;
    class UMaterialInterface* OverrideMaterial;
    FString UVChannel;
    TArray<FString> UVChannelNamesList;
    class UMaterialInstanceDynamic* CheckerMaterial;

    TArray<FString> GetUVChannelNamesFunc();
};

class UGroupEdgeInsertionProperties : public UInteractiveToolPropertySet
{
    EGroupEdgeInsertionMode InsertionMode;
    double VertexTolerance;

};

class UMeshEditingViewProperties : public UInteractiveToolPropertySet
{
    bool bShowWireframe;
    EMeshEditingMaterialModes MaterialMode;
    bool bFlatShading;
    FLinearColor Color;
    class UTexture2D* Image;
    double Opacity;
    FLinearColor TransparentMaterialColor;
    bool bTwoSided;
    TWeakObjectPtr<class UMaterialInterface> CustomMaterial;

};

class UMeshUVChannelProperties : public UInteractiveToolPropertySet
{
    FString UVChannel;
    TArray<FString> UVChannelNamesList;

    TArray<FString> GetUVChannelNamesFunc();
};

class UNewMeshMaterialProperties : public UInteractiveToolPropertySet
{
    TWeakObjectPtr<class UMaterialInterface> Material;
    float UVScale;
    bool bWorldSpaceUVScale;
    bool bShowWireframe;
    bool bShowExtendedOptions;

};

class UPolyEditActivityContext : public UObject
{
    class UPolyEditCommonProperties* CommonProperties;
    class UMeshOpPreviewWithBackgroundCompute* Preview;
    class UPolygonSelectionMechanic* SelectionMechanic;

};

class UPolyEditBevelEdgeActivity : public UInteractiveToolActivity
{
    class UPolyEditBevelEdgeProperties* BevelProperties;
    class UPolyEditActivityContext* ActivityContext;

};

class UPolyEditBevelEdgeProperties : public UInteractiveToolPropertySet
{
    double BevelDistance;

};

class UPolyEditCommonProperties : public UInteractiveToolPropertySet
{
    bool bShowWireframe;
    bool bShowSelectableCorners;
    bool bGizmoVisible;
    ELocalFrameMode LocalFrameMode;
    bool bLockRotation;
    bool bLocalCoordSystem;

};

class UPolyEditCutFacesActivity : public UInteractiveToolActivity
{
    class UPolyEditCutProperties* CutProperties;
    class UPolyEditPreviewMesh* EditPreview;
    class UCollectSurfacePathMechanic* SurfacePathMechanic;
    class UPolyEditActivityContext* ActivityContext;

};

class UPolyEditCutProperties : public UInteractiveToolPropertySet
{
    EPolyEditCutPlaneOrientation Orientation;
    bool bSnapToVertices;

};

class UPolyEditExtrudeActivity : public UInteractiveToolActivity
{
    class UPolyEditExtrudeProperties* ExtrudeProperties;
    class UPolyEditOffsetProperties* OffsetProperties;
    class UPolyEditPushPullProperties* PushPullProperties;
    class UPlaneDistanceFromHitMechanic* ExtrudeHeightMechanic;
    class UPolyEditActivityContext* ActivityContext;

};

class UPolyEditExtrudeProperties : public UInteractiveToolPropertySet
{
    EPolyEditExtrudeDistanceMode DistanceMode;
    double Distance;
    EPolyEditExtrudeDirection Direction;
    EPolyEditExtrudeDirection MeasureDirection;
    bool bShellsToSolids;
    EPolyEditExtrudeModeOptions DirectionMode;
    double MaxDistanceScaleFactor;
    bool bUseColinearityForSettingBorderGroups;

};

class UPolyEditInsertEdgeActivity : public UInteractiveToolActivity
{
    class UGroupEdgeInsertionProperties* Settings;
    class UPolyEditActivityContext* ActivityContext;

};

class UPolyEditInsertEdgeLoopActivity : public UInteractiveToolActivity
{
    class UEdgeLoopInsertionProperties* Settings;
    class UPolyEditActivityContext* ActivityContext;

};

class UPolyEditInsetOutsetActivity : public UInteractiveToolActivity
{
    class UPolyEditInsetOutsetProperties* Settings;
    class UPolyEditPreviewMesh* EditPreview;
    class USpatialCurveDistanceMechanic* CurveDistMechanic;
    class UPolyEditActivityContext* ActivityContext;

};

class UPolyEditInsetOutsetProperties : public UInteractiveToolPropertySet
{
    float Softness;
    bool bBoundaryOnly;
    float AreaScale;
    bool bReproject;
    bool bOutset;

};

class UPolyEditOffsetProperties : public UInteractiveToolPropertySet
{
    EPolyEditExtrudeDistanceMode DistanceMode;
    double Distance;
    EPolyEditOffsetModeOptions DirectionMode;
    double MaxDistanceScaleFactor;
    bool bShellsToSolids;
    EPolyEditExtrudeDirection MeasureDirection;
    bool bUseColinearityForSettingBorderGroups;

};

class UPolyEditPlanarProjectionUVActivity : public UInteractiveToolActivity
{
    class UPolyEditSetUVProperties* SetUVProperties;
    class UPolyEditPreviewMesh* EditPreview;
    class UCollectSurfacePathMechanic* SurfacePathMechanic;
    class UPolyEditActivityContext* ActivityContext;

};

class UPolyEditPushPullProperties : public UInteractiveToolPropertySet
{
    EPolyEditExtrudeDistanceMode DistanceMode;
    double Distance;
    EPolyEditPushPullModeOptions DirectionMode;
    double MaxDistanceScaleFactor;
    bool bShellsToSolids;
    EPolyEditExtrudeDirection MeasureDirection;
    bool bUseColinearityForSettingBorderGroups;

};

class UPolyEditSetUVProperties : public UInteractiveToolPropertySet
{
    bool bShowMaterial;

};

class UPolyEditTopologyProperties : public UEditMeshPolygonsToolActionPropertySet
{
    bool bAddExtraCorners;
    double ExtraCornerAngleThresholdDegrees;

    void RegenerateExtraCorners();
};

class UProceduralArrowToolProperties : public UProceduralShapeToolProperties
{
    float ShaftRadius;
    float ShaftHeight;
    float HeadRadius;
    float HeadHeight;
    int32 RadialSlices;
    int32 HeightSubdivisions;

};

class UProceduralBoxToolProperties : public UProceduralShapeToolProperties
{
    float Width;
    float Depth;
    float Height;
    int32 WidthSubdivisions;
    int32 DepthSubdivisions;
    int32 HeightSubdivisions;

};

class UProceduralConeToolProperties : public UProceduralShapeToolProperties
{
    float Radius;
    float Height;
    int32 RadialSlices;
    int32 HeightSubdivisions;

};

class UProceduralCylinderToolProperties : public UProceduralShapeToolProperties
{
    float Radius;
    float Height;
    int32 RadialSlices;
    int32 HeightSubdivisions;

};

class UProceduralDiscToolProperties : public UProceduralShapeToolProperties
{
    EProceduralDiscType DiscType;
    float Radius;
    int32 RadialSlices;
    int32 RadialSubdivisions;
    float HoleRadius;

};

class UProceduralRectangleToolProperties : public UProceduralShapeToolProperties
{
    EProceduralRectType RectangleType;
    float Width;
    float Depth;
    int32 WidthSubdivisions;
    int32 DepthSubdivisions;
    float CornerRadius;
    int32 CornerSlices;

};

class UProceduralShapeToolProperties : public UInteractiveToolPropertySet
{
    EMakeMeshPolygroupMode PolygroupMode;
    EMakeMeshPlacementType TargetSurface;
    EMakeMeshPivotLocation PivotLocation;
    float Rotation;
    bool bAlignToNormal;
    bool bShowGizmo;
    bool bShowGizmoOptions;

};

class UProceduralSphereToolProperties : public UProceduralShapeToolProperties
{
    float Radius;
    EProceduralSphereType SubdivisionType;
    int32 Subdivisions;
    int32 HorizontalSlices;
    int32 VerticalSlices;

};

class UProceduralStairsToolProperties : public UProceduralShapeToolProperties
{
    EProceduralStairsType StairsType;
    int32 NumSteps;
    float StepWidth;
    float StepHeight;
    float StepDepth;
    float CurveAngle;
    float SpiralAngle;
    float InnerRadius;

};

class UProceduralTorusToolProperties : public UProceduralShapeToolProperties
{
    float MajorRadius;
    float MinorRadius;
    int32 MajorSlices;
    int32 MinorSlices;

};

class URecomputeUVsTool : public USingleSelectionMeshEditingTool
{
    class UMeshUVChannelProperties* UVChannelProperties;
    class URecomputeUVsToolProperties* Settings;
    class UPolygroupLayersProperties* PolygroupLayerProperties;
    class UExistingMeshMaterialProperties* MaterialSettings;
    bool bCreateUVLayoutViewOnSetup;
    class UUVLayoutPreview* UVLayoutView;
    class URecomputeUVsOpFactory* RecomputeUVsOpFactory;
    class UMeshOpPreviewWithBackgroundCompute* Preview;

};

class URecomputeUVsToolBuilder : public USingleSelectionMeshEditingToolBuilder
{
};

class URevolveOperatorFactory : public UObject
{
    class UDrawAndRevolveTool* RevolveTool;

};

class URevolveProperties : public UInteractiveToolPropertySet
{
    double RevolveDegreesClamped;
    double RevolveDegrees;
    double RevolveDegreesOffset;
    double StepsMaxDegrees;
    bool bExplicitSteps;
    int32 NumExplicitSteps;
    double HeightOffsetPerDegree;
    bool bReverseRevolutionDirection;
    bool bFlipMesh;
    bool bSharpNormals;
    double SharpNormalsDegreeThreshold;
    bool bPathAtMidpointOfStep;
    ERevolvePropertiesPolygroupMode PolygroupMode;
    ERevolvePropertiesQuadSplit QuadSplitMode;

};

class URevolveToolProperties : public URevolveProperties
{
    ERevolvePropertiesCapFillMode CapFillMode;
    bool bClosePathToAxis;
    FVector DrawPlaneOrigin;
    FRotator DrawPlaneOrientation;
    bool bEnableSnapping;
    bool bAllowedToEditDrawPlane;

};

class UTrimMeshesToolProperties : public UInteractiveToolPropertySet
{
    ETrimOperation WhichMesh;
    ETrimSide TrimSide;
    float WindingThreshold;
    bool bShowTrimmingMesh;
    float OpacityOfTrimmingMesh;
    FLinearColor ColorOfTrimmingMesh;

};

class UUVLayoutTool : public UMultiSelectionMeshEditingTool
{
    class UMeshUVChannelProperties* UVChannelProperties;
    class UUVLayoutProperties* BasicProperties;
    class UExistingMeshMaterialProperties* MaterialSettings;
    TArray<class UMeshOpPreviewWithBackgroundCompute*> Previews;
    TArray<class UUVLayoutOperatorFactory*> Factories;
    class UUVLayoutPreview* UVLayoutView;

};

class UUVLayoutToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{
};

class UUVProjectionOperatorFactory : public UObject
{
    class UUVProjectionTool* Tool;

};

class UUVProjectionTool : public USingleSelectionMeshEditingTool
{
    class UMeshUVChannelProperties* UVChannelProperties;
    class UUVProjectionToolProperties* BasicProperties;
    class UUVProjectionToolEditActions* EditActions;
    class UExistingMeshMaterialProperties* MaterialSettings;
    class UMeshOpPreviewWithBackgroundCompute* Preview;
    class UMaterialInstanceDynamic* CheckerMaterial;
    class UCombinedTransformGizmo* TransformGizmo;
    class UTransformProxy* TransformProxy;
    class UUVProjectionOperatorFactory* OperatorFactory;
    class UPreviewGeometry* EdgeRenderer;
    class USingleClickInputBehavior* ClickToSetPlaneBehavior;

};

class UUVProjectionToolBuilder : public USingleSelectionMeshEditingToolBuilder
{
};

class UUVProjectionToolEditActions : public UInteractiveToolPropertySet
{

    void Reset();
    void AutoFitAlign();
    void AutoFit();
};

class UUVProjectionToolProperties : public UInteractiveToolPropertySet
{
    EUVProjectionMethod ProjectionType;
    FVector Dimensions;
    bool bUniformDimensions;
    EUVProjectionToolInitializationMode Initialization;
    float CylinderSplitAngle;
    float ExpMapNormalBlending;
    int32 ExpMapSmoothingSteps;
    float ExpMapSmoothingAlpha;
    float Rotation;
    FVector2D Scale;
    FVector2D Translation;
    FVector SavedDimensions;
    bool bSavedUniformDimensions;
    FTransform SavedTransform;

};

#endif
