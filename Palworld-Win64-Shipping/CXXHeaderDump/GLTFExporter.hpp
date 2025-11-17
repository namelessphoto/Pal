#ifndef UE4SS_SDK_GLTFExporter_HPP
#define UE4SS_SDK_GLTFExporter_HPP

#include "GLTFExporter_enums.hpp"

struct FGLTFExportMessages
{
    TArray<FString> Suggestions;
    TArray<FString> Warnings;
    TArray<FString> Errors;

};

struct FGLTFOverrideMaterialBakeSettings
{
    bool bOverrideSize;
    EGLTFMaterialBakeSizePOT Size;
    bool bOverrideFilter;
    TEnumAsByte<TextureFilter> Filter;
    bool bOverrideTiling;
    TEnumAsByte<TextureAddress> Tiling;

};

class UGLTFAnimSequenceExporter : public UGLTFExporter
{
};

class UGLTFExportOptions : public UObject
{
    float ExportUniformScale;
    bool bExportPreviewMesh;
    bool bStrictCompliance;
    bool bSkipNearDefaultValues;
    bool bIncludeGeneratorVersion;
    bool bExportProxyMaterials;
    bool bExportUnlitMaterials;
    bool bExportClearCoatMaterials;
    bool bExportExtraBlendModes;
    EGLTFMaterialBakeMode BakeMaterialInputs;
    EGLTFMaterialBakeSizePOT DefaultMaterialBakeSize;
    TEnumAsByte<TextureFilter> DefaultMaterialBakeFilter;
    TEnumAsByte<TextureAddress> DefaultMaterialBakeTiling;
    TMap<class EGLTFMaterialPropertyGroup, class FGLTFOverrideMaterialBakeSettings> DefaultInputBakeSettings;
    int32 DefaultLevelOfDetail;
    bool bExportVertexColors;
    bool bExportVertexSkinWeights;
    bool bUseMeshQuantization;
    bool bExportLevelSequences;
    bool bExportAnimationSequences;
    bool bExportPlaybackSettings;
    EGLTFTextureImageFormat TextureImageFormat;
    int32 TextureImageQuality;
    int32 NoLossyImageFormatFor;
    bool bExportTextureTransforms;
    bool bExportLightmaps;
    EGLTFTextureHDREncoding TextureHDREncoding;
    bool bAdjustNormalmaps;
    bool bExportHiddenInGame;
    int32 ExportLights;
    bool bExportCameras;
    bool bExportHDRIBackdrops;
    bool bExportSkySpheres;
    EGLTFVariantSetsMode VariantSetsMode;
    EGLTFMaterialVariantMode ExportMaterialVariants;
    bool bExportMeshVariants;
    bool bExportVisibilityVariants;

    void ResetToDefault();
};

class UGLTFExporter : public UExporter
{

    bool ExportToGLTF(class UObject* Object, FString FilePath, const class UGLTFExportOptions* Options, const TSet<AActor*>& SelectedActors, FGLTFExportMessages& OutMessages);
};

class UGLTFLevelExporter : public UGLTFExporter
{
};

class UGLTFLevelSequenceExporter : public UGLTFExporter
{
};

class UGLTFLevelVariantSetsExporter : public UGLTFExporter
{
};

class UGLTFMaterialExportOptions : public UAssetUserData
{
    class UMaterialInterface* Proxy;
    FGLTFOverrideMaterialBakeSettings Default;
    TMap<class EGLTFMaterialPropertyGroup, class FGLTFOverrideMaterialBakeSettings> Inputs;

};

class UGLTFMaterialExporter : public UGLTFExporter
{
    class UStaticMesh* DefaultPreviewMesh;

};

class UGLTFProxyOptions : public UObject
{
    bool bBakeMaterialInputs;
    EGLTFMaterialBakeSizePOT DefaultMaterialBakeSize;
    TEnumAsByte<TextureFilter> DefaultMaterialBakeFilter;
    TEnumAsByte<TextureAddress> DefaultMaterialBakeTiling;
    TMap<class EGLTFMaterialPropertyGroup, class FGLTFOverrideMaterialBakeSettings> DefaultInputBakeSettings;

    void ResetToDefault();
};

class UGLTFSkeletalMeshExporter : public UGLTFExporter
{
};

class UGLTFStaticMeshExporter : public UGLTFExporter
{
};

#endif
