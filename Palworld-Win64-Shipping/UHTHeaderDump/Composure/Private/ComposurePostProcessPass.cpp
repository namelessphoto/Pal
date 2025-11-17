#include "ComposurePostProcessPass.h"

UComposurePostProcessPass::UComposurePostProcessPass(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->SceneCapture = NULL;
    this->BlendableInterface = NULL;
    this->TonemapperReplacement = NULL;
}

void UComposurePostProcessPass::SetSetupMaterial(UMaterialInterface* Material) {
}

void UComposurePostProcessPass::SetOutputRenderTarget(UTextureRenderTarget2D* RenderTarget) {
}

UMaterialInterface* UComposurePostProcessPass::GetSetupMaterial() const {
    return NULL;
}

UTextureRenderTarget2D* UComposurePostProcessPass::GetOutputRenderTarget() const {
    return NULL;
}


