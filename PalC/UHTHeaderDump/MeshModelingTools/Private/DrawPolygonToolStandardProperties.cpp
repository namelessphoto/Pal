#include "DrawPolygonToolStandardProperties.h"

UDrawPolygonToolStandardProperties::UDrawPolygonToolStandardProperties() {
    this->PolygonDrawMode = EDrawPolygonDrawMode::Freehand;
    this->bAllowSelfIntersections = false;
    this->FeatureSizeRatio = 0.25f;
    this->RadialSlices = 16;
    this->Distance = 0.00f;
    this->bShowGridGizmo = true;
    this->ExtrudeMode = EDrawPolygonExtrudeMode::Interactive;
    this->ExtrudeHeight = 100.00f;
}


