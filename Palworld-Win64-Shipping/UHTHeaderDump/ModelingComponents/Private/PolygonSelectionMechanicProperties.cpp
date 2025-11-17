#include "PolygonSelectionMechanicProperties.h"

UPolygonSelectionMechanicProperties::UPolygonSelectionMechanicProperties() {
    this->bSelectVertices = true;
    this->bSelectEdges = true;
    this->bSelectFaces = true;
    this->bSelectEdgeLoops = false;
    this->bSelectEdgeRings = false;
    this->bHitBackFaces = true;
    this->bEnableMarquee = true;
    this->bMarqueeIgnoreOcclusion = true;
    this->bPreferProjectedElement = true;
    this->bSelectDownRay = true;
    this->bIgnoreOcclusion = false;
}

void UPolygonSelectionMechanicProperties::SelectAll() {
}

void UPolygonSelectionMechanicProperties::InvertSelection() {
}


