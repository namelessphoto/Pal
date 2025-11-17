#include "ComposurePlayerCompositingTarget.h"

UComposurePlayerCompositingTarget::UComposurePlayerCompositingTarget() {
    this->PlayerCameraManager = NULL;
    this->PlayerCameraModifier = NULL;
}

void UComposurePlayerCompositingTarget::SetRenderTarget(UTextureRenderTarget2D* RenderTarget) {
}

APlayerCameraManager* UComposurePlayerCompositingTarget::SetPlayerCameraManager(APlayerCameraManager* NewPlayerCameraManager) {
    return NULL;
}

APlayerCameraManager* UComposurePlayerCompositingTarget::GetPlayerCameraManager() const {
    return NULL;
}


