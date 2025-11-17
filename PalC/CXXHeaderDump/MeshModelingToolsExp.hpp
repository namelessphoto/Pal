#ifndef UE4SS_SDK_MeshModelingToolsExp_HPP
#define UE4SS_SDK_MeshModelingToolsExp_HPP

#include "MeshModelingToolsExp_enums.hpp"

struct FBakeMultiMeshDetailProperties
{
    class UStaticMesh* SourceMesh;
    class UTexture2D* SourceTexture;
    int32 SourceTextureUVLayer;

};

struct FBrushToolRadius
{
    EBrushToolSizeType SizeType;
    float AdaptiveSize;
    float WorldRadius;

};

struct FEditPivotTarget
{
    class UTransformProxy* TransformProxy;
    class UCombinedTransformGizmo* TransformGizmo;

};

struct FPerlinLayerProperties
{
    float Frequency;
    float Intensity;

};

struct FPhysicsBoxData
{
    FVector Dimensions;
    FTransform Transform;
    FKShapeElem Element;

};

struct FPhysicsCapsuleData
{
    float Radius;
    float Length;
    FTransform Transform;
    FKShapeElem Element;

};

struct FPhysicsConvexData
{
    int32 NumVertices;
    int32 NumFaces;
    FKShapeElem Element;

};

struct FPhysicsLevelSetData
{
    FKShapeElem Element;

};

struct FPhysicsSphereData
{
    float Radius;
    FTransform Transform;
    FKShapeElem Element;

};

struct FTransformMeshesTarget
{
    class UTransformProxy* TransformProxy;
    class UCombinedTransformGizmo* TransformGizmo;

};

class UAcceptOutputProperties : public UInteractiveToolPropertySet
{
    bool bExportSeparatedPiecesAsNewMeshAssets;

};

class UAddPatchTool : public USingleClickTool
{
    class UAddPatchToolProperties* ShapeSettings;
    class UNewMeshMaterialProperties* MaterialProperties;
    class UPreviewMesh* PreviewMesh;

};

class UAddPatchToolBuilder : public UInteractiveToolBuilder
{
};

class UAddPatchToolProperties : public UInteractiveToolPropertySet
{
    float Width;
    float Rotation;
    int32 Subdivisions;
    float Shift;

};

class UAlignObjectsTool : public UMultiSelectionMeshEditingTool
{
    class UAlignObjectsToolProperties* AlignProps;

};

class UAlignObjectsToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{
};

class UAlignObjectsToolProperties : public UInteractiveToolPropertySet
{
    EAlignObjectsAlignTypes AlignType;
    EAlignObjectsAlignToOptions AlignTo;
    EAlignObjectsBoxPoint BoxPosition;
    bool bAlignX;
    bool bAlignY;
    bool bAlignZ;

};

class UBakeCurvatureMapToolProperties : public UInteractiveToolPropertySet
{
    EBakeCurvatureTypeMode CurvatureType;
    EBakeCurvatureColorMode ColorMapping;
    float ColorRangeMultiplier;
    float MinRangeMultiplier;
    EBakeCurvatureClampMode Clamping;

};

class UBakeInputMeshProperties : public UInteractiveToolPropertySet
{
    class UStaticMesh* TargetStaticMesh;
    class USkeletalMesh* TargetSkeletalMesh;
    class AActor* TargetDynamicMesh;
    FString TargetUVLayer;
    bool bHasTargetUVLayer;
    class UStaticMesh* SourceStaticMesh;
    class USkeletalMesh* SourceSkeletalMesh;
    class AActor* SourceDynamicMesh;
    bool bHideSourceMesh;
    class UTexture2D* SourceNormalMap;
    FString SourceNormalMapUVLayer;
    EBakeNormalSpace SourceNormalSpace;
    bool bHasSourceNormalMap;
    float ProjectionDistance;
    bool bProjectionInWorldSpace;
    TArray<FString> TargetUVLayerNamesList;
    TArray<FString> SourceUVLayerNamesList;

    TArray<FString> GetTargetUVLayerNamesFunc();
    TArray<FString> GetSourceUVLayerNamesFunc();
};

class UBakeMeshAttributeMapsResultToolProperties : public UInteractiveToolPropertySet
{
    TMap<class EBakeMapType, class UTexture2D*> Result;

};

class UBakeMeshAttributeMapsTool : public UBakeMeshAttributeMapsToolBase
{
    class UBakeInputMeshProperties* InputMeshSettings;
    class UBakeMeshAttributeMapsToolProperties* Settings;
    class UBakeMeshAttributeMapsResultToolProperties* ResultSettings;

};

class UBakeMeshAttributeMapsToolBase : public UBakeMeshAttributeTool
{
    class UBakeVisualizationProperties* VisualizationProps;
    class UPreviewMesh* PreviewMesh;
    class UMaterialInstanceDynamic* PreviewMaterial;
    class UMaterialInstanceDynamic* BentNormalPreviewMaterial;
    TMap<class EBakeMapType, class UTexture2D*> CachedMaps;
    class UTexture2D* EmptyNormalMap;
    class UTexture2D* EmptyColorMapBlack;
    class UTexture2D* EmptyColorMapWhite;

};

class UBakeMeshAttributeMapsToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{
};

class UBakeMeshAttributeMapsToolProperties : public UInteractiveToolPropertySet
{
    int32 MapTypes;
    FString MapPreview;
    EBakeTextureResolution Resolution;
    EBakeTextureBitDepth BitDepth;
    EBakeTextureSamplesPerPixel SamplesPerPixel;
    class UTexture2D* SampleFilterMask;
    TArray<FString> MapPreviewNamesList;

    TArray<FString> GetMapPreviewNamesFunc();
};

class UBakeMeshAttributeTool : public UMultiSelectionMeshEditingTool
{
    class UBakeOcclusionMapToolProperties* OcclusionSettings;
    class UBakeCurvatureMapToolProperties* CurvatureSettings;
    class UBakeTexture2DProperties* TextureSettings;
    class UBakeMultiTexture2DProperties* MultiTextureSettings;
    class UMaterialInstanceDynamic* WorkingPreviewMaterial;
    class UMaterialInstanceDynamic* ErrorPreviewMaterial;

};

class UBakeMeshAttributeVertexTool : public UBakeMeshAttributeTool
{
    class UBakeInputMeshProperties* InputMeshSettings;
    class UBakeMeshAttributeVertexToolProperties* Settings;
    class UPreviewMesh* PreviewMesh;
    class UMaterialInstanceDynamic* PreviewMaterial;
    class UMaterialInstanceDynamic* PreviewAlphaMaterial;

};

class UBakeMeshAttributeVertexToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{
};

class UBakeMeshAttributeVertexToolProperties : public UInteractiveToolPropertySet
{
    EBakeVertexOutput OutputMode;
    int32 OutputType;
    int32 OutputTypeR;
    int32 OutputTypeG;
    int32 OutputTypeB;
    int32 OutputTypeA;
    EBakeVertexChannel PreviewMode;
    bool bSplitAtNormalSeams;
    bool bSplitAtUVSeams;

};

class UBakeMultiMeshAttributeMapsTool : public UBakeMeshAttributeMapsToolBase
{
    class UBakeMultiMeshAttributeMapsToolProperties* Settings;
    class UBakeMultiMeshInputToolProperties* InputMeshSettings;
    class UBakeMeshAttributeMapsResultToolProperties* ResultSettings;

};

class UBakeMultiMeshAttributeMapsToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{
};

class UBakeMultiMeshAttributeMapsToolProperties : public UInteractiveToolPropertySet
{
    int32 MapTypes;
    FString MapPreview;
    EBakeTextureResolution Resolution;
    EBakeTextureBitDepth BitDepth;
    EBakeTextureSamplesPerPixel SamplesPerPixel;
    class UTexture2D* SampleFilterMask;
    TArray<FString> MapPreviewNamesList;

    TArray<FString> GetMapPreviewNamesFunc();
};

class UBakeMultiMeshInputToolProperties : public UInteractiveToolPropertySet
{
    class UStaticMesh* TargetStaticMesh;
    class USkeletalMesh* TargetSkeletalMesh;
    class AActor* TargetDynamicMesh;
    FString TargetUVLayer;
    TArray<FBakeMultiMeshDetailProperties> SourceMeshes;
    float ProjectionDistance;
    TArray<FString> TargetUVLayerNamesList;

    TArray<FString> GetTargetUVLayerNamesFunc();
};

class UBakeMultiTexture2DProperties : public UInteractiveToolPropertySet
{
    TArray<class UTexture2D*> MaterialIDSourceTextures;
    FString UVLayer;
    TArray<FString> UVLayerNamesList;
    TArray<class UTexture2D*> AllSourceTextures;

    TArray<FString> GetUVLayerNamesFunc();
};

class UBakeNormalMapToolProperties : public UInteractiveToolPropertySet
{
};

class UBakeOcclusionMapToolProperties : public UInteractiveToolPropertySet
{
    int32 OcclusionRays;
    float MaxDistance;
    float SpreadAngle;
    float BiasAngle;

};

class UBakeRenderCaptureInputToolProperties : public UInteractiveToolPropertySet
{
    class UStaticMesh* TargetStaticMesh;
    FString TargetUVLayer;
    TArray<FString> TargetUVLayerNamesList;

    TArray<FString> GetTargetUVLayerNamesFunc();
    int32 GetTargetUVLayerIndex();
};

class UBakeRenderCaptureResults : public UInteractiveToolPropertySet
{
    class UTexture2D* BaseColorMap;
    class UTexture2D* NormalMap;
    class UTexture2D* PackedMRSMap;
    class UTexture2D* MetallicMap;
    class UTexture2D* RoughnessMap;
    class UTexture2D* SpecularMap;
    class UTexture2D* EmissiveMap;

};

class UBakeRenderCaptureTool : public UBakeMeshAttributeMapsToolBase
{
    TArray<class AActor*> Actors;
    class UBakeRenderCaptureToolProperties* Settings;
    class URenderCaptureProperties* RenderCaptureProperties;
    class UBakeRenderCaptureInputToolProperties* InputMeshSettings;
    class UBakeRenderCaptureResults* ResultSettings;
    class UTexture2D* EmptyEmissiveMap;
    class UTexture2D* EmptyPackedMRSMap;
    class UTexture2D* EmptyRoughnessMap;
    class UTexture2D* EmptyMetallicMap;
    class UTexture2D* EmptySpecularMap;
    class UMaterialInstanceDynamic* PreviewMaterialRC;
    class UMaterialInstanceDynamic* PreviewMaterialPackedRC;
    class URenderCaptureProperties* ComputedRenderCaptureProperties;

};

class UBakeRenderCaptureToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{
};

class UBakeRenderCaptureToolProperties : public UInteractiveToolPropertySet
{
    FString MapPreview;
    TArray<FString> MapPreviewNamesList;
    EBakeTextureSamplesPerPixel SamplesPerPixel;
    EBakeTextureResolution TextureSize;
    float ValidSampleDepthThreshold;

    TArray<FString> GetMapPreviewNamesFunc();
};

class UBakeTexture2DProperties : public UInteractiveToolPropertySet
{
    class UTexture2D* SourceTexture;
    FString UVLayer;
    TArray<FString> UVLayerNamesList;

    TArray<FString> GetUVLayerNamesFunc();
};

class UBakeTransformTool : public UMultiSelectionMeshEditingTool
{
    class UBakeTransformToolProperties* BasicProperties;

};

class UBakeTransformToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{
};

class UBakeTransformToolProperties : public UInteractiveToolPropertySet
{
    bool bBakeRotation;
    EBakeScaleMethod BakeScale;
    bool bRecenterPivot;
    bool bAllowNoScale;

};

class UBakeVisualizationProperties : public UInteractiveToolPropertySet
{
    bool bPreviewAsMaterial;
    float Brightness;
    float AOMultiplier;

};

class UBaseKelvinletBrushOpProps : public UMeshSculptBrushOpProps
{
    float Stiffness;
    float Incompressiblity;
    int32 BrushSteps;

};

class UBasePlaneBrushOpProps : public UMeshSculptBrushOpProps
{
};

class UBaseSmoothBrushOpProps : public UMeshSculptBrushOpProps
{
};

class UBrushRemeshProperties : public URemeshProperties
{
    bool bEnableRemeshing;
    int32 TriangleSize;
    int32 PreserveDetail;
    int32 Iterations;

};

class UCollisionGeometryVisualizationProperties : public UInteractiveToolPropertySet
{
    float LineThickness;
    bool bShowHidden;
    bool bRandomColors;
    FColor Color;

};

class UConvertMeshesTool : public UMultiSelectionMeshEditingTool
{
    class UConvertMeshesToolProperties* BasicProperties;
    class UCreateMeshObjectTypeProperties* OutputTypeProperties;

};

class UConvertMeshesToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{
};

class UConvertMeshesToolProperties : public UInteractiveToolPropertySet
{
    bool bTransferMaterials;

};

class UConvertToPolygonsOperatorFactory : public UObject
{
    class UConvertToPolygonsTool* ConvertToPolygonsTool;

};

class UConvertToPolygonsTool : public USingleSelectionMeshEditingTool
{
    class UConvertToPolygonsToolProperties* Settings;
    class UPolygroupLayersProperties* CopyFromLayerProperties;
    class UOutputPolygroupLayerProperties* OutputProperties;
    class UMeshOpPreviewWithBackgroundCompute* PreviewCompute;
    class UPreviewGeometry* PreviewGeometry;

};

class UConvertToPolygonsToolBuilder : public USingleSelectionMeshEditingToolBuilder
{
};

class UConvertToPolygonsToolProperties : public UInteractiveToolPropertySet
{
    EConvertToPolygonsMode ConversionMode;
    float AngleTolerance;
    int32 NumPoints;
    bool bSplitExisting;
    bool bNormalWeighted;
    float NormalWeighting;
    float QuadAdjacencyWeight;
    float QuadMetricClamp;
    int32 QuadSearchRounds;
    bool bRespectUVSeams;
    bool bRespectHardNormals;
    int32 MinGroupSize;
    bool bCalculateNormals;
    bool bShowGroupColors;

};

class UCubeGridDuringActivityActions : public UInteractiveToolPropertySet
{

    void Done();
    void Cancel();
};

class UCubeGridTool : public UInteractiveTool
{
    class UCombinedTransformGizmo* GridGizmo;
    class UDragAlignmentMechanic* GridGizmoAlignmentMechanic;
    class UTransformProxy* GridGizmoTransformProxy;
    class UPreviewGeometry* LineSets;
    class UClickDragInputBehavior* ClickDragBehavior;
    class UMouseHoverBehavior* HoverBehavior;
    class ULocalSingleClickInputBehavior* CtrlMiddleClickBehavior;
    class ULocalClickDragInputBehavior* MiddleClickDragBehavior;
    class UCubeGridToolProperties* Settings;
    class UCubeGridToolActions* ToolActions;
    class UCubeGridDuringActivityActions* DuringActivityActions;
    class UNewMeshMaterialProperties* MaterialProperties;
    class UCreateMeshObjectTypeProperties* OutputTypeProperties;
    class UToolTarget* Target;
    class UMeshOpPreviewWithBackgroundCompute* Preview;

};

class UCubeGridToolActions : public UInteractiveToolPropertySet
{
    class AActor* GridSourceActor;

    void SlideForward();
    void SlideBack();
    void ResetGridFromActor();
    void Push();
    void Pull();
    void Flip();
    void CornerMode();
};

class UCubeGridToolBuilder : public UInteractiveToolWithToolTargetsBuilder
{
};

class UCubeGridToolProperties : public UInteractiveToolPropertySet
{
    FVector GridFrameOrigin;
    FRotator GridFrameOrientation;
    bool bShowGizmo;
    uint8 GridPower;
    double CurrentBlockSize;
    int32 BlocksPerStep;
    bool bPowerOfTwoBlockSizes;
    double BlockBaseSize;
    bool bCrosswiseDiagonal;
    bool bKeepSideGroups;
    double PlaneTolerance;
    bool bHitUnrelatedGeometry;
    bool bHitGridGroundPlaneIfCloser;
    ECubeGridToolFaceSelectionMode FaceSelectionMode;
    FString ToggleCornerMode;
    FString PushPull;
    FString ResizeGrid;
    FString SlideSelection;
    FString FlipSelection;
    FString GridGizmo;
    FString QuickShiftGizmo;
    FString AlignGizmo;
    bool bInCornerMode;
    bool bAllowedToEditGrid;

};

class UDeformMeshPolygonsTool : public UMeshSurfacePointTool
{
    class AInternalToolFrameworkActor* PreviewMeshActor;
    class UDynamicMeshComponent* DynamicMeshComponent;
    class UDeformMeshPolygonsTransformProperties* TransformProps;

};

class UDeformMeshPolygonsToolBuilder : public UMeshSurfacePointMeshEditingToolBuilder
{
};

class UDeformMeshPolygonsTransformProperties : public UInteractiveToolPropertySet
{
    EGroupTopologyDeformationStrategy DeformationStrategy;
    EQuickTransformerMode TransformMode;
    bool bSelectFaces;
    bool bSelectEdges;
    bool bSelectVertices;
    bool bShowWireframe;
    EWeightScheme SelectedWeightScheme;
    double HandleWeight;
    bool bPostFixHandles;

};

class UDiffusionSmoothProperties : public UInteractiveToolPropertySet
{
    float SmoothingPerStep;
    int32 Steps;
    bool bPreserveUVs;

};

class UDisplaceMeshCommonProperties : public UInteractiveToolPropertySet
{
    EDisplaceMeshToolDisplaceType DisplacementType;
    float DisplaceIntensity;
    int32 RandomSeed;
    EDisplaceMeshToolSubdivisionType SubdivisionType;
    int32 Subdivisions;
    FName WeightMap;
    TArray<FString> WeightMapsList;
    bool bInvertWeightMap;
    bool bShowWireframe;
    bool bDisableSizeWarning;

    TArray<FString> GetWeightMapsFunc();
};

class UDisplaceMeshDirectionalFilterProperties : public UInteractiveToolPropertySet
{
    bool bEnableFilter;
    FVector FilterDirection;
    float FilterWidth;

};

class UDisplaceMeshPerlinNoiseProperties : public UInteractiveToolPropertySet
{
    TArray<FPerlinLayerProperties> PerlinLayerProperties;

};

class UDisplaceMeshSineWaveProperties : public UInteractiveToolPropertySet
{
    float SineWaveFrequency;
    float SineWavePhaseShift;
    FVector SineWaveDirection;

};

class UDisplaceMeshTextureMapProperties : public UInteractiveToolPropertySet
{
    class UTexture2D* DisplacementMap;
    EDisplaceMeshToolChannelType Channel;
    float DisplacementMapBaseValue;
    FVector2D UVScale;
    FVector2D UVOffset;
    bool bApplyAdjustmentCurve;
    class UCurveFloat* AdjustmentCurve;
    bool bRecalcNormals;

};

class UDisplaceMeshTool : public USingleSelectionMeshEditingTool
{
    class UDisplaceMeshCommonProperties* CommonProperties;
    class UDisplaceMeshDirectionalFilterProperties* DirectionalFilterProperties;
    class UDisplaceMeshTextureMapProperties* TextureMapProperties;
    class UDisplaceMeshPerlinNoiseProperties* NoiseProperties;
    class UDisplaceMeshSineWaveProperties* SineWaveProperties;
    class USelectiveTessellationProperties* SelectiveTessellationProperties;
    class UCurveFloat* ActiveContrastCurveTarget;
    class AInternalToolFrameworkActor* PreviewMeshActor;
    class UDynamicMeshComponent* DynamicMeshComponent;

};

class UDisplaceMeshToolBuilder : public USingleSelectionMeshEditingToolBuilder
{
};

class UDrawPolyPathExtrudeProperties : public UInteractiveToolPropertySet
{
    EDrawPolyPathExtrudeDirection Direction;

};

class UDrawPolyPathProperties : public UInteractiveToolPropertySet
{
    EDrawPolyPathWidthMode WidthMode;
    float Width;
    bool bRoundedCorners;
    EDrawPolyPathRadiusMode RadiusMode;
    float CornerRadius;
    int32 RadialSlices;
    bool bSinglePolyGroup;
    EDrawPolyPathExtrudeMode ExtrudeMode;
    float ExtrudeHeight;
    float RampStartRatio;

};

class UDrawPolyPathTool : public UInteractiveTool
{
    class UCreateMeshObjectTypeProperties* OutputTypeProperties;
    class UDrawPolyPathProperties* TransformProps;
    class UDrawPolyPathExtrudeProperties* ExtrudeProperties;
    class UNewMeshMaterialProperties* MaterialProperties;
    class UConstructionPlaneMechanic* PlaneMechanic;
    class UPolyEditPreviewMesh* EditPreview;
    class UPlaneDistanceFromHitMechanic* ExtrudeHeightMechanic;
    class USpatialCurveDistanceMechanic* CurveDistMechanic;
    class UCollectSurfacePathMechanic* SurfacePathMechanic;

};

class UDrawPolyPathToolBuilder : public UMeshSurfacePointToolBuilder
{
};

class UDynamicMeshBrushProperties : public UInteractiveToolPropertySet
{
    FBrushToolRadius BrushSize;
    float BrushFalloffAmount;
    float Depth;
    bool bHitBackFaces;

};

class UDynamicMeshBrushSculptProperties : public UInteractiveToolPropertySet
{
    bool bIsRemeshingEnabled;
    EDynamicMeshSculptBrushType PrimaryBrushType;
    float PrimaryBrushSpeed;
    bool bPreserveUVFlow;
    bool bFreezeTarget;
    float SmoothBrushSpeed;
    bool bDetailPreservingSmooth;

};

class UDynamicMeshBrushTool : public UBaseBrushTool
{
    class UPreviewMesh* PreviewMesh;

};

class UDynamicMeshSculptTool : public UMeshSurfacePointTool
{
    class UDynamicMeshBrushProperties* BrushProperties;
    class UDynamicMeshBrushSculptProperties* SculptProperties;
    class USculptMaxBrushProperties* SculptMaxBrushProperties;
    class UKelvinBrushProperties* KelvinBrushProperties;
    class UBrushRemeshProperties* RemeshProperties;
    class UFixedPlaneBrushProperties* GizmoProperties;
    class UMeshEditingViewProperties* ViewProperties;
    class UDynamicSculptToolActions* SculptToolActions;
    class UBrushStampIndicator* BrushIndicator;
    class UMaterialInstanceDynamic* BrushIndicatorMaterial;
    class UPreviewMesh* BrushIndicatorMesh;
    class UOctreeDynamicMeshComponent* DynamicMeshComponent;
    class UMaterialInstanceDynamic* ActiveOverrideMaterial;
    class UCombinedTransformGizmo* PlaneTransformGizmo;
    class UTransformProxy* PlaneTransformProxy;

};

class UDynamicMeshSculptToolBuilder : public UMeshSurfacePointMeshEditingToolBuilder
{
};

class UDynamicSculptToolActions : public UInteractiveToolPropertySet
{

    void DiscardAttributes();
};

class UEditNormalsAdvancedProperties : public UInteractiveToolPropertySet
{
};

class UEditNormalsOperatorFactory : public UObject
{
    class UEditNormalsTool* Tool;

};

class UEditNormalsTool : public UMultiSelectionMeshEditingTool
{
    class UEditNormalsToolProperties* BasicProperties;
    class UEditNormalsAdvancedProperties* AdvancedProperties;
    class UPolygroupLayersProperties* PolygroupLayerProperties;
    TArray<class UMeshOpPreviewWithBackgroundCompute*> Previews;

};

class UEditNormalsToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{
};

class UEditNormalsToolProperties : public UInteractiveToolPropertySet
{
    bool bRecomputeNormals;
    ENormalCalculationMethod NormalCalculationMethod;
    bool bFixInconsistentNormals;
    bool bInvertNormals;
    ESplitNormalMethod SplitNormalMethod;
    float SharpEdgeAngleThreshold;
    bool bAllowSharpVertices;

};

class UEditPivotTool : public UMultiSelectionMeshEditingTool
{
    class UEditPivotToolProperties* TransformProps;
    class UEditPivotToolActionPropertySet* EditPivotActions;
    TArray<FEditPivotTarget> ActiveGizmos;
    class UDragAlignmentMechanic* DragAlignmentMechanic;

};

class UEditPivotToolActionPropertySet : public UInteractiveToolPropertySet
{
    bool bUseWorldBox;

    void WorldOrigin();
    void Top();
    void Right();
    void Left();
    void Front();
    void Center();
    void Bottom();
    void Back();
};

class UEditPivotToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{
};

class UEditPivotToolProperties : public UInteractiveToolPropertySet
{
    bool bEnableSnapDragging;
    EEditPivotSnapDragRotationMode RotationMode;

};

class UEditUVIslandsTool : public UMeshSurfacePointTool
{
    class UExistingMeshMaterialProperties* MaterialSettings;
    class UMaterialInstanceDynamic* CheckerMaterial;
    class AInternalToolFrameworkActor* PreviewMeshActor;
    class UDynamicMeshComponent* DynamicMeshComponent;
    class UPolygonSelectionMechanic* SelectionMechanic;
    class UMultiTransformer* MultiTransformer;

};

class UEditUVIslandsToolBuilder : public UMeshSurfacePointMeshEditingToolBuilder
{
};

class UEraseBrushOpProps : public UMeshSculptBrushOpProps
{
    float Strength;
    float Falloff;

};

class UExtractCollisionGeometryTool : public USingleSelectionMeshEditingTool
{
    class UCreateMeshObjectTypeProperties* OutputTypeProperties;
    class UExtractCollisionToolProperties* Settings;
    class UCollisionGeometryVisualizationProperties* VizSettings;
    class UPhysicsObjectToolPropertySet* ObjectProps;
    class UPreviewGeometry* PreviewElements;
    class UPreviewMesh* PreviewMesh;

};

class UExtractCollisionGeometryToolBuilder : public USingleSelectionMeshEditingToolBuilder
{
};

class UExtractCollisionToolProperties : public UInteractiveToolPropertySet
{
    EExtractCollisionOutputType CollisionType;
    bool bWeldEdges;
    bool bOutputSeparateMeshes;
    bool bShowPreview;
    bool bShowInputMesh;

};

class UFixedPlaneBrushOpProps : public UBasePlaneBrushOpProps
{
    float Strength;
    float Falloff;
    float Depth;
    EPlaneBrushSideMode WhichSide;

};

class UFixedPlaneBrushProperties : public UInteractiveToolPropertySet
{
    bool bPropertySetEnabled;
    bool bShowGizmo;
    FVector Position;
    FQuat Rotation;

};

class UFlattenBrushOpProps : public UMeshSculptBrushOpProps
{
    float Strength;
    float Falloff;
    float Depth;
    EPlaneBrushSideMode WhichSide;

};

class UGroupEraseBrushOpProps : public UMeshSculptBrushOpProps
{
    int32 Group;
    bool bOnlyEraseCurrent;

};

class UGroupPaintBrushFilterProperties : public UInteractiveToolPropertySet
{
    EMeshGroupPaintBrushType PrimaryBrushType;
    EMeshGroupPaintInteractionType SubToolType;
    float BrushSize;
    EMeshGroupPaintBrushAreaType BrushAreaMode;
    bool bHitBackFaces;
    int32 SetGroup;
    bool bOnlySetUngrouped;
    int32 EraseGroup;
    bool bOnlyEraseCurrent;
    float AngleThreshold;
    bool bUVSeams;
    bool bNormalSeams;
    EMeshGroupPaintVisibilityType VisibilityFilter;
    int32 MinTriVertCount;

};

class UGroupPaintBrushOpProps : public UMeshSculptBrushOpProps
{
    int32 Group;
    bool bOnlyPaintUngrouped;

};

class UHoleFillOperatorFactory : public UObject
{
    class UHoleFillTool* FillTool;

};

class UHoleFillStatisticsProperties : public UInteractiveToolPropertySet
{
    FString InitialHoles;
    FString SelectedHoles;
    FString SuccessfulFills;
    FString FailedFills;
    FString RemainingHoles;

};

class UHoleFillTool : public USingleSelectionMeshEditingTool
{
    class USmoothHoleFillProperties* SmoothHoleFillProperties;
    class UHoleFillToolProperties* Properties;
    class UHoleFillToolActions* Actions;
    class UHoleFillStatisticsProperties* Statistics;
    class UMeshOpPreviewWithBackgroundCompute* Preview;
    class UPolygonSelectionMechanic* SelectionMechanic;

};

class UHoleFillToolActions : public UInteractiveToolPropertySet
{

    void SelectAll();
    void Clear();
};

class UHoleFillToolBuilder : public USingleSelectionMeshEditingToolBuilder
{
};

class UHoleFillToolProperties : public UInteractiveToolPropertySet
{
    EHoleFillOpFillType FillType;
    bool bRemoveIsolatedTriangles;
    bool bQuickFillSmallHoles;

};

class UImplicitOffsetProperties : public UInteractiveToolPropertySet
{
    float Smoothness;
    bool bPreserveUVs;

};

class UImplicitSmoothProperties : public UInteractiveToolPropertySet
{
    float SmoothSpeed;
    float Smoothness;
    bool bPreserveUVs;
    float VolumeCorrection;

};

class UInflateBrushOpProps : public UMeshSculptBrushOpProps
{
    float Strength;
    float Falloff;

};

class UIterativeOffsetProperties : public UInteractiveToolPropertySet
{
    int32 Steps;
    bool bOffsetBoundaries;
    float SmoothingPerStep;
    bool bReprojectSmooth;

};

class UIterativeSmoothProperties : public UInteractiveToolPropertySet
{
    float SmoothingPerStep;
    int32 Steps;
    bool bSmoothBoundary;

};

class UKelvinBrushProperties : public UInteractiveToolPropertySet
{
    float FalloffDistance;
    float Stiffness;
    float Incompressiblity;
    int32 BrushSteps;

};

class ULatticeDeformerOperatorFactory : public UObject
{
    class ULatticeDeformerTool* LatticeDeformerTool;

};

class ULatticeDeformerTool : public USingleSelectionMeshEditingTool
{
    class ULatticeControlPointsMechanic* ControlPointsMechanic;
    class ULatticeDeformerToolProperties* Settings;
    class UMeshOpPreviewWithBackgroundCompute* Preview;
    bool bLatticeDeformed;

};

class ULatticeDeformerToolBuilder : public USingleSelectionMeshEditingToolBuilder
{
};

class ULatticeDeformerToolProperties : public UInteractiveToolPropertySet
{
    int32 XAxisResolution;
    int32 YAxisResolution;
    int32 ZAxisResolution;
    float Padding;
    ELatticeInterpolationType InterpolationType;
    bool bDeformNormals;
    bool bCanChangeResolution;
    EToolContextCoordinateSystem GizmoCoordinateSystem;
    bool bSetPivotMode;
    bool bSoftDeformation;

    void Constrain();
    void ClearConstraints();
};

class UMeshAnalysisProperties : public UInteractiveToolPropertySet
{
    FString SurfaceArea;
    FString Volume;

};

class UMeshAttributePaintBrushOperationProperties : public UInteractiveToolPropertySet
{
    EBrushActionMode BrushAction;

};

class UMeshAttributePaintEditActions : public UInteractiveToolPropertySet
{
};

class UMeshAttributePaintTool : public UDynamicMeshBrushTool
{
    class UMeshAttributePaintBrushOperationProperties* BrushActionProps;
    class UMeshAttributePaintToolProperties* AttribProps;

};

class UMeshAttributePaintToolBuilder : public UMeshSurfacePointMeshEditingToolBuilder
{
};

class UMeshAttributePaintToolProperties : public UInteractiveToolPropertySet
{
    FString Attribute;

    TArray<FString> GetAttributeNames();
};

class UMeshBoundaryToolBase : public USingleSelectionMeshEditingTool
{
    class UPolygonSelectionMechanic* SelectionMechanic;

};

class UMeshConstraintProperties : public UInteractiveToolPropertySet
{
    bool bPreserveSharpEdges;
    EMeshBoundaryConstraint MeshBoundaryConstraint;
    EGroupBoundaryConstraint GroupBoundaryConstraint;
    EMaterialBoundaryConstraint MaterialBoundaryConstraint;
    bool bPreventNormalFlips;
    bool bPreventTinyTriangles;

};

class UMeshGroupPaintTool : public UMeshSculptToolBase
{
    class UPolygroupLayersProperties* PolygroupLayerProperties;
    class UGroupPaintBrushFilterProperties* FilterProperties;
    class UGroupPaintBrushOpProps* PaintBrushOpProperties;
    class UGroupEraseBrushOpProps* EraseBrushOpProperties;
    class UMeshGroupPaintToolFreezeActions* FreezeActions;
    class UPolyLassoMarqueeMechanic* PolyLassoMechanic;
    class AInternalToolFrameworkActor* PreviewMeshActor;
    class UDynamicMeshComponent* DynamicMeshComponent;
    class UMeshElementsVisualizer* MeshElementsDisplay;

};

class UMeshGroupPaintToolActionPropertySet : public UInteractiveToolPropertySet
{
};

class UMeshGroupPaintToolBuilder : public UMeshSurfacePointMeshEditingToolBuilder
{
};

class UMeshGroupPaintToolFreezeActions : public UMeshGroupPaintToolActionPropertySet
{

    void UnfreezeAll();
    void ShrinkCurrent();
    void GrowCurrent();
    void FreezeOthers();
    void FreezeCurrent();
    void FloodFillCurrent();
    void ClearCurrent();
    void ClearAll();
};

class UMeshInspectorProperties : public UInteractiveToolPropertySet
{
    bool bWireframe;
    bool bBoundaryEdges;
    bool bBowtieVertices;
    bool bPolygonBorders;
    bool bUVSeams;
    bool bUVBowties;
    bool bMissingUVs;
    bool bNormalSeams;
    bool bNormalVectors;
    bool bTangentVectors;
    float NormalLength;
    float TangentLength;

};

class UMeshInspectorTool : public USingleSelectionMeshEditingTool
{
    class UMeshInspectorProperties* Settings;
    class UExistingMeshMaterialProperties* MaterialSettings;
    class UPreviewMesh* PreviewMesh;
    class ULineSetComponent* DrawnLineSet;
    class UMaterialInterface* DefaultMaterial;

};

class UMeshInspectorToolBuilder : public USingleSelectionMeshEditingToolBuilder
{
};

class UMeshSculptBrushOpProps : public UInteractiveToolPropertySet
{
};

class UMeshSculptToolBase : public UMeshSurfacePointTool
{
    class USculptBrushProperties* BrushProperties;
    class UWorkPlaneProperties* GizmoProperties;
    TMap<int32, UMeshSculptBrushOpProps*> BrushOpPropSets;
    TMap<int32, UMeshSculptBrushOpProps*> SecondaryBrushOpPropSets;
    class UMeshEditingViewProperties* ViewProperties;
    class UMaterialInstanceDynamic* ActiveOverrideMaterial;
    class UBrushStampIndicator* BrushIndicator;
    bool bIsVolumetricIndicator;
    class UMaterialInstanceDynamic* BrushIndicatorMaterial;
    class UPreviewMesh* BrushIndicatorMesh;
    class UCombinedTransformGizmo* PlaneTransformGizmo;
    class UTransformProxy* PlaneTransformProxy;

};

class UMeshSelectionEditActions : public UMeshSelectionToolActionPropertySet
{

    void Shrink();
    void SelectAll();
    void OptimizeBorder();
    void LargestTriCountPart();
    void LargestAreaPart();
    void Invert();
    void Grow();
    void FloodFill();
    void Clear();
};

class UMeshSelectionMeshEditActions : public UMeshSelectionToolActionPropertySet
{

    void SmoothBorder();
    void Separate();
    void FlipNormals();
    void Duplicate();
    void Disconnect();
    void Delete();
    void CreatePolygroup();
};

class UMeshSelectionTool : public UDynamicMeshBrushTool
{
    class UMeshSelectionToolProperties* SelectionProps;
    class UMeshSelectionEditActions* SelectionActions;
    class UMeshSelectionToolActionPropertySet* EditActions;
    class UMeshStatisticsProperties* MeshStatisticsProperties;
    class UMeshElementsVisualizer* MeshElementsDisplay;
    class UMeshUVChannelProperties* UVChannelProperties;
    class UPolygroupLayersProperties* PolygroupLayerProperties;
    class UMeshSelectionSet* Selection;
    TArray<class AActor*> SpawnedActors;

};

class UMeshSelectionToolActionPropertySet : public UInteractiveToolPropertySet
{
};

class UMeshSelectionToolBuilder : public UMeshSurfacePointMeshEditingToolBuilder
{
};

class UMeshSelectionToolProperties : public UInteractiveToolPropertySet
{
    EMeshSelectionToolPrimaryMode SelectionMode;
    float AngleTolerance;
    bool bHitBackFaces;
    bool bShowPoints;
    EMeshFacesColorMode FaceColorMode;

};

class UMeshSpaceDeformerTool : public USingleSelectionMeshEditingTool
{
    class UMeshSpaceDeformerToolProperties* Settings;
    class UMeshSpaceDeformerToolActionPropertySet* ToolActions;
    class UGizmoTransformChangeStateTarget* StateTarget;
    class UDragAlignmentMechanic* DragAlignmentMechanic;
    class UMeshOpPreviewWithBackgroundCompute* Preview;
    class UPreviewMesh* OriginalMeshPreview;
    class UIntervalGizmo* IntervalGizmo;
    class UCombinedTransformGizmo* TransformGizmo;
    class UTransformProxy* TransformProxy;
    class UGizmoLocalFloatParameterSource* UpIntervalSource;
    class UGizmoLocalFloatParameterSource* DownIntervalSource;
    class UGizmoLocalFloatParameterSource* ForwardIntervalSource;

};

class UMeshSpaceDeformerToolActionPropertySet : public UInteractiveToolPropertySet
{

    void ShiftToCenter();
};

class UMeshSpaceDeformerToolBuilder : public USingleSelectionMeshEditingToolBuilder
{
};

class UMeshSpaceDeformerToolProperties : public UInteractiveToolPropertySet
{
    ENonlinearOperationType SelectedOperationType;
    float UpperBoundsInterval;
    float LowerBoundsInterval;
    float BendDegrees;
    float TwistDegrees;
    EFlareProfileType FlareProfileType;
    float FlarePercentY;
    bool bLockXAndYFlaring;
    float FlarePercentX;
    bool bLockBottom;
    bool bShowOriginalMesh;
    bool bDrawVisualization;
    bool bAlignToNormalOnCtrlClick;

};

class UMeshStatisticsProperties : public UInteractiveToolPropertySet
{
    FString Mesh;
    FString UV;
    FString Attributes;

};

class UMeshSymmetryProperties : public UInteractiveToolPropertySet
{
    bool bEnableSymmetry;
    bool bSymmetryCanBeEnabled;

};

class UMeshVertexSculptTool : public UMeshSculptToolBase
{
    class UVertexBrushSculptProperties* SculptProperties;
    class UVertexBrushAlphaProperties* AlphaProperties;
    class UTexture2D* BrushAlpha;
    class UMeshSymmetryProperties* SymmetryProperties;
    class AInternalToolFrameworkActor* PreviewMeshActor;
    class UDynamicMeshComponent* DynamicMeshComponent;

};

class UMeshVertexSculptToolBuilder : public UMeshSurfacePointMeshEditingToolBuilder
{
};

class UMirrorOperatorFactory : public UObject
{
    class UMirrorTool* MirrorTool;

};

class UMirrorTool : public UMultiSelectionMeshEditingTool
{
    class UMirrorToolProperties* Settings;
    class UMirrorToolActionPropertySet* ToolActions;
    TArray<class UDynamicMeshReplacementChangeTarget*> MeshesToMirror;
    TArray<class UMeshOpPreviewWithBackgroundCompute*> Previews;
    class UConstructionPlaneMechanic* PlaneMechanic;

};

class UMirrorToolActionPropertySet : public UInteractiveToolPropertySet
{

    void Up();
    void ShiftToCenter();
    void Right();
    void Left();
    void Forward();
    void Down();
    void Backward();
};

class UMirrorToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{
};

class UMirrorToolProperties : public UInteractiveToolPropertySet
{
    EMirrorOperationMode OperationMode;
    bool bCropAlongMirrorPlaneFirst;
    bool bWeldVerticesOnMirrorPlane;
    double PlaneTolerance;
    bool bAllowBowtieVertexCreation;
    EMirrorCtrlClickBehavior CtrlClickBehavior;
    bool bButtonsOnlyChangeOrientation;
    bool bShowPreview;
    EMirrorSaveMode SaveMode;

};

class UMoveBrushOpProps : public UMeshSculptBrushOpProps
{
    float Strength;
    float Falloff;
    float Depth;
    FModelingToolsAxisFilter AxisFilters;

};

class UOffsetMeshTool : public UBaseMeshProcessingTool
{
    class UOffsetMeshToolProperties* OffsetProperties;
    class UIterativeOffsetProperties* IterativeProperties;
    class UImplicitOffsetProperties* ImplicitProperties;
    class UOffsetWeightMapSetProperties* WeightMapProperties;

};

class UOffsetMeshToolBuilder : public UBaseMeshProcessingToolBuilder
{
};

class UOffsetMeshToolProperties : public UInteractiveToolPropertySet
{
    EOffsetMeshToolOffsetType OffsetType;
    float Distance;
    bool bCreateShell;

};

class UOffsetWeightMapSetProperties : public UWeightMapSetProperties
{
    float minDistance;

};

class UOutputPolygroupLayerProperties : public UInteractiveToolPropertySet
{
    FName GroupLayer;
    TArray<FString> OptionsList;
    bool bShowNewLayerName;
    FString NewLayerName;

    TArray<FString> GetGroupOptionsList();
};

class UPatternTool : public UMultiSelectionMeshEditingTool
{
    class UPatternToolSettings* Settings;
    class UPatternTool_LinearSettings* LinearSettings;
    class UPatternTool_GridSettings* GridSettings;
    class UPatternTool_RadialSettings* RadialSettings;
    class UPatternTool_RotationSettings* RotationSettings;
    class UPatternTool_TranslationSettings* TranslationSettings;
    class UPatternTool_ScaleSettings* ScaleSettings;
    class UPatternTool_OutputSettings* OutputSettings;
    class UTransformProxy* TransformProxy_End;
    class UCombinedTransformGizmo* TransformGizmo_End;
    class UDragAlignmentMechanic* DragAlignmentMechanic;
    class UConstructionPlaneMechanic* PlaneMechanic;
    TSet<UPrimitiveComponent*> AllComponents;
    class UPreviewGeometry* PreviewGeometry;

};

class UPatternToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{
};

class UPatternToolSettings : public UInteractiveToolPropertySet
{
    EPatternToolShape Shape;
    EPatternToolSingleAxis SingleAxis;
    EPatternToolSinglePlane SinglePlane;
    bool bHideSources;
    int32 Seed;

};

class UPatternTool_GridSettings : public UInteractiveToolPropertySet
{
    EPatternToolAxisSpacingMode SpacingX;
    int32 CountX;
    double StepSizeX;
    double ExtentX;
    bool bCenteredX;
    EPatternToolAxisSpacingMode SpacingY;
    int32 CountY;
    double StepSizeY;
    double ExtentY;
    bool bCenteredY;

};

class UPatternTool_LinearSettings : public UInteractiveToolPropertySet
{
    EPatternToolAxisSpacingMode SpacingMode;
    int32 Count;
    double StepSize;
    double Extent;
    bool bCentered;

};

class UPatternTool_OutputSettings : public UInteractiveToolPropertySet
{
    bool bSeparateActors;
    bool bConvertToDynamic;
    bool bCreateISMCs;
    bool bHaveStaticMeshes;

};

class UPatternTool_RadialSettings : public UInteractiveToolPropertySet
{
    EPatternToolAxisSpacingMode SpacingMode;
    int32 Count;
    double StepSize;
    double Radius;
    double StartAngle;
    double EndAngle;
    double AngleShift;
    bool bOriented;

};

class UPatternTool_RotationSettings : public UInteractiveToolPropertySet
{
    bool bInterpolate;
    bool bJitter;
    FRotator StartRotation;
    FRotator EndRotation;
    FRotator RotationJitterRange;

};

class UPatternTool_ScaleSettings : public UInteractiveToolPropertySet
{
    bool bUniform;
    bool bInterpolate;
    bool bJitter;
    FVector StartScale;
    FVector EndScale;
    float ScaleJitterRange;
    FVector ScaleJitterRangeNonUniform;

};

class UPatternTool_TranslationSettings : public UInteractiveToolPropertySet
{
    bool bInterpolate;
    bool bJitter;
    FVector StartTranslation;
    FVector EndTranslation;
    FVector TranslationJitterRange;

};

class UPhysicsInspectorTool : public UMultiSelectionMeshEditingTool
{
    class UCollisionGeometryVisualizationProperties* VizSettings;
    TArray<class UPhysicsObjectToolPropertySet*> ObjectData;
    class UMaterialInterface* LineMaterial;
    TArray<class UPreviewGeometry*> PreviewElements;

};

class UPhysicsInspectorToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{
};

class UPhysicsObjectToolPropertySet : public UInteractiveToolPropertySet
{
    FString ObjectName;
    ECollisionGeometryMode CollisionType;
    TArray<FPhysicsSphereData> Spheres;
    TArray<FPhysicsBoxData> Boxes;
    TArray<FPhysicsCapsuleData> Capsules;
    TArray<FPhysicsConvexData> Convexes;
    TArray<FPhysicsLevelSetData> LevelSets;

};

class UPinchBrushOpProps : public UMeshSculptBrushOpProps
{
    float Strength;
    float Falloff;
    float Depth;
    bool bPerpDamping;

};

class UPlaneBrushOpProps : public UBasePlaneBrushOpProps
{
    float Strength;
    float Falloff;
    float Depth;
    EPlaneBrushSideMode WhichSide;

};

class UPlaneCutOperatorFactory : public UObject
{
    class UPlaneCutTool* CutTool;

};

class UPlaneCutTool : public UMultiSelectionMeshEditingTool
{
    class UPlaneCutToolProperties* BasicProperties;
    class UAcceptOutputProperties* AcceptProperties;
    TArray<class UMeshOpPreviewWithBackgroundCompute*> Previews;
    TArray<class UDynamicMeshReplacementChangeTarget*> MeshesToCut;
    class UConstructionPlaneMechanic* PlaneMechanic;

    void FlipPlane();
    void Cut();
};

class UPlaneCutToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{
};

class UPlaneCutToolProperties : public UInteractiveToolPropertySet
{
    bool bKeepBothHalves;
    float SpacingBetweenHalves;
    bool bShowPreview;
    bool bFillCutHole;
    bool bFillSpans;

};

class UProjectToTargetTool : public URemeshMeshTool
{
};

class UProjectToTargetToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{
};

class UProjectToTargetToolProperties : public URemeshMeshToolProperties
{
    bool bWorldSpace;
    bool bParallel;
    int32 FaceProjectionPassesPerRemeshIteration;
    float SurfaceProjectionSpeed;
    float NormalAlignmentSpeed;
    bool bSmoothInFillAreas;
    float FillAreaDistanceMultiplier;
    float FillAreaSmoothMultiplier;

};

class UPullKelvinletBrushOpProps : public UBaseKelvinletBrushOpProps
{
    float Falloff;
    float Depth;

};

class URemeshMeshTool : public UMultiSelectionMeshEditingTool
{
    class URemeshMeshToolProperties* BasicProperties;
    class UMeshStatisticsProperties* MeshStatisticsProperties;
    class UMeshOpPreviewWithBackgroundCompute* Preview;
    class UMeshElementsVisualizer* MeshElementsDisplay;

};

class URemeshMeshToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{
};

class URemeshMeshToolProperties : public URemeshProperties
{
    int32 TargetTriangleCount;
    ERemeshSmoothingType SmoothingType;
    bool bDiscardAttributes;
    bool bShowGroupColors;
    ERemeshType RemeshType;
    int32 RemeshIterations;
    int32 MaxRemeshIterations;
    int32 ExtraProjectionIterations;
    bool bUseTargetEdgeLength;
    float TargetEdgeLength;
    bool bReproject;
    bool bReprojectConstraints;
    float BoundaryCornerAngleThreshold;

};

class URemeshProperties : public UMeshConstraintProperties
{
    float SmoothingStrength;
    bool bFlips;
    bool bSplits;
    bool bCollapses;

};

class URemoveOccludedTrianglesAdvancedProperties : public UInteractiveToolPropertySet
{
};

class URemoveOccludedTrianglesOperatorFactory : public UObject
{
    class URemoveOccludedTrianglesTool* Tool;

};

class URemoveOccludedTrianglesTool : public UMultiSelectionMeshEditingTool
{
    class URemoveOccludedTrianglesToolProperties* BasicProperties;
    class UPolygroupLayersProperties* PolygroupLayersProperties;
    class URemoveOccludedTrianglesAdvancedProperties* AdvancedProperties;
    TArray<class UMeshOpPreviewWithBackgroundCompute*> Previews;
    TArray<class UPreviewMesh*> PreviewCopies;

};

class URemoveOccludedTrianglesToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{
};

class URemoveOccludedTrianglesToolProperties : public UInteractiveToolPropertySet
{
    EOcclusionCalculationUIMode OcclusionTestMethod;
    EOcclusionTriangleSamplingUIMode TriangleSampling;
    double WindingIsoValue;
    int32 AddRandomRays;
    int32 AddTriangleSamples;
    bool bOnlySelfOcclude;
    int32 ShrinkRemoval;
    double MinAreaIsland;
    int32 MinTriCountIsland;
    EOccludedAction action;

};

class URenderCaptureProperties : public UInteractiveToolPropertySet
{
    EBakeTextureResolution Resolution;
    bool bBaseColorMap;
    bool bNormalMap;
    bool bPackedMRSMap;
    bool bMetallicMap;
    bool bRoughnessMap;
    bool bSpecularMap;
    bool bEmissiveMap;
    bool bAntiAliasing;
    float CaptureFieldOfView;
    float NearPlaneDist;
    bool bDeviceDepthMap;

};

class URevolveBoundaryOperatorFactory : public UObject
{
    class URevolveBoundaryTool* RevolveBoundaryTool;

};

class URevolveBoundaryTool : public UMeshBoundaryToolBase
{
    class UCreateMeshObjectTypeProperties* OutputTypeProperties;
    class URevolveBoundaryToolProperties* Settings;
    class UNewMeshMaterialProperties* MaterialProperties;
    class UConstructionPlaneMechanic* PlaneMechanic;
    class UMeshOpPreviewWithBackgroundCompute* Preview;

};

class URevolveBoundaryToolBuilder : public USingleSelectionMeshEditingToolBuilder
{
};

class URevolveBoundaryToolProperties : public URevolveProperties
{
    ERevolvePropertiesCapFillMode CapFillMode;
    bool bDisplayInputMesh;
    FVector AxisOrigin;
    FVector2D AxisOrientation;

};

class UScaleKelvinletBrushOpProps : public UBaseKelvinletBrushOpProps
{
    float Strength;
    float Falloff;

};

class USculptBrushProperties : public UInteractiveToolPropertySet
{
    FBrushToolRadius BrushSize;
    float BrushFalloffAmount;
    bool bShowFalloff;
    float Depth;
    bool bHitBackFaces;
    float FlowRate;
    float Spacing;
    float Lazyness;
    bool bShowPerBrushProps;
    bool bShowLazyness;
    bool bShowFlowRate;
    bool bShowSpacing;

};

class USculptMaxBrushOpProps : public UMeshSculptBrushOpProps
{
    float Strength;
    float Falloff;
    float maxHeight;
    bool bUseFixedHeight;
    float FixedHeight;

};

class USculptMaxBrushProperties : public UInteractiveToolPropertySet
{
    float maxHeight;
    bool bFreezeCurrentHeight;

};

class USeamSculptTool : public UDynamicMeshBrushTool
{
    class USeamSculptToolProperties* Settings;
    class UPreviewGeometry* PreviewGeom;

};

class USeamSculptToolBuilder : public UMeshSurfacePointMeshEditingToolBuilder
{
};

class USeamSculptToolProperties : public UInteractiveToolPropertySet
{
    bool bShowWireframe;
    bool bHitBackFaces;

};

class USecondarySmoothBrushOpProps : public UBaseSmoothBrushOpProps
{
    float Strength;
    float Falloff;
    bool bPreserveUVFlow;

};

class USelectiveTessellationProperties : public UInteractiveToolPropertySet
{
    EDisplaceMeshToolTriangleSelectionType SelectionType;
    FName ActiveMaterial;
    TArray<FString> MaterialIDList;

    TArray<FString> GetMaterialIDsFunc();
};

class USelfUnionMeshesTool : public UBaseCreateFromSelectedTool
{
    class USelfUnionMeshesToolProperties* Properties;
    class ULineSetComponent* DrawnLineSet;

};

class USelfUnionMeshesToolBuilder : public UBaseCreateFromSelectedToolBuilder
{
};

class USelfUnionMeshesToolProperties : public UInteractiveToolPropertySet
{
    bool bTrimFlaps;
    bool bTryFixHoles;
    bool bTryCollapseEdges;
    float WindingThreshold;
    bool bShowNewBoundaryEdges;
    bool bOnlyUseFirstMeshMaterials;

};

class USetCollisionGeometryTool : public UMultiSelectionMeshEditingTool
{
    class USetCollisionGeometryToolProperties* Settings;
    class UPolygroupLayersProperties* PolygroupLayerProperties;
    class UCollisionGeometryVisualizationProperties* VizSettings;
    class UPhysicsObjectToolPropertySet* CollisionProps;
    class UMaterialInterface* LineMaterial;
    class UPreviewGeometry* PreviewGeom;

};

class USetCollisionGeometryToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{
};

class USetCollisionGeometryToolProperties : public UInteractiveToolPropertySet
{
    ECollisionGeometryType GeometryType;
    ESetCollisionGeometryInputMode InputMode;
    bool bUseWorldSpace;
    bool bRemoveContained;
    bool bEnableMaxCount;
    int32 MaxCount;
    float MinThickness;
    bool bDetectBoxes;
    bool bDetectSpheres;
    bool bDetectCapsules;
    bool bSimplifyHulls;
    int32 HullTargetFaceCount;
    int32 MaxHullsPerMesh;
    float ConvexDecompositionSearchFactor;
    float AddHullsErrorTolerance;
    float MinPartThickness;
    bool bSimplifyPolygons;
    float HullTolerance;
    EProjectedHullAxis SweepAxis;
    int32 LevelSetResolution;
    bool bAppendToExisting;
    ECollisionGeometryMode SetCollisionType;

};

class USharpPullKelvinletBrushOpProps : public UBaseKelvinletBrushOpProps
{
    float Falloff;
    float Depth;

};

class USkinWeightsBindingTool : public UMultiSelectionMeshEditingTool
{
    class USkinWeightsBindingToolProperties* Properties;
    class UMeshOpPreviewWithBackgroundCompute* Preview;

};

class USkinWeightsBindingToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{
};

class USkinWeightsBindingToolProperties : public UInteractiveToolPropertySet
{
    FBoneReference CurrentBone;
    ESkinWeightsBindType BindingType;
    float Stiffness;
    int32 MaxInfluences;
    int32 VoxelResolution;

};

class USkinWeightsPaintTool : public UDynamicMeshBrushTool
{
    class USkinWeightsPaintToolProperties* ToolProps;

};

class USkinWeightsPaintToolBuilder : public UMeshSurfacePointMeshEditingToolBuilder
{
};

class USkinWeightsPaintToolProperties : public UInteractiveToolPropertySet
{
    FBoneReference CurrentBone;

};

class USmoothBrushOpProps : public UBaseSmoothBrushOpProps
{
    float Strength;
    float Falloff;
    bool bPreserveUVFlow;

};

class USmoothFillBrushOpProps : public UBaseSmoothBrushOpProps
{
    float Strength;
    float Falloff;
    bool bPreserveUVFlow;

};

class USmoothHoleFillProperties : public UInteractiveToolPropertySet
{
    bool bConstrainToHoleInterior;
    int32 RemeshingExteriorRegionWidth;
    int32 SmoothingExteriorRegionWidth;
    int32 SmoothingInteriorRegionWidth;
    float InteriorSmoothness;
    double FillDensityScalar;
    bool bProjectDuringRemesh;

};

class USmoothMeshTool : public UBaseMeshProcessingTool
{
    class USmoothMeshToolProperties* SmoothProperties;
    class UIterativeSmoothProperties* IterativeProperties;
    class UDiffusionSmoothProperties* DiffusionProperties;
    class UImplicitSmoothProperties* ImplicitProperties;
    class USmoothWeightMapSetProperties* WeightMapProperties;

};

class USmoothMeshToolBuilder : public UBaseMeshProcessingToolBuilder
{
};

class USmoothMeshToolProperties : public UInteractiveToolPropertySet
{
    ESmoothMeshToolSmoothType SmoothingType;

};

class USmoothWeightMapSetProperties : public UWeightMapSetProperties
{
    float MinSmoothMultiplier;

};

class USpaceDeformerOperatorFactory : public UObject
{
    class UMeshSpaceDeformerTool* SpaceDeformerTool;

};

class USplitMeshesTool : public UMultiSelectionMeshEditingTool
{
    class USplitMeshesToolProperties* BasicProperties;
    class UCreateMeshObjectTypeProperties* OutputTypeProperties;

};

class USplitMeshesToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{
};

class USplitMeshesToolProperties : public UInteractiveToolPropertySet
{
    bool bTransferMaterials;

};

class UStandardSculptBrushOpProps : public UMeshSculptBrushOpProps
{
    float Strength;
    float Falloff;

};

class UTransferMeshTool : public UMultiSelectionMeshEditingTool
{
    class UTransferMeshToolProperties* BasicProperties;

};

class UTransferMeshToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{
};

class UTransferMeshToolProperties : public UInteractiveToolPropertySet
{
    bool bTransferMaterials;
    FString SourceLOD;
    FString TargetLod;
    bool bIsStaticMeshSource;
    TArray<FString> SourceLODNamesList;
    TArray<FString> TargetLODNamesList;
    bool bIsStaticMeshTarget;

    TArray<FString> GetTargetLODNamesFunc();
    TArray<FString> GetSourceLODNamesFunc();
};

class UTransformMeshesTool : public UMultiSelectionMeshEditingTool
{
    class UTransformMeshesToolProperties* TransformProps;
    TArray<FTransformMeshesTarget> ActiveGizmos;
    class UDragAlignmentMechanic* DragAlignmentMechanic;

};

class UTransformMeshesToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{
};

class UTransformMeshesToolProperties : public UInteractiveToolPropertySet
{
    ETransformMeshesTransformMode TransformMode;
    bool bApplyToInstances;
    bool bSetPivotMode;
    bool bEnableSnapDragging;
    ETransformMeshesSnapDragSource SnapDragSource;
    ETransformMeshesSnapDragRotationMode RotationMode;
    bool bHaveInstances;

};

class UTwistKelvinletBrushOpProps : public UBaseKelvinletBrushOpProps
{
    float Strength;
    float Falloff;

};

class UVertexBrushAlphaProperties : public UInteractiveToolPropertySet
{
    class UTexture2D* Alpha;
    float RotationAngle;
    bool bRandomize;
    float RandomRange;

};

class UVertexBrushSculptProperties : public UInteractiveToolPropertySet
{
    EMeshVertexSculptBrushType PrimaryBrushType;
    EMeshSculptFalloffType PrimaryFalloffType;
    EMeshVertexSculptBrushFilterType BrushFilter;
    bool bFreezeTarget;
    TWeakObjectPtr<class UMeshVertexSculptTool> Tool;

};

class UViewAlignedPlaneBrushOpProps : public UBasePlaneBrushOpProps
{
    float Strength;
    float Falloff;
    float Depth;
    EPlaneBrushSideMode WhichSide;

};

class UViewAlignedSculptBrushOpProps : public UMeshSculptBrushOpProps
{
    float Strength;
    float Falloff;

};

class UVolumeToMeshTool : public UInteractiveTool
{
    class UVolumeToMeshToolProperties* Settings;
    class UCreateMeshObjectTypeProperties* OutputTypeProperties;
    class UPreviewMesh* PreviewMesh;
    TLazyObjectPtr<class AVolume> TargetVolume;
    class ULineSetComponent* VolumeEdgesSet;

};

class UVolumeToMeshToolBuilder : public UInteractiveToolBuilder
{
};

class UVolumeToMeshToolProperties : public UInteractiveToolPropertySet
{
    bool bWeldEdges;
    bool bAutoRepair;
    bool bOptimizeMesh;
    bool bShowWireframe;

};

class UVoxelBlendMeshesTool : public UBaseVoxelTool
{
    class UVoxelBlendMeshesToolProperties* BlendProperties;

};

class UVoxelBlendMeshesToolBuilder : public UBaseCreateFromSelectedToolBuilder
{
};

class UVoxelBlendMeshesToolProperties : public UInteractiveToolPropertySet
{
    double BlendPower;
    double BlendFalloff;
    EVoxelBlendOperation Operation;
    bool bVoxWrap;
    bool bRemoveInternalsAfterVoxWrap;
    double ThickenShells;

};

class UVoxelMorphologyMeshesTool : public UBaseVoxelTool
{
    class UVoxelMorphologyMeshesToolProperties* MorphologyProperties;

};

class UVoxelMorphologyMeshesToolBuilder : public UBaseCreateFromSelectedToolBuilder
{
};

class UVoxelMorphologyMeshesToolProperties : public UInteractiveToolPropertySet
{
    EMorphologyOperation Operation;
    double Distance;
    bool bVoxWrap;
    bool bRemoveInternalsAfterVoxWrap;
    double ThickenShells;

};

class UVoxelSolidifyMeshesTool : public UBaseVoxelTool
{
    class UVoxelSolidifyMeshesToolProperties* SolidifyProperties;

};

class UVoxelSolidifyMeshesToolBuilder : public UBaseCreateFromSelectedToolBuilder
{
};

class UVoxelSolidifyMeshesToolProperties : public UInteractiveToolPropertySet
{
    double WindingThreshold;
    double ExtendBounds;
    int32 SurfaceSearchSteps;
    bool bSolidAtBoundaries;
    bool bApplyThickenShells;
    double ThickenShells;

};

class UWeldMeshEdgesOperatorFactory : public UObject
{
    class UWeldMeshEdgesTool* WeldMeshEdgesTool;

};

class UWeldMeshEdgesTool : public USingleSelectionMeshEditingTool
{
    class UWeldMeshEdgesToolProperties* Settings;
    class UMeshOpPreviewWithBackgroundCompute* PreviewCompute;
    class UMeshElementsVisualizer* MeshElementsDisplay;
    class UWeldMeshEdgesOperatorFactory* OperatorFactory;

};

class UWeldMeshEdgesToolBuilder : public USingleSelectionMeshEditingToolBuilder
{
};

class UWeldMeshEdgesToolProperties : public UInteractiveToolPropertySet
{
    float Tolerance;
    bool bOnlyUnique;
    bool bResolveTJunctions;
    int32 InitialEdges;
    int32 RemainingEdges;

};

class UWorkPlaneProperties : public UInteractiveToolPropertySet
{
    bool bPropertySetEnabled;
    bool bShowGizmo;
    FVector Position;
    FQuat Rotation;

};

#endif
