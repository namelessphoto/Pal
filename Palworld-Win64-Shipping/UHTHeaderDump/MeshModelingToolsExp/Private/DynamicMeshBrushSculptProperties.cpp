#include "DynamicMeshBrushSculptProperties.h"

UDynamicMeshBrushSculptProperties::UDynamicMeshBrushSculptProperties() {
    this->bIsRemeshingEnabled = false;
    this->PrimaryBrushType = EDynamicMeshSculptBrushType::Move;
    this->PrimaryBrushSpeed = 0.50f;
    this->bPreserveUVFlow = false;
    this->bFreezeTarget = false;
    this->SmoothBrushSpeed = 0.25f;
    this->bDetailPreservingSmooth = true;
}


