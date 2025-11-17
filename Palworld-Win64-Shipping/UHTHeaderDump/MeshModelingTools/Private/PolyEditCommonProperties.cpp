#include "PolyEditCommonProperties.h"

UPolyEditCommonProperties::UPolyEditCommonProperties() {
    this->bShowWireframe = false;
    this->bShowSelectableCorners = true;
    this->bGizmoVisible = true;
    this->LocalFrameMode = ELocalFrameMode::FromGeometry;
    this->bLockRotation = false;
    this->bLocalCoordSystem = true;
}


