#include "DrawPolygonToolSnapProperties.h"

UDrawPolygonToolSnapProperties::UDrawPolygonToolSnapProperties() {
    this->bEnableSnapping = true;
    this->bSnapToWorldGrid = false;
    this->bSnapToVertices = true;
    this->bSnapToEdges = false;
    this->bSnapToAxes = true;
    this->bSnapToLengths = true;
    this->bSnapToSurfaces = false;
    this->SnapToSurfacesOffset = 0.00f;
}


