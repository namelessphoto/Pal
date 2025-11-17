#include "VoxelSolidifyMeshesToolProperties.h"

UVoxelSolidifyMeshesToolProperties::UVoxelSolidifyMeshesToolProperties() {
    this->WindingThreshold = 0.50f;
    this->ExtendBounds = 1.00f;
    this->SurfaceSearchSteps = 4;
    this->bSolidAtBoundaries = true;
    this->bApplyThickenShells = false;
    this->ThickenShells = 5.00f;
}


