#include "ExtractCollisionToolProperties.h"

UExtractCollisionToolProperties::UExtractCollisionToolProperties() {
    this->CollisionType = EExtractCollisionOutputType::Simple;
    this->bWeldEdges = true;
    this->bOutputSeparateMeshes = true;
    this->bShowPreview = false;
    this->bShowInputMesh = true;
}


