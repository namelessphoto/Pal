#include "CSGMeshesToolProperties.h"

UCSGMeshesToolProperties::UCSGMeshesToolProperties() {
    this->Operation = ECSGOperation::DifferenceAB;
    this->bTryFixHoles = false;
    this->bTryCollapseEdges = true;
    this->WindingThreshold = 0.50f;
    this->bShowNewBoundaries = true;
    this->bShowSubtractedMesh = true;
    this->SubtractedMeshOpacity = 0.20f;
    this->bUseFirstMeshMaterials = false;
}


