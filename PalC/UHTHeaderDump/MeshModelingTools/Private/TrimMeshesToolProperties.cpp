#include "TrimMeshesToolProperties.h"

UTrimMeshesToolProperties::UTrimMeshesToolProperties() {
    this->WhichMesh = ETrimOperation::TrimA;
    this->TrimSide = ETrimSide::RemoveInside;
    this->WindingThreshold = 0.50f;
    this->bShowTrimmingMesh = true;
    this->OpacityOfTrimmingMesh = 0.20f;
}


