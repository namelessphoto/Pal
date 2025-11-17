#include "LatticeDeformerToolProperties.h"

ULatticeDeformerToolProperties::ULatticeDeformerToolProperties() {
    this->XAxisResolution = 5;
    this->YAxisResolution = 5;
    this->ZAxisResolution = 5;
    this->Padding = 0.01f;
    this->InterpolationType = ELatticeInterpolationType::Linear;
    this->bDeformNormals = false;
    this->bCanChangeResolution = true;
    this->GizmoCoordinateSystem = EToolContextCoordinateSystem::Local;
    this->bSetPivotMode = false;
    this->bSoftDeformation = false;
}

void ULatticeDeformerToolProperties::Constrain() {
}

void ULatticeDeformerToolProperties::ClearConstraints() {
}


