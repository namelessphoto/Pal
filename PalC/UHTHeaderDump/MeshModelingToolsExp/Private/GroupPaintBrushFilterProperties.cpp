#include "GroupPaintBrushFilterProperties.h"

UGroupPaintBrushFilterProperties::UGroupPaintBrushFilterProperties() {
    this->PrimaryBrushType = EMeshGroupPaintBrushType::Paint;
    this->SubToolType = EMeshGroupPaintInteractionType::Brush;
    this->BrushSize = 0.25f;
    this->BrushAreaMode = EMeshGroupPaintBrushAreaType::Connected;
    this->bHitBackFaces = true;
    this->SetGroup = 1;
    this->bOnlySetUngrouped = false;
    this->EraseGroup = 0;
    this->bOnlyEraseCurrent = false;
    this->AngleThreshold = 180.00f;
    this->bUVSeams = false;
    this->bNormalSeams = false;
    this->VisibilityFilter = EMeshGroupPaintVisibilityType::None;
    this->MinTriVertCount = 1;
}


