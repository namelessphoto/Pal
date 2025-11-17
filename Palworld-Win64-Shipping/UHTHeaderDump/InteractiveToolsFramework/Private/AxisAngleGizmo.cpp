#include "AxisAngleGizmo.h"

UAxisAngleGizmo::UAxisAngleGizmo() {
    this->MouseBehavior = NULL;
    this->bInInteraction = false;
    this->InteractionStartAngle = 0.00f;
    this->InteractionCurAngle = 0.00f;
}


