#include "MeshSculptToolBase.h"

UMeshSculptToolBase::UMeshSculptToolBase() {
    this->BrushProperties = NULL;
    this->GizmoProperties = NULL;
    this->ViewProperties = NULL;
    this->ActiveOverrideMaterial = NULL;
    this->BrushIndicator = NULL;
    this->bIsVolumetricIndicator = false;
    this->BrushIndicatorMaterial = NULL;
    this->BrushIndicatorMesh = NULL;
    this->PlaneTransformGizmo = NULL;
    this->PlaneTransformProxy = NULL;
}


