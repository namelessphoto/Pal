#include "PolyEditExtrudeProperties.h"

UPolyEditExtrudeProperties::UPolyEditExtrudeProperties() {
    this->DistanceMode = EPolyEditExtrudeDistanceMode::ClickInViewport;
    this->Distance = 100.00f;
    this->Direction = EPolyEditExtrudeDirection::SelectionNormal;
    this->MeasureDirection = EPolyEditExtrudeDirection::SelectionNormal;
    this->bShellsToSolids = true;
    this->DirectionMode = EPolyEditExtrudeModeOptions::SingleDirection;
    this->MaxDistanceScaleFactor = 4.00f;
    this->bUseColinearityForSettingBorderGroups = true;
}


