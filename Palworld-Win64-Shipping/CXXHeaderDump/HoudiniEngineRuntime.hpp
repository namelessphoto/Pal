#ifndef UE4SS_SDK_HoudiniEngineRuntime_HPP
#define UE4SS_SDK_HoudiniEngineRuntime_HPP

#include "HoudiniEngineRuntime_enums.hpp"

struct FAggregatedWorkItemTally : public FWorkItemTallyBase
{
    int32 TotalWorkItems;
    int32 WaitingWorkItems;
    int32 ScheduledWorkItems;
    int32 CookingWorkItems;
    int32 CookedWorkItems;
    int32 ErroredWorkItems;
    int32 CookCancelledWorkItems;

};

struct FCategoryRules
{
    TArray<FString> Include;
    TArray<FString> Exclude;

};

struct FHImageData
{
    int32 SizeX;
    int32 SizeY;
    int32 NumSlices;
    uint8 Format;
    uint8 GammaSpace;
    TArray<uint8> RawData;
    FString RawDataMD5;

};

struct FHoudiniAssetBlueprintInstanceData : public FActorComponentInstanceData
{
    class UHoudiniAsset* HoudiniAsset;
    int32 AssetId;
    EHoudiniAssetState AssetState;
    uint32 SubAssetIndex;
    uint32 AssetCookCount;
    bool bHasBeenLoaded;
    bool bHasBeenDuplicated;
    bool bPendingDelete;
    bool bRecookRequested;
    bool bRebuildRequested;
    bool bEnableCooking;
    bool bForceNeedUpdate;
    bool bLastCookSuccess;
    FGuid ComponentGUID;
    FGuid HapiGUID;
    bool bRegisteredComponentTemplate;
    FString SourceName;
    TMap<class FHoudiniOutputObjectIdentifier, class FHoudiniAssetBlueprintOutput> Outputs;
    TArray<class UHoudiniInput*> Inputs;

};

struct FHoudiniAssetBlueprintOutput
{
    int32 OutputIndex;
    FHoudiniOutputObject OutputObject;

};

struct FHoudiniBakedOutput
{
    TMap<class FHoudiniBakedOutputObjectIdentifier, class FHoudiniBakedOutputObject> BakedOutputObjects;

};

struct FHoudiniBakedOutputObject
{
    FString Actor;
    FString Blueprint;
    FName ActorBakeName;
    FString BakedObject;
    FString BakedComponent;
    TArray<FString> InstancedActors;
    TArray<FString> InstancedComponents;
    TMap<class FName, class FString> LandscapeLayers;
    TArray<FVector> FoliageInstancePositions;
    class UFoliageType* FoliageType;
    TArray<FString> LevelInstanceActors;
    FString Landscape;
    FString BakedSkeleton;

};

struct FHoudiniBakedOutputObjectIdentifier
{
    int32 PartId;
    FString SplitIdentifier;

};

struct FHoudiniBrushInfo
{
    TWeakObjectPtr<class ABrush> BrushActor;
    FTransform CachedTransform;
    FVector CachedOrigin;
    FVector CachedExtent;
    TEnumAsByte<EBrushType> CachedBrushType;
    uint64 CachedSurfaceHash;

};

struct FHoudiniClearedEditLayers
{
    TMap<class FString, class FHoudiniClearedTargetLayer> EditLayers;

};

struct FHoudiniClearedTargetLayer
{
    TSet<FString> TargetLayers;

};

struct FHoudiniCurveInfo
{
};

struct FHoudiniCurveOutputProperties
{
    EHoudiniCurveOutputType CurveOutputType;
    int32 NumPoints;
    bool bClosed;
    EHoudiniCurveType CurveType;
    EHoudiniCurveMethod CurveMethod;

};

struct FHoudiniDataLayer
{
    FString Name;
    bool bCreateIfNeeded;

};

struct FHoudiniExtents
{
    FIntPoint Min;
    FIntPoint Max;

};

struct FHoudiniGenericAttribute
{
    FString AttributeName;
    EAttribStorageType AttributeType;
    EAttribOwner AttributeOwner;
    int32 AttributeCount;
    int32 AttributeTupleSize;
    TArray<double> DoubleValues;
    TArray<int64> IntValues;
    TArray<FString> StringValues;

};

struct FHoudiniGenericAttributeChangedProperty
{
    class UObject* Object;

};

struct FHoudiniGeoInfo
{
};

struct FHoudiniGeoPartObject
{
    int32 AssetId;
    FString AssetName;
    int32 ObjectID;
    FString ObjectName;
    int32 GeoId;
    int32 PartId;
    FString PartName;
    bool bHasCustomPartName;
    TArray<FString> SplitGroups;
    FTransform TransformMatrix;
    FString NodePath;
    EHoudiniPartType Type;
    EHoudiniInstancerType InstancerType;
    FString VolumeName;
    bool bHasEditLayers;
    FString VolumeLayerName;
    int32 VolumeTileIndex;
    FString InstancerName;
    bool bIsVisible;
    bool bIsEditable;
    bool bIsTemplated;
    bool bIsInstanced;
    bool bHasGeoChanged;
    bool bHasPartChanged;
    bool bHasTransformChanged;
    bool bHasMaterialsChanged;
    TArray<FHoudiniMeshSocket> AllMeshSockets;
    TArray<FHoudiniGenericAttribute> GenericPropertyAttributes;
    bool bKeepTags;

};

struct FHoudiniHLODLayer
{
    FString Name;

};

struct FHoudiniInputObjectSettings
{
    EHoudiniXformType KeepWorldTransform;
    bool bImportAsReference;
    bool bImportAsReferenceRotScaleEnabled;
    bool bImportAsReferenceBboxEnabled;
    bool bImportAsReferenceMaterialEnabled;
    bool bExportLODs;
    bool bExportSockets;
    bool bPreferNaniteFallbackMesh;
    bool bExportColliders;
    bool bExportMaterialParameters;
    bool bAddRotAndScaleAttributesOnCurves;
    bool bUseLegacyInputCurves;
    float UnrealSplineResolution;
    EHoudiniLandscapeExportType LandscapeExportType;
    bool bLandscapeExportSelectionOnly;
    bool bLandscapeAutoSelectComponent;
    bool bLandscapeExportMaterials;
    bool bLandscapeExportLighting;
    bool bLandscapeExportNormalizedUVs;
    bool bLandscapeExportTileUVs;
    bool bLandscapeAutoSelectSplines;
    bool bLandscapeSplinesExportControlPoints;
    bool bLandscapeSplinesExportLeftRightCurves;
    bool bLandscapeSplinesExportSplineMeshComponents;
    bool bMergeSplineMeshComponents;
    bool bExportHeightDataPerEditLayer;
    bool bExportPaintLayersPerEditLayer;
    bool bExportMergedPaintLayers;
    bool bExportLevelInstanceContent;

};

struct FHoudiniInstancedOutput
{
    TSoftObjectPtr<UObject> OriginalObject;
    int32 OriginalObjectIndex;
    TArray<FTransform> OriginalTransforms;
    TArray<TSoftObjectPtr<UObject>> VariationObjects;
    TArray<FTransform> VariationTransformOffsets;
    TArray<int32> TransformVariationIndices;
    TArray<int32> OriginalInstanceIndices;
    bool bChanged;
    bool bStale;

};

struct FHoudiniLandscapeSplineControlPointData
{
    FVector Location;
    FRotator Rotation;
    float Width;

};

struct FHoudiniLandscapeSplineSegmentData
{
};

struct FHoudiniLevelInstanceParams
{
    ELevelInstanceCreationType Type;
    FString OutputName;

};

struct FHoudiniMaterialIdentifier
{
    FString MaterialObjectPath;
    bool bIsHoudiniMaterial;
    bool bMakeMaterialInstance;
    FString MaterialInstanceParametersSlug;

};

struct FHoudiniMeshSocket
{
};

struct FHoudiniObjectInfo
{
};

struct FHoudiniOutputObject
{
    class UObject* OutputObject;
    TArray<class UObject*> OutputComponents;
    TArray<TSoftObjectPtr<AActor>> OutputActors;
    class UObject* OutputComponent;
    class UObject* ProxyObject;
    class UObject* ProxyComponent;
    bool bProxyIsCurrent;
    bool bIsImplicit;
    bool bIsInvisibleCollisionMesh;
    bool bIsGeometryCollectionPiece;
    FString GeometryCollectionPieceName;
    FString BakeName;
    FHoudiniCurveOutputProperties CurveOutputProperty;
    TMap<class FString, class FString> CachedAttributes;
    TMap<class FString, class FString> CachedTokens;
    class UObject* UserFoliageType;
    class UFoliageType* FoliageType;
    class UWorld* World;
    TArray<FHoudiniDataLayer> DataLayers;
    TArray<FHoudiniHLODLayer> HLODLayers;
    FHoudiniLevelInstanceParams LevelInstanceParams;

};

struct FHoudiniOutputObjectIdentifier
{
    int32 ObjectID;
    int32 GeoId;
    int32 PartId;
    FString SplitIdentifier;
    FString PartName;
    int32 PrimitiveIndex;
    int32 PointIndex;

};

struct FHoudiniPDGWorkResultObjectBakedOutput
{
    TArray<FHoudiniBakedOutput> BakedOutputs;

};

struct FHoudiniPartInfo
{
};

struct FHoudiniSplineComponentInstanceData : public FActorComponentInstanceData
{
    TArray<FTransform> CurvePoints;
    TArray<FVector> DisplayPoints;
    TArray<int32> DisplayPointIndexDivider;

};

struct FHoudiniStaticMeshGenerationProperties
{
    uint8 bGeneratedDoubleSidedGeometry;
    class UPhysicalMaterial* GeneratedPhysMaterial;
    FBodyInstance DefaultBodyInstance;
    TEnumAsByte<ECollisionTraceFlag> GeneratedCollisionTraceFlag;
    int32 GeneratedLightMapResolution;
    FWalkableSlopeOverride GeneratedWalkableSlopeOverride;
    int32 GeneratedLightMapCoordinateIndex;
    uint8 bGeneratedUseMaximumStreamingTexelRatio;
    float GeneratedStreamingDistanceMultiplier;
    class UFoliageType_InstancedStaticMesh* GeneratedFoliageDefaultSettings;
    TArray<class UAssetUserData*> GeneratedAssetUserData;

};

struct FHoudiniVolumeInfo
{
};

struct FOutputActorOwner
{
    class AActor* OutputActor;

};

struct FTOPWorkResult
{
    int32 WorkItemIndex;
    int32 WorkItemID;
    TArray<FTOPWorkResultObject> ResultObjects;

};

struct FTOPWorkResultObject
{
    FString Name;
    FString FilePath;
    EPDGWorkResultState State;
    int32 WorkItemResultInfoIndex;
    TArray<class UHoudiniOutput*> ResultOutputs;
    bool bAutoBakedSinceLastLoad;
    FOutputActorOwner OutputActorOwner;

};

struct FUserCategoryRules
{
    TArray<FUserPackageRules> Packages;

};

struct FUserPackageRules
{
    class UHoudiniToolsPackageAsset* ToolsPackageAsset;
    TArray<FString> Include;
    TArray<FString> Exclude;

};

struct FWorkItemTally : public FWorkItemTallyBase
{
    TSet<int32> AllWorkItems;
    TSet<int32> WaitingWorkItems;
    TSet<int32> ScheduledWorkItems;
    TSet<int32> CookingWorkItems;
    TSet<int32> CookedWorkItems;
    TSet<int32> ErroredWorkItems;
    TSet<int32> CookCancelledWorkItems;

};

struct FWorkItemTallyBase
{
};

class AHoudiniAssetActor : public AActor
{
    class UHoudiniAssetComponent* HoudiniAssetComponent;

};

class IHoudiniAssetStateEvents : public IInterface
{
};

class IHoudiniEngineCopyPropertiesInterface : public IInterface
{
};

class UHoudiniAsset : public UObject
{
    FString AssetFileName;
    TArray<uint8> AssetBytes;
    uint32 AssetBytesCount;
    bool bAssetLimitedCommercial;
    bool bAssetNonCommercial;
    bool bAssetExpanded;

};

class UHoudiniAssetBlueprintComponent : public UHoudiniAssetComponent
{
    bool FauxBPProperty;
    bool bHoudiniAssetChanged;
    bool bUpdatedFromTemplate;
    bool bIsInBlueprintEditor;
    bool bCanDeleteHoudiniNodes;
    bool bHasRegisteredComponentTemplate;
    TMap<class FHoudiniOutputObjectIdentifier, class FGuid> CachedOutputNodes;
    TMap<class FGuid, class FGuid> CachedInputNodes;

    void SetToggleValueAt(FString Name, bool Value, int32 Index);
    void SetFloatParameter(FString Name, float Value, int32 Index);
    bool HasParameter(FString Name);
};

class UHoudiniAssetComponent : public UPrimitiveComponent
{
    class UHoudiniAsset* HoudiniAsset;
    bool bCookOnParameterChange;
    bool bUploadTransformsToHoudiniEngine;
    bool bCookOnTransformChange;
    bool bCookOnAssetInputCook;
    bool bOutputless;
    bool bOutputTemplateGeos;
    bool bUseOutputNodes;
    FDirectoryPath TemporaryCookFolder;
    FDirectoryPath BakeFolder;
    bool bUseDeprecatedRawMeshSupport;
    bool bSplitMeshSupport;
    FHoudiniStaticMeshGenerationProperties StaticMeshGenerationProperties;
    FMeshBuildSettings StaticMeshBuildSettings;
    bool bOverrideGlobalProxyStaticMeshSettings;
    bool bEnableProxyStaticMeshOverride;
    bool bEnableProxyStaticMeshRefinementByTimerOverride;
    float ProxyMeshAutoRefineTimeoutSecondsOverride;
    bool bEnableProxyStaticMeshRefinementOnPreSaveWorldOverride;
    bool bEnableProxyStaticMeshRefinementOnPreBeginPIEOverride;
    int32 AssetId;
    TArray<int32> NodeIdsToCook;
    TMap<int32, int32> OutputNodeCookCounts;
    TSet<UHoudiniAssetComponent*> DownstreamHoudiniAssets;
    FGuid ComponentGUID;
    FGuid HapiGUID;
    FString HapiAssetName;
    EHoudiniAssetState AssetState;
    EHoudiniAssetState DebugLastAssetState;
    EHoudiniAssetStateResult AssetStateResult;
    FTransform LastComponentTransform;
    uint32 SubAssetIndex;
    int32 AssetCookCount;
    bool bHasBeenLoaded;
    bool bHasBeenDuplicated;
    bool bPendingDelete;
    bool bRecookRequested;
    bool bRebuildRequested;
    bool bEnableCooking;
    bool bForceNeedUpdate;
    bool bLastCookSuccess;
    bool bParameterDefinitionUpdateNeeded;
    bool bBlueprintStructureModified;
    bool bBlueprintModified;
    TArray<class UHoudiniParameter*> Parameters;
    TArray<class UHoudiniInput*> Inputs;
    TArray<class UHoudiniOutput*> Outputs;
    TArray<FHoudiniBakedOutput> BakedOutputs;
    TArray<TWeakObjectPtr<AActor>> UntrackedOutputs;
    TArray<class UHoudiniHandleComponent*> HandleComponents;
    bool bHasComponentTransformChanged;
    bool bFullyLoaded;
    class UHoudiniPDGAssetLink* PDGAssetLink;
    FTimerHandle RefineMeshesTimer;
    bool bNoProxyMeshNextCookRequested;
    bool bBakeAfterNextCook;
    EHoudiniBakeAfterNextCook BakeAfterNextCook;
    bool bCachedIsPreview;
    double LastTickTime;

};

class UHoudiniEngineEditorSettings : public UDeveloperSettings
{
};

class UHoudiniHandleComponent : public USceneComponent
{
    TArray<class UHoudiniHandleParameter*> XformParms;
    class UHoudiniHandleParameter* RSTParm;
    class UHoudiniHandleParameter* RotOrderParm;
    EHoudiniHandleType HandleType;
    FString HandleName;

};

class UHoudiniHandleParameter : public UObject
{
    class UHoudiniParameter* AssetParameter;
    int32 TupleIndex;

};

class UHoudiniInput : public UObject
{
    FString Name;
    FString Label;
    EHoudiniInputType Type;
    EHoudiniInputType PreviousType;
    int32 AssetNodeId;
    int32 InputNodeId;
    int32 InputIndex;
    int32 ParmId;
    bool bIsObjectPathParameter;
    TArray<int32> CreatedDataNodeIds;
    bool bHasChanged;
    bool bNeedsToTriggerUpdate;
    FBox CachedBounds;
    FString Help;
    EHoudiniXformType KeepWorldTransform;
    bool bPackBeforeMerge;
    bool bImportAsReference;
    bool bImportAsReferenceRotScaleEnabled;
    bool bImportAsReferenceBboxEnabled;
    bool bImportAsReferenceMaterialEnabled;
    bool bExportLODs;
    bool bExportSockets;
    bool bPreferNaniteFallbackMesh;
    bool bExportColliders;
    bool bExportMaterialParameters;
    bool bDirectlyConnectHdas;
    bool bExportOptionsMenuExpanded;
    bool bGeometryInputsMenuExpanded;
    bool bLandscapeOptionsMenuExpanded;
    bool bWorldInputsMenuExpanded;
    bool bCurveInputsMenuExpanded;
    bool bCurvePointSelectionMenuExpanded;
    bool bCurvePointSelectionUseAbsLocation;
    bool bCurvePointSelectionUseAbsRotation;
    bool bCookOnCurveChanged;
    TArray<class UHoudiniInputObject*> GeometryInputObjects;
    bool bStaticMeshChanged;
    TArray<class UHoudiniInputObject*> AssetInputObjects;
    bool bInputAssetConnectedInHoudini;
    TArray<class UHoudiniInputObject*> CurveInputObjects;
    float DefaultCurveOffset;
    bool bAddRotAndScaleAttributesOnCurves;
    bool bUseLegacyInputCurves;
    TArray<class UHoudiniInputObject*> LandscapeInputObjects;
    bool bLandscapeHasExportTypeChanged;
    TArray<class UHoudiniInputObject*> WorldInputObjects;
    TArray<class AActor*> WorldInputBoundSelectorObjects;
    bool bIsWorldInputBoundSelector;
    bool bWorldInputBoundSelectorAutoUpdate;
    float UnrealSplineResolution;
    TArray<class UHoudiniInputObject*> SkeletalInputObjects;
    TArray<class UHoudiniInputObject*> GeometryCollectionInputObjects;
    TSet<ULandscapeComponent*> LandscapeSelectedComponents;
    TSet<int32> InputNodesPendingDelete;
    TArray<class UHoudiniInputHoudiniSplineComponent*> LastInsertedInputs;
    TArray<class UHoudiniInputObject*> LastUndoDeletedInputs;
    bool bUpdateInputLandscape;
    EHoudiniLandscapeExportType LandscapeExportType;
    bool bLandscapeExportSelectionOnly;
    bool bLandscapeControlVisiblity;
    bool bLandscapeAutoSelectComponent;
    bool bLandscapeExportMaterials;
    bool bLandscapeExportLighting;
    bool bLandscapeExportNormalizedUVs;
    bool bLandscapeExportTileUVs;
    bool bCanDeleteHoudiniNodes;
    bool bLandscapeAutoSelectSplines;
    bool bLandscapeSplinesExportOptionsMenuExpanded;
    bool bLandscapeSplinesExportControlPoints;
    bool bLandscapeSplinesExportLeftRightCurves;
    bool bLandscapeSplinesExportSplineMeshComponents;
    bool bMergeSplineMeshComponents;
    FHoudiniInputObjectSettings InputSettings;

};

class UHoudiniInputActor : public UHoudiniInputObject
{
    int32 SplinesMeshObjectNodeId;
    int32 SplinesMeshNodeId;
    TArray<class UHoudiniInputSceneComponent*> ActorComponents;
    TSet<TSoftObjectPtr<UObject>> ActorSceneComponents;
    int32 LastUpdateNumComponentsAdded;
    int32 LastUpdateNumComponentsRemoved;
    int32 NumSplineMeshComponents;
    FGuid GeneratedSplinesMeshPackageGuid;
    class UStaticMesh* GeneratedSplinesMesh;
    bool bUsedMergeSplinesMeshAtLastTranslate;

};

class UHoudiniInputAnimation : public UHoudiniInputObject
{
};

class UHoudiniInputBlueprint : public UHoudiniInputObject
{
    TArray<class UHoudiniInputSceneComponent*> BPComponents;
    TSet<TSoftObjectPtr<UObject>> BPSceneComponents;
    int32 LastUpdateNumComponentsAdded;
    int32 LastUpdateNumComponentsRemoved;

};

class UHoudiniInputBrush : public UHoudiniInputActor
{
    TArray<FHoudiniBrushInfo> BrushesInfo;
    class UModel* CombinedModel;
    bool bIgnoreInputObject;
    TEnumAsByte<EBrushType> CachedInputBrushType;

};

class UHoudiniInputCameraComponent : public UHoudiniInputSceneComponent
{
    float FOV;
    float AspectRatio;
    bool bIsOrthographic;
    float OrthoWidth;
    float OrthoNearClipPlane;
    float OrthoFarClipPlane;

};

class UHoudiniInputDataTable : public UHoudiniInputObject
{
};

class UHoudiniInputFoliageType_InstancedStaticMesh : public UHoudiniInputStaticMesh
{
};

class UHoudiniInputGeometryCollection : public UHoudiniInputObject
{
};

class UHoudiniInputGeometryCollectionComponent : public UHoudiniInputSceneComponent
{
};

class UHoudiniInputHoudiniAsset : public UHoudiniInputObject
{
    int32 AssetOutputIndex;
    int32 AssetId;

};

class UHoudiniInputHoudiniSplineComponent : public UHoudiniInputObject
{
    EHoudiniCurveType CurveType;
    EHoudiniCurveMethod CurveMethod;
    bool Reversed;
    class UHoudiniSplineComponent* CachedComponent;

};

class UHoudiniInputInstancedMeshComponent : public UHoudiniInputMeshComponent
{
    TArray<FTransform> InstanceTransforms;

};

class UHoudiniInputLandscape : public UHoudiniInputActor
{
    int32 CachedNumLandscapeComponents;

};

class UHoudiniInputLandscapeSplineActor : public UHoudiniInputActor
{
};

class UHoudiniInputLandscapeSplinesComponent : public UHoudiniInputSceneComponent
{
    TArray<FHoudiniLandscapeSplineControlPointData> CachedControlPoints;
    TArray<FHoudiniLandscapeSplineSegmentData> CachedSegments;
    TMap<TSoftObjectPtr<ULandscapeSplineControlPoint>, int32> ControlPointIdMap;
    int32 NextControlPointId;

};

class UHoudiniInputLevelInstance : public UHoudiniInputActor
{
    TMap<class TSoftObjectPtr<AActor>, class UHoudiniInputObject*> TrackedActorObjects;
    int32 NumActorsAddedLastUpdate;
    int32 NumActorsRemovedLastUpdate;

};

class UHoudiniInputMeshComponent : public UHoudiniInputSceneComponent
{
    TSoftObjectPtr<UStaticMesh> StaticMesh;

};

class UHoudiniInputObject : public UObject
{
    TSoftObjectPtr<UObject> InputObject;
    EHoudiniInputObjectType Type;
    FGuid Guid;
    bool bHasChanged;
    bool bNeedsToTriggerUpdate;
    bool bTransformChanged;
    TArray<FString> MaterialReferences;
    FHoudiniInputObjectSettings CachedInputSettings;
    bool bCanDeleteHoudiniNodes;
    bool bInputNodeHandleOverridesNodeIds;
    FTransform Transform;
    FRotator UserInputRotator;
    int32 InputNodeId;
    int32 InputObjectNodeId;

};

class UHoudiniInputPackedLevelActor : public UHoudiniInputActor
{
    class UHoudiniInputBlueprint* BlueprintInputObject;

};

class UHoudiniInputSceneComponent : public UHoudiniInputObject
{
    FTransform ActorTransform;
    class UHoudiniInputActor* ParentInputActor;

};

class UHoudiniInputSkeletalMesh : public UHoudiniInputObject
{
};

class UHoudiniInputSkeletalMeshComponent : public UHoudiniInputSceneComponent
{
};

class UHoudiniInputSplineComponent : public UHoudiniInputSceneComponent
{
    int32 NumberOfSplineControlPoints;
    float SplineLength;
    float SplineResolution;
    bool SplineClosed;
    TArray<FTransform> SplineControlPoints;

};

class UHoudiniInputSplineMeshComponent : public UHoudiniInputMeshComponent
{
    FGuid MeshPackageGuid;
    class UStaticMesh* GeneratedMesh;
    TEnumAsByte<ESplineMeshAxis> CachedForwardAxis;
    FSplineMeshParams CachedSplineParams;
    FVector CachedSplineUpDir;
    float CachedSplineBoundaryMax;
    float CachedSplineBoundaryMin;
    uint8 CachedbSmoothInterpRollScale;

};

class UHoudiniInputStaticMesh : public UHoudiniInputObject
{
};

class UHoudiniInstancedActorComponent : public USceneComponent
{
    class UObject* InstancedObject;
    TArray<class AActor*> InstancedActors;

};

class UHoudiniLandscapeOutput : public UObject
{
    class ALandscape* Landscape;
    FString BakedName;
    TArray<class UHoudiniLandscapeTargetLayerOutput*> Layers;
    bool bCreated;

};

class UHoudiniLandscapePtr : public UObject
{
    TSoftObjectPtr<ALandscapeProxy> LandscapeSoftPtr;
    EHoudiniLandscapeOutputBakeType BakeType;
    FName EditLayerName;

};

class UHoudiniLandscapeSplineTargetLayerOutput : public UHoudiniLandscapeTargetLayerOutput
{
    FName AfterEditLayer;
    TArray<class ULandscapeSplineSegment*> Segments;

};

class UHoudiniLandscapeSplinesOutput : public UObject
{
    class ALandscape* Landscape;
    class ALandscapeProxy* LandscapeProxy;
    class ALandscapeSplineActor* LandscapeSplineActor;
    class ULandscapeSplinesComponent* LandscapeSplinesComponent;
    TMap<class FName, class UHoudiniLandscapeSplineTargetLayerOutput*> LayerOutputs;
    TArray<class ULandscapeSplineSegment*> Segments;
    TArray<class ULandscapeSplineControlPoint*> ControlPoints;

};

class UHoudiniLandscapeTargetLayerOutput : public UObject
{
    class ALandscape* Landscape;
    class ALandscapeProxy* LandscapeProxy;
    FString BakedEditLayer;
    FString CookedEditLayer;
    FString TargetLayer;
    FHoudiniExtents Extents;
    bool bClearLayer;
    bool bCreatedLandscape;
    bool bCookedLayerRequiresBaking;
    FString BakedLandscapeName;
    TArray<class ULandscapeLayerInfoObject*> LayerInfoObjects;
    FString BakeFolder;
    class UMaterialInterface* MaterialInstance;
    bool bWriteLockedLayers;
    bool bLockLayer;
    TArray<FHoudiniGenericAttribute> PropertyAttributes;

};

class UHoudiniMeshSplitInstancerComponent : public USceneComponent
{
    TArray<class UStaticMeshComponent*> Instances;
    TArray<class UMaterialInterface*> OverrideMaterials;
    class UStaticMesh* InstancedMesh;

};

class UHoudiniNodeSyncComponent : public UHoudiniAssetComponent
{
    FString FetchNodePath;
    bool bLiveSyncEnabled;

};

class UHoudiniOutput : public UObject
{
    EHoudiniOutputType Type;
    TArray<FHoudiniGeoPartObject> HoudiniGeoPartObjects;
    TMap<class FHoudiniOutputObjectIdentifier, class FHoudiniOutputObject> OutputObjects;
    TMap<class FHoudiniOutputObjectIdentifier, class FHoudiniInstancedOutput> InstancedOutputs;
    TMap<class FString, class UMaterialInterface*> AssignementMaterials;
    TMap<class FHoudiniMaterialIdentifier, class UMaterialInterface*> AssignmentMaterialsById;
    TMap<class FString, class UMaterialInterface*> ReplacementMaterials;
    TMap<class FHoudiniMaterialIdentifier, class UMaterialInterface*> ReplacementMaterialsById;
    bool bLandscapeWorldComposition;
    TArray<class AActor*> HoudiniCreatedSocketActors;
    TArray<class AActor*> HoudiniAttachedSocketActors;
    bool bIsEditableNode;
    bool bHasEditableNodeBuilt;
    bool bIsUpdating;
    bool bCanDeleteHoudiniNodes;

};

class UHoudiniPDGAssetLink : public UObject
{
    FString AssetName;
    FString AssetNodePath;
    int32 AssetId;
    TArray<class UTOPNetwork*> AllTOPNetworks;
    int32 SelectedTOPNetworkIndex;
    EPDGLinkState LinkState;
    bool bAutoCook;
    bool bUseTOPNodeFilter;
    bool bUseTOPOutputFilter;
    FString TOPNodeFilter;
    FString TOPOutputFilter;
    int32 NumWorkItems;
    FAggregatedWorkItemTally WorkItemTally;
    FString OutputCachePath;
    bool bNeedsUIRefresh;
    class AActor* OutputParentActor;
    FDirectoryPath BakeFolder;
    int32 NumAttemptedNodeAutoBakes;
    int32 NumSuccessfulNodeAutoBakes;

};

class UHoudiniParameter : public UObject
{
    FString Name;
    FString Label;
    EHoudiniParameterType ParmType;
    EHoudiniParameterChoiceListType ChoiceListType;
    uint32 TupleSize;
    int32 NodeID;
    int32 ParmId;
    int32 ParentParmId;
    int32 ChildIndex;
    bool bIsVisible;
    bool bIsParentFolderVisible;
    bool bIsDisabled;
    bool bHasChanged;
    bool bNeedsToTriggerUpdate;
    bool bIsDefault;
    bool bIsSpare;
    bool bJoinNext;
    bool bIsLabelVisible;
    bool bIsChildOfMultiParm;
    bool bIsDirectChildOfMultiParm;
    bool bPendingRevertToDefault;
    TArray<int32> TuplePendingRevertToDefault;
    FString Help;
    uint32 TagCount;
    int32 ValueIndex;
    bool bHasExpression;
    bool bShowExpression;
    FString ParamExpression;
    TMap<class FString, class FString> Tags;
    bool bAutoUpdate;

};

class UHoudiniParameterButton : public UHoudiniParameter
{
};

class UHoudiniParameterButtonStrip : public UHoudiniParameter
{
    TArray<FString> Labels;
    uint32 Value;
    uint32 DefaultValue;

};

class UHoudiniParameterChoice : public UHoudiniParameter
{
    int32 IntValue;
    int32 DefaultIntValue;
    FString StringValue;
    FString DefaultStringValue;
    TArray<FString> StringChoiceValues;
    TArray<FString> StringChoiceLabels;
    bool bIsChildOfRamp;
    TArray<int32> IntValuesArray;

};

class UHoudiniParameterColor : public UHoudiniParameter
{
    FLinearColor Color;
    FLinearColor DefaultColor;
    bool bIsChildOfRamp;

};

class UHoudiniParameterFile : public UHoudiniParameter
{
    TArray<FString> Values;
    TArray<FString> DefaultValues;
    FString Filters;
    bool bIsReadOnly;

};

class UHoudiniParameterFloat : public UHoudiniParameter
{
    TArray<float> Values;
    TArray<float> DefaultValues;
    FString Unit;
    bool bNoSwap;
    bool bHasMin;
    bool bHasMax;
    bool bHasUIMin;
    bool bHasUIMax;
    bool bIsLogarithmic;
    float Min;
    float Max;
    float UIMin;
    float UIMax;
    bool bIsChildOfRamp;

};

class UHoudiniParameterFolder : public UHoudiniParameter
{
    EHoudiniFolderParameterType FolderType;
    bool bExpanded;
    bool bChosen;
    int32 ChildCounter;
    bool bIsContentShown;

};

class UHoudiniParameterFolderList : public UHoudiniParameter
{
    bool bIsTabMenu;
    bool bIsTabsShown;
    TArray<class UHoudiniParameterFolder*> TabFolders;

};

class UHoudiniParameterInt : public UHoudiniParameter
{
    TArray<int32> Values;
    TArray<int32> DefaultValues;
    FString Unit;
    bool bHasMin;
    bool bHasMax;
    bool bHasUIMin;
    bool bHasUIMax;
    bool bIsLogarithmic;
    int32 Min;
    int32 Max;
    int32 UIMin;
    int32 UIMax;

};

class UHoudiniParameterLabel : public UHoudiniParameter
{
    TArray<FString> LabelStrings;

};

class UHoudiniParameterMultiParm : public UHoudiniParameter
{
    bool bIsShown;
    int32 Value;
    FString TemplateName;
    int32 MultiparmValue;
    uint32 MultiParmInstanceNum;
    uint32 MultiParmInstanceLength;
    uint32 MultiParmInstanceCount;
    uint32 InstanceStartOffset;
    TArray<EHoudiniMultiParmModificationType> MultiParmInstanceLastModifyArray;
    int32 DefaultInstanceCount;

};

class UHoudiniParameterOperatorPath : public UHoudiniParameter
{
    TWeakObjectPtr<class UHoudiniInput> HoudiniInput;

};

class UHoudiniParameterRampColor : public UHoudiniParameterMultiParm
{
    TArray<class UHoudiniParameterRampColorPoint*> Points;
    bool bCaching;
    TArray<class UHoudiniParameterRampColorPoint*> CachedPoints;
    TArray<float> DefaultPositions;
    TArray<FLinearColor> DefaultValues;
    TArray<int32> DefaultChoices;
    int32 NumDefaultPoints;
    TArray<class UHoudiniParameterRampModificationEvent*> ModificationEvents;

};

class UHoudiniParameterRampColorPoint : public UObject
{
    float Position;
    FLinearColor Value;
    EHoudiniRampInterpolationType Interpolation;
    int32 InstanceIndex;
    class UHoudiniParameterFloat* PositionParentParm;
    class UHoudiniParameterColor* ValueParentParm;
    class UHoudiniParameterChoice* InterpolationParentParm;

};

class UHoudiniParameterRampFloat : public UHoudiniParameterMultiParm
{
    TArray<class UHoudiniParameterRampFloatPoint*> Points;
    TArray<class UHoudiniParameterRampFloatPoint*> CachedPoints;
    TArray<float> DefaultPositions;
    TArray<float> DefaultValues;
    TArray<int32> DefaultChoices;
    int32 NumDefaultPoints;
    bool bCaching;
    TArray<class UHoudiniParameterRampModificationEvent*> ModificationEvents;

};

class UHoudiniParameterRampFloatPoint : public UObject
{
    float Position;
    float Value;
    EHoudiniRampInterpolationType Interpolation;
    int32 InstanceIndex;
    class UHoudiniParameterFloat* PositionParentParm;
    class UHoudiniParameterFloat* ValueParentParm;
    class UHoudiniParameterChoice* InterpolationParentParm;

};

class UHoudiniParameterRampModificationEvent : public UObject
{
    bool bIsInsertEvent;
    bool bIsFloatRamp;
    int32 DeleteInstanceIndex;
    float InsertPosition;
    float InsertFloat;
    FLinearColor InsertColor;
    EHoudiniRampInterpolationType InsertInterpolation;

};

class UHoudiniParameterSeparator : public UHoudiniParameter
{
};

class UHoudiniParameterString : public UHoudiniParameter
{
    TArray<FString> Values;
    TArray<FString> DefaultValues;
    TArray<class UObject*> ChosenAssets;
    bool bIsAssetRef;

};

class UHoudiniParameterToggle : public UHoudiniParameter
{
    TArray<int32> Values;
    TArray<int32> DefaultValues;

};

class UHoudiniRuntimeSettings : public UObject
{
    TEnumAsByte<EHoudiniRuntimeSettingsSessionType> SessionType;
    FString ServerHost;
    int32 ServerPort;
    FString ServerPipeName;
    bool bStartAutomaticServer;
    float AutomaticServerTimeout;
    bool bSyncWithHoudiniCook;
    bool bCookUsingHoudiniTime;
    bool bSyncViewport;
    bool bSyncHoudiniViewport;
    bool bSyncUnrealViewport;
    bool bShowMultiAssetDialog;
    bool bPreferHdaMemoryCopyOverHdaSourceFile;
    bool bPauseCookingOnStart;
    bool bDisplaySlateCookingNotifications;
    FString DefaultTemporaryCookFolder;
    FString DefaultBakeFolder;
    bool bEnableTheReferenceCountedInputSystem;
    bool MarshallingLandscapesUseDefaultUnrealScaling;
    bool MarshallingLandscapesUseFullResolution;
    bool MarshallingLandscapesForceMinMaxValues;
    float MarshallingLandscapesForcedMinValue;
    float MarshallingLandscapesForcedMaxValue;
    bool bAddRotAndScaleAttributesOnCurves;
    bool bUseLegacyInputCurves;
    float MarshallingSplineResolution;
    bool bEnableProxyStaticMesh;
    bool bShowDefaultMesh;
    bool bPreferNaniteFallbackMesh;
    bool bEnableProxyStaticMeshRefinementByTimer;
    float ProxyMeshAutoRefineTimeoutSeconds;
    bool bEnableProxyStaticMeshRefinementOnPreSaveWorld;
    bool bEnableProxyStaticMeshRefinementOnPreBeginPIE;
    uint8 bDoubleSidedGeometry;
    class UPhysicalMaterial* PhysMaterial;
    FBodyInstance DefaultBodyInstance;
    TEnumAsByte<ECollisionTraceFlag> CollisionTraceFlag;
    int32 LightMapResolution;
    float LpvBiasMultiplier;
    float GeneratedDistanceFieldResolutionScale;
    FWalkableSlopeOverride WalkableSlopeOverride;
    int32 LightMapCoordinateIndex;
    uint8 bUseMaximumStreamingTexelRatio;
    float StreamingDistanceMultiplier;
    class UFoliageType_InstancedStaticMesh* FoliageDefaultSettings;
    TArray<class UAssetUserData*> AssetUserData;
    bool bUseFullPrecisionUVs;
    int32 SrcLightmapIndex;
    int32 DstLightmapIndex;
    int32 MinLightmapResolution;
    bool bRemoveDegenerates;
    TEnumAsByte<EHoudiniRuntimeSettingsRecomputeFlag> GenerateLightmapUVsFlag;
    TEnumAsByte<EHoudiniRuntimeSettingsRecomputeFlag> RecomputeNormalsFlag;
    TEnumAsByte<EHoudiniRuntimeSettingsRecomputeFlag> RecomputeTangentsFlag;
    bool bUseMikkTSpace;
    bool bBuildAdjacencyBuffer;
    uint8 bComputeWeightedNormals;
    uint8 bBuildReversedIndexBuffer;
    uint8 bUseHighPrecisionTangentBasis;
    float DistanceFieldResolutionScale;
    uint8 bGenerateDistanceFieldAsIfTwoSided;
    uint8 bSupportFaceRemap;
    bool bPDGAsyncCommandletImportEnabled;
    TArray<FString> HoudiniToolsSearchPath;
    bool bUseCustomHoudiniLocation;
    FDirectoryPath CustomHoudiniLocation;
    TEnumAsByte<EHoudiniExecutableType> HoudiniExecutable;
    FDirectoryPath CustomHoudiniHomeLocation;
    int32 CookingThreadStackSize;
    FString HoudiniEnvironmentFiles;
    FString OtlSearchPath;
    FString DsoSearchPath;
    FString ImageDsoSearchPath;
    FString AudioDsoSearchPath;

};

class UHoudiniSplineComponent : public USceneComponent
{
    TArray<FTransform> CurvePoints;
    TArray<FVector3d> DisplayPoints;
    TArray<int32> DisplayPointIndexDivider;
    FString HoudiniSplineName;
    bool bClosed;
    bool bReversed;
    int32 CurveOrder;
    bool bIsHoudiniSplineVisible;
    EHoudiniCurveType CurveType;
    EHoudiniCurveMethod CurveMethod;
    EHoudiniCurveBreakpointParameterization CurveBreakpointParameterization;
    bool bIsOutputCurve;
    bool bCookOnCurveChanged;
    bool bIsLegacyInputCurve;
    bool bHasChanged;
    bool bNeedsToTriggerUpdate;
    bool bIsInputCurve;
    bool bIsEditableOutputCurve;
    int32 NodeID;
    FString PartName;

};

class UHoudiniStaticMesh : public UObject
{
    bool bHasNormals;
    bool bHasTangents;
    bool bHasColors;
    uint32 NumUVLayers;
    bool bHasPerFaceMaterials;
    TArray<FVector3f> VertexPositions;
    TArray<FIntVector> TriangleIndices;
    TArray<FColor> VertexInstanceColors;
    TArray<FVector3f> VertexInstanceNormals;
    TArray<FVector3f> VertexInstanceUTangents;
    TArray<FVector3f> VertexInstanceVTangents;
    TArray<FVector2f> VertexInstanceUVs;
    TArray<int32> MaterialIDsPerTriangle;
    TArray<FStaticMaterial> StaticMaterials;

    void SetVertexPosition(uint32 InVertexIndex, const FVector3f& InPosition);
    void SetTriangleVertexVTangent(uint32 InTriangleIndex, uint8 InTriangleVertexIndex, const FVector3f& InVTangent);
    void SetTriangleVertexUV(uint32 InTriangleIndex, uint8 InTriangleVertexIndex, uint8 InUVLayer, const FVector2f& InUV);
    void SetTriangleVertexUTangent(uint32 InTriangleIndex, uint8 InTriangleVertexIndex, const FVector3f& InUTangent);
    void SetTriangleVertexNormal(uint32 InTriangleIndex, uint8 InTriangleVertexIndex, const FVector3f& InNormal);
    void SetTriangleVertexIndices(uint32 InTriangleIndex, const FIntVector& InTriangleVertexIndices);
    void SetTriangleVertexColor(uint32 InTriangleIndex, uint8 InTriangleVertexIndex, const FColor& inColor);
    void SetTriangleMaterialID(uint32 InTriangleIndex, int32 InMaterialID);
    void SetStaticMaterial(uint32 InMaterialIndex, const FStaticMaterial& InStaticMaterial);
    void SetNumUVLayers(uint32 InNumUVLayers);
    void SetNumStaticMaterials(uint32 InNumStaticMaterials);
    void SetHasTangents(bool bInHasTangents);
    void SetHasPerFaceMaterials(bool bInHasPerFaceMaterials);
    void SetHasNormals(bool bInHasNormals);
    void SetHasColors(bool bInHasColors);
    void Optimize();
    bool IsValid(bool bInSkipVertexIndicesCheck);
    void Initialize(uint32 InNumVertices, uint32 InNumTriangles, uint32 InNumUVLayers, uint32 InInitialNumStaticMaterials, bool bInHasNormals, bool bInHasTangents, bool bInHasColors, bool bInHasPerFaceMaterials);
    bool HasTangents();
    bool HasPerFaceMaterials();
    bool HasNormals();
    bool HasColors();
    TArray<FVector3f> GetVertexPositions();
    TArray<FVector3f> GetVertexInstanceVTangents();
    TArray<FVector2f> GetVertexInstanceUVs();
    TArray<FVector3f> GetVertexInstanceUTangents();
    TArray<FVector3f> GetVertexInstanceNormals();
    TArray<FColor> GetVertexInstanceColors();
    TArray<FIntVector> GetTriangleIndices();
    TArray<FStaticMaterial> GetStaticMaterials();
    uint32 GetNumVertices();
    uint32 GetNumVertexInstances();
    uint32 GetNumUVLayers();
    uint32 GetNumTriangles();
    uint32 GetNumStaticMaterials();
    int32 GetMaterialIndex(FName InMaterialSlotName);
    TArray<int32> GetMaterialIDsPerTriangle();
    class UMaterialInterface* GetMaterial(int32 InMaterialIndex);
    void CalculateTangents(bool bInComputeWeightedNormals);
    void CalculateNormals(bool bInComputeWeightedNormals);
    FBox CalcBounds();
    uint32 AddStaticMaterial(const FStaticMaterial& InStaticMaterial);
};

class UHoudiniStaticMeshComponent : public UMeshComponent
{
    class UHoudiniStaticMesh* Mesh;
    FBox LocalBounds;
    bool bHoudiniIconVisible;

    void SetMesh(class UHoudiniStaticMesh* InMesh);
    void SetHoudiniIconVisible(bool bInHoudiniIconVisible);
    void NotifyMeshUpdated();
    bool IsHoudiniIconVisible();
    class UHoudiniStaticMesh* GetMesh();
};

class UHoudiniToolData : public UObject
{
    FString Name;
    FString Tooltip;
    FHImageData IconImageData;
    FFilePath IconSourcePath;
    FString HelpURL;
    EHoudiniToolType Type;
    bool DefaultTool;
    EHoudiniToolSelectionType SelectionType;
    FFilePath SourceAssetPath;

    bool SaveToJSONFile(FString JsonFilePath);
    bool PopulateFromJSONFile(FString JsonFilePath);
    bool PopulateFromJSONData(FString JSONData);
    bool ConvertToJSONData(FString& JSONData);
};

class UHoudiniToolsPackageAsset : public UObject
{
    TMap<class FString, class FCategoryRules> Categories;
    FDirectoryPath ExternalPackageDir;
    bool bReimportPackageDescription;
    bool bExportPackageDescription;
    bool bReimportToolsDescription;
    bool bExportToolsDescription;

};

class UTOPNetwork : public UObject
{
    int32 NodeID;
    FString NodeName;
    FString NodePath;
    TArray<class UTOPNode*> AllTOPNodes;
    int32 SelectedTOPIndex;
    FString ParentName;
    bool bShowResults;
    bool bAutoLoadResults;

};

class UTOPNode : public UObject
{
    int32 NodeID;
    FString NodeName;
    FString NodePath;
    FString ParentName;
    class UObject* WorkResultParent;
    TArray<FTOPWorkResult> WorkResult;
    bool bHidden;
    bool bAutoLoad;
    EPDGNodeState NodeState;
    bool bCachedHaveNotLoadedWorkResults;
    bool bCachedHaveLoadedWorkResults;
    bool bHasChildNodes;
    TSet<FString> ClearedLandscapeLayers;
    FHoudiniClearedEditLayers ClearedLayers;
    bool bShow;
    TMap<class FString, class FHoudiniPDGWorkResultObjectBakedOutput> BakedWorkResultObjectOutputs;
    FWorkItemTally WorkItemTally;
    FAggregatedWorkItemTally AggregatedWorkItemTally;
    bool bHasReceivedCookCompleteEvent;
    FOutputActorOwner OutputActorOwner;

};

#endif
