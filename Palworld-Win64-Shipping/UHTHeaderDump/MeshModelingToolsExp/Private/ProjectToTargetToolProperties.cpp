#include "ProjectToTargetToolProperties.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingOperators -ObjectName=ERemeshType -FallbackName=ERemeshType

UProjectToTargetToolProperties::UProjectToTargetToolProperties() {
    this->bPreserveSharpEdges = false;
    this->RemeshType = ERemeshType::NormalFlow;
    this->bWorldSpace = true;
    this->bParallel = true;
    this->FaceProjectionPassesPerRemeshIteration = 1;
    this->SurfaceProjectionSpeed = 0.20f;
    this->NormalAlignmentSpeed = 0.20f;
    this->bSmoothInFillAreas = true;
    this->FillAreaDistanceMultiplier = 0.25f;
    this->FillAreaSmoothMultiplier = 0.25f;
}


