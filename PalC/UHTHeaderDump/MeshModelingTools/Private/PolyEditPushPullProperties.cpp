#include "PolyEditPushPullProperties.h"

UPolyEditPushPullProperties::UPolyEditPushPullProperties() {
    this->DistanceMode = EPolyEditExtrudeDistanceMode::ClickInViewport;
    this->Distance = 100.00f;
    this->DirectionMode = EPolyEditPushPullModeOptions::SelectedTriangleNormals;
    this->MaxDistanceScaleFactor = 4.00f;
    this->bShellsToSolids = true;
    this->MeasureDirection = EPolyEditExtrudeDirection::SelectionNormal;
    this->bUseColinearityForSettingBorderGroups = true;
}


