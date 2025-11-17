#include "VertexBrushSculptProperties.h"

UVertexBrushSculptProperties::UVertexBrushSculptProperties() {
    this->PrimaryBrushType = EMeshVertexSculptBrushType::Offset;
    this->PrimaryFalloffType = EMeshSculptFalloffType::Smooth;
    this->BrushFilter = EMeshVertexSculptBrushFilterType::None;
    this->bFreezeTarget = false;
}


