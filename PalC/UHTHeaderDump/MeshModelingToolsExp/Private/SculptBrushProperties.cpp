#include "SculptBrushProperties.h"

USculptBrushProperties::USculptBrushProperties() {
    this->BrushFalloffAmount = 0.00f;
    this->bShowFalloff = true;
    this->Depth = 0.00f;
    this->bHitBackFaces = true;
    this->FlowRate = 1.00f;
    this->Spacing = 0.00f;
    this->Lazyness = 0.00f;
    this->bShowPerBrushProps = true;
    this->bShowLazyness = true;
    this->bShowFlowRate = true;
    this->bShowSpacing = true;
}


