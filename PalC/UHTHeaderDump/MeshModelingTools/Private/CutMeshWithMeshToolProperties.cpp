#include "CutMeshWithMeshToolProperties.h"

UCutMeshWithMeshToolProperties::UCutMeshWithMeshToolProperties() {
    this->bTryFixHoles = false;
    this->bTryCollapseEdges = true;
    this->WindingThreshold = 0.50f;
    this->bShowNewBoundaries = true;
    this->bUseFirstMeshMaterials = false;
}


