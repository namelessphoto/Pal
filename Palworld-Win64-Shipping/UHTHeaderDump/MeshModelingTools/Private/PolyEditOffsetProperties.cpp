#include "PolyEditOffsetProperties.h"

UPolyEditOffsetProperties::UPolyEditOffsetProperties() {
    this->DistanceMode = EPolyEditExtrudeDistanceMode::ClickInViewport;
    this->Distance = 100.00f;
    this->DirectionMode = EPolyEditOffsetModeOptions::VertexNormals;
    this->MaxDistanceScaleFactor = 4.00f;
    this->bShellsToSolids = true;
    this->MeasureDirection = EPolyEditExtrudeDirection::SelectionNormal;
    this->bUseColinearityForSettingBorderGroups = true;
}


