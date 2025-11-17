#include "DrawPolyPathProperties.h"

UDrawPolyPathProperties::UDrawPolyPathProperties() {
    this->WidthMode = EDrawPolyPathWidthMode::Interactive;
    this->Width = 10.00f;
    this->bRoundedCorners = false;
    this->RadiusMode = EDrawPolyPathRadiusMode::Interactive;
    this->CornerRadius = 0.50f;
    this->RadialSlices = 16;
    this->bSinglePolyGroup = false;
    this->ExtrudeMode = EDrawPolyPathExtrudeMode::Interactive;
    this->ExtrudeHeight = 10.00f;
    this->RampStartRatio = 0.05f;
}


