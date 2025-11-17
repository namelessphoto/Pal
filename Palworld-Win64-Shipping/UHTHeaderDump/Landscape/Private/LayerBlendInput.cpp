#include "LayerBlendInput.h"

FLayerBlendInput::FLayerBlendInput() {
    this->BlendType = ELandscapeLayerBlendType::LB_WeightBlend;
    this->PreviewWeight = 0.00f;
    this->ConstHeightInput = 0.00f;
}

