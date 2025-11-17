#include "MeshSpaceDeformerTool.h"

UMeshSpaceDeformerTool::UMeshSpaceDeformerTool() {
    this->Settings = NULL;
    this->ToolActions = NULL;
    this->StateTarget = NULL;
    this->DragAlignmentMechanic = NULL;
    this->Preview = NULL;
    this->OriginalMeshPreview = NULL;
    this->IntervalGizmo = NULL;
    this->TransformGizmo = NULL;
    this->TransformProxy = NULL;
    this->UpIntervalSource = NULL;
    this->DownIntervalSource = NULL;
    this->ForwardIntervalSource = NULL;
}


