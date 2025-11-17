#include "CompositingElementPass.h"

UCompositingElementPass::UCompositingElementPass() {
    this->bEnabled = true;
}

void UCompositingElementPass::SetPassEnabled(bool bSetEnabledTo) {
}

void UCompositingElementPass::Reset_Implementation() {
}

UTextureRenderTarget2D* UCompositingElementPass::RequestRenderTarget(FIntPoint Dimensions, TEnumAsByte<ETextureRenderTargetFormat> Format) {
    return NULL;
}

UTextureRenderTarget2D* UCompositingElementPass::RequestNativelyFormattedTarget(float RenderScale) {
    return NULL;
}

bool UCompositingElementPass::ReleaseRenderTarget(UTextureRenderTarget2D* AssignedTarget) {
    return false;
}

void UCompositingElementPass::OnFrameEnd_Implementation() {
}

void UCompositingElementPass::OnFrameBegin_Implementation(bool bCameraCutThisFrame) {
}

void UCompositingElementPass::OnEnabled_Implementation() {
}

void UCompositingElementPass::OnDisabled_Implementation() {
}

bool UCompositingElementPass::IsPassEnabled() const {
    return false;
}


