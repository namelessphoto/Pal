#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box -FallbackName=Box
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EHoudiniInputType.h"
#include "EHoudiniLandscapeExportType.h"
#include "EHoudiniXformType.h"
#include "HoudiniInputObjectSettings.h"
#include "HoudiniInput.generated.h"

class AActor;
class UHoudiniInputHoudiniSplineComponent;
class UHoudiniInputObject;
class ULandscapeComponent;

UCLASS()
class HOUDINIENGINERUNTIME_API UHoudiniInput : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    FString Name;
    
    UPROPERTY()
    FString Label;
    
    UPROPERTY()
    EHoudiniInputType Type;
    
    UPROPERTY(DuplicateTransient, Transient)
    EHoudiniInputType PreviousType;
    
    UPROPERTY(DuplicateTransient, Transient)
    int32 AssetNodeId;
    
    UPROPERTY(DuplicateTransient, NonTransactional, Transient)
    int32 InputNodeId;
    
    UPROPERTY()
    int32 InputIndex;
    
    UPROPERTY(DuplicateTransient, NonTransactional, Transient)
    int32 ParmId;
    
    UPROPERTY()
    bool bIsObjectPathParameter;
    
    UPROPERTY(DuplicateTransient, NonTransactional, Transient)
    TArray<int32> CreatedDataNodeIds;
    
    UPROPERTY(DuplicateTransient, Transient)
    bool bHasChanged;
    
    UPROPERTY(DuplicateTransient, Transient)
    bool bNeedsToTriggerUpdate;
    
    UPROPERTY()
    FBox CachedBounds;
    
    UPROPERTY()
    FString Help;
    
    UPROPERTY()
    EHoudiniXformType KeepWorldTransform;
    
    UPROPERTY()
    bool bPackBeforeMerge;
    
    UPROPERTY()
    bool bImportAsReference;
    
    UPROPERTY()
    bool bImportAsReferenceRotScaleEnabled;
    
    UPROPERTY()
    bool bImportAsReferenceBboxEnabled;
    
    UPROPERTY()
    bool bImportAsReferenceMaterialEnabled;
    
    UPROPERTY()
    bool bExportLODs;
    
    UPROPERTY()
    bool bExportSockets;
    
    UPROPERTY()
    bool bPreferNaniteFallbackMesh;
    
    UPROPERTY()
    bool bExportColliders;
    
    UPROPERTY()
    bool bExportMaterialParameters;
    
    UPROPERTY()
    bool bDirectlyConnectHdas;
    
    UPROPERTY()
    bool bExportOptionsMenuExpanded;
    
    UPROPERTY()
    bool bGeometryInputsMenuExpanded;
    
    UPROPERTY()
    bool bLandscapeOptionsMenuExpanded;
    
    UPROPERTY()
    bool bWorldInputsMenuExpanded;
    
    UPROPERTY()
    bool bCurveInputsMenuExpanded;
    
    UPROPERTY()
    bool bCurvePointSelectionMenuExpanded;
    
    UPROPERTY()
    bool bCurvePointSelectionUseAbsLocation;
    
    UPROPERTY()
    bool bCurvePointSelectionUseAbsRotation;
    
    UPROPERTY()
    bool bCookOnCurveChanged;
    
    UPROPERTY()
    TArray<UHoudiniInputObject*> GeometryInputObjects;
    
    UPROPERTY()
    bool bStaticMeshChanged;
    
    UPROPERTY()
    TArray<UHoudiniInputObject*> AssetInputObjects;
    
    UPROPERTY()
    bool bInputAssetConnectedInHoudini;
    
    UPROPERTY()
    TArray<UHoudiniInputObject*> CurveInputObjects;
    
    UPROPERTY()
    float DefaultCurveOffset;
    
    UPROPERTY()
    bool bAddRotAndScaleAttributesOnCurves;
    
    UPROPERTY()
    bool bUseLegacyInputCurves;
    
    UPROPERTY()
    TArray<UHoudiniInputObject*> LandscapeInputObjects;
    
    UPROPERTY()
    bool bLandscapeHasExportTypeChanged;
    
    UPROPERTY()
    TArray<UHoudiniInputObject*> WorldInputObjects;
    
    UPROPERTY()
    TArray<AActor*> WorldInputBoundSelectorObjects;
    
    UPROPERTY()
    bool bIsWorldInputBoundSelector;
    
    UPROPERTY()
    bool bWorldInputBoundSelectorAutoUpdate;
    
    UPROPERTY()
    float UnrealSplineResolution;
    
    UPROPERTY()
    TArray<UHoudiniInputObject*> SkeletalInputObjects;
    
    UPROPERTY()
    TArray<UHoudiniInputObject*> GeometryCollectionInputObjects;
    
    UPROPERTY(Export)
    TSet<ULandscapeComponent*> LandscapeSelectedComponents;
    
    UPROPERTY(DuplicateTransient, NonTransactional, Transient)
    TSet<int32> InputNodesPendingDelete;
    
public:
    UPROPERTY(DuplicateTransient, Transient)
    TArray<UHoudiniInputHoudiniSplineComponent*> LastInsertedInputs;
    
    UPROPERTY(DuplicateTransient, NonTransactional, Transient)
    TArray<UHoudiniInputObject*> LastUndoDeletedInputs;
    
    UPROPERTY()
    bool bUpdateInputLandscape;
    
    UPROPERTY()
    EHoudiniLandscapeExportType LandscapeExportType;
    
    UPROPERTY()
    bool bLandscapeExportSelectionOnly;
    
    UPROPERTY()
    bool bLandscapeControlVisiblity;
    
    UPROPERTY()
    bool bLandscapeAutoSelectComponent;
    
    UPROPERTY()
    bool bLandscapeExportMaterials;
    
    UPROPERTY()
    bool bLandscapeExportLighting;
    
    UPROPERTY()
    bool bLandscapeExportNormalizedUVs;
    
    UPROPERTY()
    bool bLandscapeExportTileUVs;
    
    UPROPERTY()
    bool bCanDeleteHoudiniNodes;
    
protected:
    UPROPERTY()
    bool bLandscapeAutoSelectSplines;
    
    UPROPERTY()
    bool bLandscapeSplinesExportOptionsMenuExpanded;
    
    UPROPERTY()
    bool bLandscapeSplinesExportControlPoints;
    
    UPROPERTY()
    bool bLandscapeSplinesExportLeftRightCurves;
    
    UPROPERTY()
    bool bLandscapeSplinesExportSplineMeshComponents;
    
    UPROPERTY()
    bool bMergeSplineMeshComponents;
    
    UPROPERTY()
    FHoudiniInputObjectSettings InputSettings;
    
public:
    UHoudiniInput();

};

