#include "RemeshMeshToolProperties.h"

URemeshMeshToolProperties::URemeshMeshToolProperties() {
    this->bPreserveSharpEdges = true;
    this->bPreventNormalFlips = true;
    this->bPreventTinyTriangles = true;
    this->bFlips = true;
    this->TargetTriangleCount = 5000;
    this->SmoothingType = ERemeshSmoothingType::MeanValue;
    this->bDiscardAttributes = false;
    this->bShowGroupColors = false;
    this->RemeshType = ERemeshType::Standard;
    this->RemeshIterations = 20;
    this->MaxRemeshIterations = 20;
    this->ExtraProjectionIterations = 5;
    this->bUseTargetEdgeLength = false;
    this->TargetEdgeLength = 5.00f;
    this->bReproject = true;
    this->bReprojectConstraints = false;
    this->BoundaryCornerAngleThreshold = 45.00f;
}


