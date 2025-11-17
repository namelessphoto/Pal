#include "SkinWeightsBindingToolProperties.h"

USkinWeightsBindingToolProperties::USkinWeightsBindingToolProperties() {
    this->BindingType = ESkinWeightsBindType::DirectDistance;
    this->Stiffness = 0.20f;
    this->MaxInfluences = 5;
    this->VoxelResolution = 128;
}


