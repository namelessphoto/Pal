#include "HoudiniInputBrush.h"

UHoudiniInputBrush::UHoudiniInputBrush() {
    this->CombinedModel = NULL;
    this->bIgnoreInputObject = false;
    this->CachedInputBrushType = EBrushType::Brush_Default;
}


