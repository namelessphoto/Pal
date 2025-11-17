#include "VoxelBlendMeshesToolProperties.h"

UVoxelBlendMeshesToolProperties::UVoxelBlendMeshesToolProperties() {
    this->BlendPower = 2.00f;
    this->BlendFalloff = 10.00f;
    this->Operation = EVoxelBlendOperation::Union;
    this->bVoxWrap = false;
    this->bRemoveInternalsAfterVoxWrap = false;
    this->ThickenShells = 0.00f;
}


