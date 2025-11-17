#include "PolyLassoMarqueeMechanic.h"

UPolyLassoMarqueeMechanic::UPolyLassoMarqueeMechanic() {
    this->SpacingTolerance = 2.00f;
    this->LineThickness = 2.00f;
    this->bEnableFreehandPolygons = true;
    this->bEnableMultiClickPolygons = true;
    this->ClickDragBehavior = NULL;
    this->HoverBehavior = NULL;
}


