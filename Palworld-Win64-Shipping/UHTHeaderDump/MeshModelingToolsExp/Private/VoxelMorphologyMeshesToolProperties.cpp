#include "VoxelMorphologyMeshesToolProperties.h"

UVoxelMorphologyMeshesToolProperties::UVoxelMorphologyMeshesToolProperties() {
    this->Operation = EMorphologyOperation::Dilate;
    this->Distance = 5.00f;
    this->bVoxWrap = false;
    this->bRemoveInternalsAfterVoxWrap = false;
    this->ThickenShells = 0.00f;
}


