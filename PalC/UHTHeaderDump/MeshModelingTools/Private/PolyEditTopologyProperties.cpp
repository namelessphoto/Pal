#include "PolyEditTopologyProperties.h"

UPolyEditTopologyProperties::UPolyEditTopologyProperties() {
    this->bAddExtraCorners = true;
    this->ExtraCornerAngleThresholdDegrees = 135.00f;
}

void UPolyEditTopologyProperties::RegenerateExtraCorners() {
}


