#include "MeshSelectionToolProperties.h"

UMeshSelectionToolProperties::UMeshSelectionToolProperties() {
    this->SelectionMode = EMeshSelectionToolPrimaryMode::Brush;
    this->AngleTolerance = 1.00f;
    this->bHitBackFaces = true;
    this->bShowPoints = false;
    this->FaceColorMode = EMeshFacesColorMode::None;
}


