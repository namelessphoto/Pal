#include "SelfUnionMeshesToolProperties.h"

USelfUnionMeshesToolProperties::USelfUnionMeshesToolProperties() {
    this->bTrimFlaps = false;
    this->bTryFixHoles = false;
    this->bTryCollapseEdges = true;
    this->WindingThreshold = 0.50f;
    this->bShowNewBoundaryEdges = true;
    this->bOnlyUseFirstMeshMaterials = false;
}


