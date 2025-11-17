#include "EdgeLoopInsertionProperties.h"

UEdgeLoopInsertionProperties::UEdgeLoopInsertionProperties() {
    this->PositionMode = EEdgeLoopPositioningMode::ProportionOffset;
    this->InsertionMode = EEdgeLoopInsertionMode::PlaneCut;
    this->NumLoops = 1;
    this->ProportionOffset = 0.50f;
    this->DistanceOffset = 10.00f;
    this->bInteractive = true;
    this->bFlipOffsetDirection = false;
    this->bHighlightProblemGroups = true;
    this->VertexTolerance = 0.00f;
}


