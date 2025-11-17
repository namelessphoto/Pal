#include "ComposureTonemapperPass.h"

UComposureTonemapperPass::UComposureTonemapperPass(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ChromaticAberration = 0.00f;
}

void UComposureTonemapperPass::TonemapToRenderTarget() {
}


