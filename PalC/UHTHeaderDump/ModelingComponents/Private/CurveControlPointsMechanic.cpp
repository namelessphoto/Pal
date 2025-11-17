#include "CurveControlPointsMechanic.h"

UCurveControlPointsMechanic::UCurveControlPointsMechanic() {
    this->ClickBehavior = NULL;
    this->HoverBehavior = NULL;
    this->PreviewGeometryActor = NULL;
    this->DrawnControlPoints = NULL;
    this->DrawnControlSegments = NULL;
    this->PreviewPoint = NULL;
    this->PreviewSegment = NULL;
    this->PointTransformProxy = NULL;
    this->PointTransformGizmo = NULL;
}


