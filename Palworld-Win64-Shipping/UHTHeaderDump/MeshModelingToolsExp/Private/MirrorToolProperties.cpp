#include "MirrorToolProperties.h"

UMirrorToolProperties::UMirrorToolProperties() {
    this->OperationMode = EMirrorOperationMode::MirrorAndAppend;
    this->bCropAlongMirrorPlaneFirst = true;
    this->bWeldVerticesOnMirrorPlane = true;
    this->PlaneTolerance = 0.00f;
    this->bAllowBowtieVertexCreation = false;
    this->CtrlClickBehavior = EMirrorCtrlClickBehavior::Reposition;
    this->bButtonsOnlyChangeOrientation = false;
    this->bShowPreview = true;
    this->SaveMode = EMirrorSaveMode::UpdateAssets;
}


