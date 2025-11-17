#include "ProceduralShapeToolProperties.h"

UProceduralShapeToolProperties::UProceduralShapeToolProperties() {
    this->PolygroupMode = EMakeMeshPolygroupMode::PerFace;
    this->TargetSurface = EMakeMeshPlacementType::OnScene;
    this->PivotLocation = EMakeMeshPivotLocation::Base;
    this->Rotation = 0.00f;
    this->bAlignToNormal = true;
    this->bShowGizmo = true;
    this->bShowGizmoOptions = false;
}


