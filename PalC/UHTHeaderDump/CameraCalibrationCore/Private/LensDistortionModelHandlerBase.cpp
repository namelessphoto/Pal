#include "LensDistortionModelHandlerBase.h"
#include "Templates/SubclassOf.h"

ULensDistortionModelHandlerBase::ULensDistortionModelHandlerBase() {
    this->LensModelClass = NULL;
    this->DistortionPostProcessMID = NULL;
    this->OverscanFactor = 1.00f;
    this->UndistortionDisplacementMapMID = NULL;
    this->DistortionDisplacementMapMID = NULL;
    this->UndistortionDisplacementMapRT = NULL;
    this->DistortionDisplacementMapRT = NULL;
}

void ULensDistortionModelHandlerBase::SetDistortionState(const FLensDistortionState& InNewState) {
}

bool ULensDistortionModelHandlerBase::IsModelSupported(const TSubclassOf<ULensModel>& ModelToSupport) const {
    return false;
}

UTextureRenderTarget2D* ULensDistortionModelHandlerBase::GetUndistortionDisplacementMap() const {
    return NULL;
}

UTextureRenderTarget2D* ULensDistortionModelHandlerBase::GetDistortionDisplacementMap() const {
    return NULL;
}


