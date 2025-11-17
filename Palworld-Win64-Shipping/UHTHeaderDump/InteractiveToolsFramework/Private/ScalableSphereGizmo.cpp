#include "ScalableSphereGizmo.h"

UScalableSphereGizmo::UScalableSphereGizmo() {
    this->HitErrorThreshold = 12.00f;
    this->Radius = 0.00f;
    this->bIsHovering = false;
    this->bIsDragging = false;
    this->ActiveTarget = NULL;
    this->InteractionStartParameter = 0.00f;
}


