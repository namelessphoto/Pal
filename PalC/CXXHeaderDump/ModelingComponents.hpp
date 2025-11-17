#ifndef UE4SS_SDK_ModelingComponents_HPP
#define UE4SS_SDK_ModelingComponents_HPP

#include "ModelingComponents_enums.hpp"

struct FCreateMeshObjectParams
{
    class UPrimitiveComponent* SourceComponent;
    ECreateObjectTypeHint TypeHint;
    UClass* TypeHintClass;
    int32 TypeHintExtended;
    class UWorld* TargetWorld;
    FTransform Transform;
    FString BaseName;
    TArray<class UMaterialInterface*> Materials;
    TArray<class UMaterialInterface*> AssetMaterials;
    bool bEnableCollision;
    TEnumAsByte<ECollisionTraceFlag> CollisionMode;
    bool bEnableRaytracingSupport;
    bool bEnableRecomputeNormals;
    bool bEnableRecomputeTangents;
    bool bEnableNanite;
    float NaniteProxyTrianglePercent;
    FMeshNaniteSettings NaniteSettings;

};

struct FCreateMeshObjectResult
{
    ECreateModelingObjectResult ResultCode;
    class AActor* NewActor;
    class UPrimitiveComponent* NewComponent;
    class UObject* NewAsset;

};

struct FCreateTextureObjectParams
{
    int32 TypeHintExtended;
    class UWorld* TargetWorld;
    class UObject* StoreRelativeToObject;
    FString BaseName;
    class UTexture2D* GeneratedTransientTexture;

};

struct FCreateTextureObjectResult
{
    ECreateModelingObjectResult ResultCode;
    class UObject* NewAsset;

};

struct FModelingToolsAxisFilter
{
    bool bAxisX;
    bool bAxisY;
    bool bAxisZ;

};

struct FRenderableTriangle
{
    class UMaterialInterface* Material;
    FRenderableTriangleVertex Vertex0;
    FRenderableTriangleVertex Vertex1;
    FRenderableTriangleVertex Vertex2;

};

struct FRenderableTriangleVertex
{
    FVector Position;
    FVector2D UV;
    FVector Normal;
    FColor Color;

};

class APreviewGeometryActor : public AInternalToolFrameworkActor
{
};

class APreviewMeshActor : public AInternalToolFrameworkActor
{
};

class IDynamicMeshCommitter : public IInterface
{
};

class IDynamicMeshProvider : public IInterface
{
};

class IPersistentDynamicMeshSource : public IInterface
{
};

class IToolActivityHost : public IInterface
{
};

class UBaseCreateFromSelectedHandleSourceProperties : public UOnAcceptHandleSourcesProperties
{
    EBaseCreateFromSelectedTargetType OutputWriteTo;
    FString OutputNewName;
    FString OutputExistingName;

};

class UBaseCreateFromSelectedTool : public UMultiSelectionMeshEditingTool
{
    class UTransformInputsToolProperties* TransformProperties;
    class UCreateMeshObjectTypeProperties* OutputTypeProperties;
    class UBaseCreateFromSelectedHandleSourceProperties* HandleSourcesProperties;
    class UMeshOpPreviewWithBackgroundCompute* Preview;
    TArray<class UTransformProxy*> TransformProxies;
    TArray<class UCombinedTransformGizmo*> TransformGizmos;

};

class UBaseCreateFromSelectedToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{
};

class UBaseMeshProcessingTool : public USingleSelectionTool
{
    class UMeshOpPreviewWithBackgroundCompute* Preview;

};

class UBaseMeshProcessingToolBuilder : public UInteractiveToolWithToolTargetsBuilder
{
};

class UBaseVoxelTool : public UBaseCreateFromSelectedTool
{
    class UVoxelProperties* VoxProperties;

};

class UCollectSurfacePathMechanic : public UInteractionMechanic
{
};

class UConstructionPlaneMechanic : public UInteractionMechanic
{
    class UCombinedTransformGizmo* PlaneTransformGizmo;
    class UTransformProxy* PlaneTransformProxy;
    class USingleClickInputBehavior* ClickToSetPlaneBehavior;

};

class UCreateMeshObjectTypeProperties : public UInteractiveToolPropertySet
{
    FString OutputType;
    TSubclassOf<class AVolume> VolumeType;
    TArray<FString> OutputTypeNamesList;
    bool bShowVolumeList;

    bool ShouldShowPropertySet();
    TArray<FString> GetOutputTypeNamesFunc();
    ECreateObjectTypeHint GetCurrentCreateMeshType();
};

class UCurveControlPointsMechanic : public UInteractionMechanic
{
    class USingleClickInputBehavior* ClickBehavior;
    class UMouseHoverBehavior* HoverBehavior;
    class APreviewGeometryActor* PreviewGeometryActor;
    class UPointSetComponent* DrawnControlPoints;
    class ULineSetComponent* DrawnControlSegments;
    class UPointSetComponent* PreviewPoint;
    class ULineSetComponent* PreviewSegment;
    class UTransformProxy* PointTransformProxy;
    class UCombinedTransformGizmo* PointTransformGizmo;

};

class UDEPRECATED_PersistentMeshSelectionManager : public UObject
{
    class UInteractiveToolsContext* ParentContext;
    class UPersistentMeshSelection* ActiveSelection;
    class UPreviewGeometry* SelectionDisplay;

};

class UDragAlignmentMechanic : public UInteractionMechanic
{
};

class UDynamicMeshReplacementChangeTarget : public UObject
{
};

class UGeometrySelectionEditCommand : public UInteractiveCommand
{
};

class UGeometrySelectionEditCommandArguments : public UInteractiveCommandArguments
{
};

class UGeometrySelectionManager : public UObject
{
    class UGeometrySelectionEditCommandArguments* SelectionArguments;
    class UInteractiveToolsContext* ToolsContext;
    class UPersistentMeshSelection* OldSelection;

};

class UInteractiveToolActivity : public UInteractionMechanic
{
};

class ULatticeControlPointsMechanic : public UInteractionMechanic
{
    class APreviewGeometryActor* PreviewGeometryActor;
    class UPointSetComponent* DrawnControlPoints;
    class ULineSetComponent* DrawnLatticeEdges;
    class UTransformProxy* PointTransformProxy;
    class UCombinedTransformGizmo* PointTransformGizmo;
    class URectangleMarqueeMechanic* MarqueeMechanic;

};

class ULineSetComponent : public UMeshComponent
{
    class UMaterialInterface* LineMaterial;
    FBoxSphereBounds Bounds;
    bool bBoundsDirty;

};

class UMeshElementsVisualizer : public UPreviewGeometry
{
    class UMeshElementsVisualizerProperties* Settings;
    class UMeshWireframeComponent* WireframeComponent;

};

class UMeshElementsVisualizerProperties : public UInteractiveToolPropertySet
{
    bool bVisible;
    bool bShowWireframe;
    bool bShowBorders;
    bool bShowUVSeams;
    bool bShowNormalSeams;
    bool bShowColorSeams;
    float ThicknessScale;
    FColor WireframeColor;
    FColor BoundaryEdgeColor;
    FColor UVSeamColor;
    FColor NormalSeamColor;
    FColor ColorSeamColor;
    float DepthBias;
    bool bAdjustDepthBiasUsingMeshSize;

};

class UMeshOpPreviewWithBackgroundCompute : public UObject
{
    class UPreviewMesh* PreviewMesh;
    TArray<class UMaterialInterface*> StandardMaterials;
    class UMaterialInterface* OverrideMaterial;
    class UMaterialInterface* WorkingMaterial;
    class UMaterialInterface* SecondaryMaterial;
    TWeakObjectPtr<class UWorld> PreviewWorld;

};

class UMeshSurfacePointMeshEditingToolBuilder : public UMeshSurfacePointToolBuilder
{
};

class UMeshWireframeComponent : public UMeshComponent
{
    float LineDepthBias;
    float LineDepthBiasSizeScale;
    float ThicknessScale;
    bool bEnableWireframe;
    FColor WireframeColor;
    float WireframeThickness;
    bool bEnableBoundaryEdges;
    FColor BoundaryEdgeColor;
    float BoundaryEdgeThickness;
    bool bEnableUVSeams;
    FColor UVSeamColor;
    float UVSeamThickness;
    bool bEnableNormalSeams;
    FColor NormalSeamColor;
    float NormalSeamThickness;
    bool bEnableColorSeams;
    FColor ColorSeamColor;
    float ColorSeamThickness;
    class UMaterialInterface* LineMaterial;
    FBoxSphereBounds LocalBounds;

};

class UModelingComponentsSettings : public UDeveloperSettings
{
    bool bEnableRayTracingWhileEditing;
    bool bEnableRayTracing;
    bool bEnableCollision;
    TEnumAsByte<ECollisionTraceFlag> CollisionMode;

};

class UModelingObjectsCreationAPI : public UObject
{

    FCreateTextureObjectResult CreateTextureObject(const FCreateTextureObjectParams& CreateTexParams);
    FCreateMeshObjectResult CreateMeshObject(const FCreateMeshObjectParams& CreateMeshParams);
};

class UModelingSceneSnappingManager : public USceneSnappingManager
{
    class UInteractiveToolsContext* ParentContext;

};

class UMultiSelectionMeshEditingTool : public UMultiSelectionTool
{
    TWeakObjectPtr<class UWorld> TargetWorld;

};

class UMultiSelectionMeshEditingToolBuilder : public UInteractiveToolWithToolTargetsBuilder
{
};

class UMultiTransformer : public UObject
{
    class UInteractiveGizmoManager* GizmoManager;
    class UCombinedTransformGizmo* TransformGizmo;
    class UTransformProxy* TransformProxy;
    class UDragAlignmentMechanic* DragAlignmentMechanic;

};

class UOctreeDynamicMeshComponent : public UBaseDynamicMeshComponent
{
    class UDynamicMesh* MeshObject;

    void SetDynamicMesh(class UDynamicMesh* NewMesh);
};

class UOnAcceptHandleSourcesProperties : public UOnAcceptHandleSourcesPropertiesBase
{
    EHandleSourcesMethod HandleInputs;

};

class UOnAcceptHandleSourcesPropertiesBase : public UInteractiveToolPropertySet
{
};

class UOnAcceptHandleSourcesPropertiesSingle : public UOnAcceptHandleSourcesPropertiesBase
{
    EHandleSourcesMethod HandleInputs;

};

class UPersistentMeshSelection : public UObject
{
};

class UPlaneDistanceFromHitMechanic : public UInteractionMechanic
{
};

class UPointSetComponent : public UMeshComponent
{
    class UMaterialInterface* PointMaterial;
    FBoxSphereBounds Bounds;
    bool bBoundsDirty;

};

class UPolyEditPreviewMesh : public UPreviewMesh
{
};

class UPolyLassoMarqueeMechanic : public UInteractionMechanic
{
    float SpacingTolerance;
    float LineThickness;
    FLinearColor LineColor;
    FLinearColor ClosedColor;
    bool bEnableFreehandPolygons;
    bool bEnableMultiClickPolygons;
    class UClickDragInputBehavior* ClickDragBehavior;
    class UMouseHoverBehavior* HoverBehavior;

};

class UPolygonSelectionMechanic : public UInteractionMechanic
{
    class UPolygonSelectionMechanicProperties* Properties;
    class UMouseHoverBehavior* HoverBehavior;
    class USingleClickOrDragInputBehavior* ClickOrDragBehavior;
    class URectangleMarqueeMechanic* MarqueeMechanic;
    class APreviewGeometryActor* PreviewGeometryActor;
    class UTriangleSetComponent* DrawnTriangleSetComponent;
    class UMaterialInterface* HighlightedFaceMaterial;

};

class UPolygonSelectionMechanicProperties : public UInteractiveToolPropertySet
{
    bool bSelectVertices;
    bool bSelectEdges;
    bool bSelectFaces;
    bool bSelectEdgeLoops;
    bool bSelectEdgeRings;
    bool bHitBackFaces;
    bool bEnableMarquee;
    bool bMarqueeIgnoreOcclusion;
    bool bPreferProjectedElement;
    bool bSelectDownRay;
    bool bIgnoreOcclusion;

    void SelectAll();
    void InvertSelection();
};

class UPolygroupLayersProperties : public UInteractiveToolPropertySet
{
    FName ActiveGroupLayer;
    TArray<FString> GroupLayersList;

    TArray<FString> GetGroupLayersFunc();
};

class UPreviewGeometry : public UObject
{
    class APreviewGeometryActor* ParentActor;
    TMap<class FString, class ULineSetComponent*> LineSets;
    TMap<class FString, class UPointSetComponent*> PointSets;

    bool SetPointSetVisibility(FString PointSetIdentifier, bool bVisible);
    bool SetPointSetMaterial(FString PointSetIdentifier, class UMaterialInterface* NewMaterial);
    bool SetLineSetVisibility(FString LineSetIdentifier, bool bVisible);
    bool SetLineSetMaterial(FString LineSetIdentifier, class UMaterialInterface* NewMaterial);
    void SetAllPointSetsMaterial(class UMaterialInterface* Material);
    void SetAllLineSetsMaterial(class UMaterialInterface* Material);
    bool RemovePointSet(FString PointSetIdentifier, bool bDestroy);
    bool RemoveLineSet(FString LineSetIdentifier, bool bDestroy);
    void RemoveAllPointSets(bool bDestroy);
    void RemoveAllLineSets(bool bDestroy);
    class APreviewGeometryActor* GetActor();
    class UPointSetComponent* FindPointSet(FString PointSetIdentifier);
    class ULineSetComponent* FindLineSet(FString LineSetIdentifier);
    void Disconnect();
    void CreateInWorld(class UWorld* World, const FTransform& WithTransform);
    class UPointSetComponent* AddPointSet(FString PointSetIdentifier);
    class ULineSetComponent* AddLineSet(FString LineSetIdentifier);
};

class UPreviewMesh : public UObject
{
    bool bBuildSpatialDataStructure;
    class UDynamicMeshComponent* DynamicMeshComponent;

};

class URectangleMarqueeMechanic : public UInteractionMechanic
{
    bool bUseExternalClickDragBehavior;
    bool bUseExternalUpdateCameraState;
    double OnDragRectangleChangedDeferredThreshold;
    class UClickDragInputBehavior* ClickDragBehavior;

};

class USingleSelectionMeshEditingTool : public USingleSelectionTool
{
    TWeakObjectPtr<class UWorld> TargetWorld;
    class UPersistentMeshSelection* InputSelection;

};

class USingleSelectionMeshEditingToolBuilder : public UInteractiveToolWithToolTargetsBuilder
{
};

class USpaceCurveDeformationMechanic : public UInteractionMechanic
{
    class USingleClickInputBehavior* ClickBehavior;
    class UMouseHoverBehavior* HoverBehavior;
    class USpaceCurveDeformationMechanicPropertySet* TransformProperties;
    class APreviewGeometryActor* PreviewGeometryActor;
    class UPointSetComponent* RenderPoints;
    class ULineSetComponent* RenderSegments;
    class UTransformProxy* PointTransformProxy;
    class UCombinedTransformGizmo* PointTransformGizmo;

};

class USpaceCurveDeformationMechanicPropertySet : public UInteractiveToolPropertySet
{
    ESpaceCurveControlPointTransformMode TransformMode;
    ESpaceCurveControlPointOriginMode TransformOrigin;
    float Softness;
    ESpaceCurveControlPointFalloffType SoftFalloff;

};

class USpatialCurveDistanceMechanic : public UInteractionMechanic
{
};

class UTransformInputsToolProperties : public UInteractiveToolPropertySet
{
    bool bShowTransformGizmo;

};

class UTriangleSetComponent : public UMeshComponent
{
    FBoxSphereBounds Bounds;
    bool bBoundsDirty;

};

class UUVLayoutPreview : public UObject
{
    class UUVLayoutPreviewProperties* Settings;
    class UPreviewMesh* PreviewMesh;
    class UTriangleSetComponent* TriangleComponent;
    bool bShowBackingRectangle;
    class UMaterialInterface* BackingRectangleMaterial;

};

class UUVLayoutPreviewProperties : public UInteractiveToolPropertySet
{
    bool bEnabled;
    EUVLayoutPreviewSide Side;
    float Scale;
    FVector2D Offset;
    bool bShowWireframe;

};

class UVoxelProperties : public UInteractiveToolPropertySet
{
    int32 VoxelCount;
    bool bAutoSimplify;
    bool bRemoveInternalSurfaces;
    double SimplifyMaxErrorFactor;
    double CubeRootMinComponentVolume;

};

class UWeightMapSetProperties : public UInteractiveToolPropertySet
{
    FName WeightMap;
    TArray<FString> WeightMapsList;
    bool bInvertWeightMap;

    TArray<FString> GetWeightMapsFunc();
};

#endif
