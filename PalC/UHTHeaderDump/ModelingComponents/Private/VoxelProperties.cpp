#include "VoxelProperties.h"

UVoxelProperties::UVoxelProperties() {
    this->VoxelCount = 128;
    this->bAutoSimplify = false;
    this->bRemoveInternalSurfaces = false;
    this->SimplifyMaxErrorFactor = 1.00f;
    this->CubeRootMinComponentVolume = 0.00f;
}


