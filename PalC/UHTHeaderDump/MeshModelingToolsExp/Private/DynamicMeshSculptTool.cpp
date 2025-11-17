#include "DynamicMeshSculptTool.h"

UDynamicMeshSculptTool::UDynamicMeshSculptTool() {
    this->BrushProperties = NULL;
    this->SculptProperties = NULL;
    this->SculptMaxBrushProperties = NULL;
    this->KelvinBrushProperties = NULL;
    this->RemeshProperties = NULL;
    this->GizmoProperties = NULL;
    this->ViewProperties = NULL;
    this->SculptToolActions = NULL;
    this->BrushIndicator = NULL;
    this->BrushIndicatorMaterial = NULL;
    this->BrushIndicatorMesh = NULL;
    this->DynamicMeshComponent = NULL;
    this->ActiveOverrideMaterial = NULL;
    this->PlaneTransformGizmo = NULL;
    this->PlaneTransformProxy = NULL;
}


