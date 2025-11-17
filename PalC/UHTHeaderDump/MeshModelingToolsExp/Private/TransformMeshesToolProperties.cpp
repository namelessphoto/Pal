#include "TransformMeshesToolProperties.h"

UTransformMeshesToolProperties::UTransformMeshesToolProperties() {
    this->TransformMode = ETransformMeshesTransformMode::SharedGizmo;
    this->bApplyToInstances = true;
    this->bSetPivotMode = false;
    this->bEnableSnapDragging = false;
    this->SnapDragSource = ETransformMeshesSnapDragSource::ClickPoint;
    this->RotationMode = ETransformMeshesSnapDragRotationMode::AlignFlipped;
    this->bHaveInstances = false;
}


