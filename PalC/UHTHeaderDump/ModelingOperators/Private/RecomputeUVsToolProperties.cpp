#include "RecomputeUVsToolProperties.h"

URecomputeUVsToolProperties::URecomputeUVsToolProperties() {
    this->bEnablePolygroupSupport = true;
    this->IslandGeneration = ERecomputeUVsPropertiesIslandMode::ExistingUVs;
    this->UnwrapType = ERecomputeUVsPropertiesUnwrapType::SpectralConformal;
    this->AutoRotation = ERecomputeUVsToolOrientationMode::MinBounds;
    this->bPreserveIrregularity = true;
    this->SmoothingSteps = 5;
    this->SmoothingAlpha = 0.25f;
    this->MergingDistortionThreshold = 1.50f;
    this->MergingAngleThreshold = 45.00f;
    this->LayoutType = ERecomputeUVsPropertiesLayoutType::Repack;
    this->TextureResolution = 1024;
    this->NormalizeScale = 1.00f;
}


