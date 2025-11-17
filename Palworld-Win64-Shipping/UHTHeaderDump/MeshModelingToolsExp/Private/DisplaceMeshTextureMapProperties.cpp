#include "DisplaceMeshTextureMapProperties.h"

UDisplaceMeshTextureMapProperties::UDisplaceMeshTextureMapProperties() {
    this->DisplacementMap = NULL;
    this->Channel = EDisplaceMeshToolChannelType::Red;
    this->DisplacementMapBaseValue = 0.50f;
    this->bApplyAdjustmentCurve = false;
    this->AdjustmentCurve = NULL;
    this->bRecalcNormals = true;
}


