#pragma once
#include "CoreMinimal.h"
#include "EHoudiniLandscapeExportType.h"
#include "EHoudiniXformType.h"
#include "HoudiniInputObjectSettings.generated.h"

USTRUCT(BlueprintType)
struct HOUDINIENGINERUNTIME_API FHoudiniInputObjectSettings {
    GENERATED_BODY()
public:
    UPROPERTY()
    EHoudiniXformType KeepWorldTransform;
    
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
    bool bAddRotAndScaleAttributesOnCurves;
    
    UPROPERTY()
    bool bUseLegacyInputCurves;
    
    UPROPERTY()
    float UnrealSplineResolution;
    
    UPROPERTY()
    EHoudiniLandscapeExportType LandscapeExportType;
    
    UPROPERTY()
    bool bLandscapeExportSelectionOnly;
    
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
    bool bLandscapeAutoSelectSplines;
    
    UPROPERTY()
    bool bLandscapeSplinesExportControlPoints;
    
    UPROPERTY()
    bool bLandscapeSplinesExportLeftRightCurves;
    
    UPROPERTY()
    bool bLandscapeSplinesExportSplineMeshComponents;
    
    UPROPERTY()
    bool bMergeSplineMeshComponents;
    
    UPROPERTY()
    bool bExportHeightDataPerEditLayer;
    
    UPROPERTY()
    bool bExportPaintLayersPerEditLayer;
    
    UPROPERTY()
    bool bExportMergedPaintLayers;
    
    UPROPERTY()
    bool bExportLevelInstanceContent;
    
    FHoudiniInputObjectSettings();
};

