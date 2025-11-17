#include "MeshSpaceDeformerToolProperties.h"

UMeshSpaceDeformerToolProperties::UMeshSpaceDeformerToolProperties() {
    this->SelectedOperationType = ENonlinearOperationType::Bend;
    this->UpperBoundsInterval = 100.00f;
    this->LowerBoundsInterval = -100.00f;
    this->BendDegrees = 90.00f;
    this->TwistDegrees = 180.00f;
    this->FlareProfileType = EFlareProfileType::SinMode;
    this->FlarePercentY = 100.00f;
    this->bLockXAndYFlaring = true;
    this->FlarePercentX = 100.00f;
    this->bLockBottom = false;
    this->bShowOriginalMesh = true;
    this->bDrawVisualization = true;
    this->bAlignToNormalOnCtrlClick = false;
}


