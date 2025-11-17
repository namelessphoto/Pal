#ifndef UE4SS_SDK_MovieRenderPipelineRenderPasses_HPP
#define UE4SS_SDK_MovieRenderPipelineRenderPasses_HPP

#include "MovieRenderPipelineRenderPasses_enums.hpp"

struct FMoviePipelinePostProcessPass
{
    bool bEnabled;
    TSoftObjectPtr<UMaterialInterface> Material;

};

class UMoviePipelineDeferredPassBase : public UMoviePipelineImagePassBase
{
    bool bAccumulatorIncludesAlpha;
    bool bDisableMultisampleEffects;
    bool bUse32BitPostProcessMaterials;
    TArray<FMoviePipelinePostProcessPass> AdditionalPostProcessMaterials;
    bool bRenderMainPass;
    bool bAddDefaultLayer;
    TArray<FActorLayer> ActorLayers;
    TArray<FSoftObjectPath> DataLayers;
    TArray<class UMaterialInterface*> ActivePostProcessMaterials;
    class UMaterialInterface* StencilLayerMaterial;

};

class UMoviePipelineDeferredPass_DetailLighting : public UMoviePipelineDeferredPassBase
{
};

class UMoviePipelineDeferredPass_LightingOnly : public UMoviePipelineDeferredPassBase
{
};

class UMoviePipelineDeferredPass_PathTracer : public UMoviePipelineDeferredPassBase
{
    bool bReferenceMotionBlur;

};

class UMoviePipelineDeferredPass_ReflectionsOnly : public UMoviePipelineDeferredPassBase
{
};

class UMoviePipelineDeferredPass_Unlit : public UMoviePipelineDeferredPassBase
{
};

class UMoviePipelineImagePassBase : public UMoviePipelineRenderPass
{
};

class UMoviePipelineImageSequenceOutputBase : public UMoviePipelineOutputBase
{
};

class UMoviePipelineImageSequenceOutput_BMP : public UMoviePipelineImageSequenceOutputBase
{
};

class UMoviePipelineImageSequenceOutput_EXR : public UMoviePipelineImageSequenceOutputBase
{
    EEXRCompressionFormat Compression;
    bool bMultilayer;

};

class UMoviePipelineImageSequenceOutput_JPG : public UMoviePipelineImageSequenceOutputBase
{
};

class UMoviePipelineImageSequenceOutput_PNG : public UMoviePipelineImageSequenceOutputBase
{
    bool bWriteAlpha;

};

class UMoviePipelineWaveOutput : public UMoviePipelineOutputBase
{
    FString FileNameFormatOverride;

};

#endif
