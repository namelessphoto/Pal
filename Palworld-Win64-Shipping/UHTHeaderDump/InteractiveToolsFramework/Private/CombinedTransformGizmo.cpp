#include "CombinedTransformGizmo.h"

UCombinedTransformGizmo::UCombinedTransformGizmo() {
    this->ActiveTarget = NULL;
    this->bSnapToWorldGrid = true;
    this->bGridSizeIsExplicit = false;
    this->bRotationGridSizeIsExplicit = false;
    this->bSnapToWorldRotGrid = true;
    this->bUseContextCoordinateSystem = true;
    this->CurrentCoordinateSystem = EToolContextCoordinateSystem::Local;
    this->CameraAxisSource = NULL;
    this->AxisXSource = NULL;
    this->AxisYSource = NULL;
    this->AxisZSource = NULL;
    this->UnitAxisXSource = NULL;
    this->UnitAxisYSource = NULL;
    this->UnitAxisZSource = NULL;
    this->StateTarget = NULL;
}


