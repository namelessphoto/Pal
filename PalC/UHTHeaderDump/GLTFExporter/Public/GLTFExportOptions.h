#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TextureAddress -FallbackName=TextureAddress
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TextureFilter -FallbackName=TextureFilter
#include "EGLTFMaterialBakeMode.h"
#include "EGLTFMaterialBakeSizePOT.h"
#include "EGLTFMaterialPropertyGroup.h"
#include "EGLTFMaterialVariantMode.h"
#include "EGLTFTextureHDREncoding.h"
#include "EGLTFTextureImageFormat.h"
#include "EGLTFVariantSetsMode.h"
#include "GLTFOverrideMaterialBakeSettings.h"
#include "GLTFExportOptions.generated.h"

UCLASS(BlueprintType, Config=EditorPerProjectUserSettings)
class GLTFEXPORTER_API UGLTFExportOptions : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    float ExportUniformScale;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    bool bExportPreviewMesh;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    bool bStrictCompliance;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    bool bSkipNearDefaultValues;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    bool bIncludeGeneratorVersion;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    bool bExportProxyMaterials;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    bool bExportUnlitMaterials;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    bool bExportClearCoatMaterials;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    bool bExportExtraBlendModes;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    EGLTFMaterialBakeMode BakeMaterialInputs;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    EGLTFMaterialBakeSizePOT DefaultMaterialBakeSize;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    TEnumAsByte<TextureFilter> DefaultMaterialBakeFilter;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    TEnumAsByte<TextureAddress> DefaultMaterialBakeTiling;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    TMap<EGLTFMaterialPropertyGroup, FGLTFOverrideMaterialBakeSettings> DefaultInputBakeSettings;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    int32 DefaultLevelOfDetail;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    bool bExportVertexColors;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    bool bExportVertexSkinWeights;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    bool bUseMeshQuantization;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    bool bExportLevelSequences;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    bool bExportAnimationSequences;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    bool bExportPlaybackSettings;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    EGLTFTextureImageFormat TextureImageFormat;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    int32 TextureImageQuality;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    int32 NoLossyImageFormatFor;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    bool bExportTextureTransforms;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    bool bExportLightmaps;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    EGLTFTextureHDREncoding TextureHDREncoding;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    bool bAdjustNormalmaps;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    bool bExportHiddenInGame;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    int32 ExportLights;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    bool bExportCameras;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    bool bExportHDRIBackdrops;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    bool bExportSkySpheres;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    EGLTFVariantSetsMode VariantSetsMode;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    EGLTFMaterialVariantMode ExportMaterialVariants;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    bool bExportMeshVariants;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    bool bExportVisibilityVariants;
    
    UGLTFExportOptions();

    UFUNCTION(BlueprintCallable)
    void ResetToDefault();
    
};

