#include "GizmoElementArrow.h"

UGizmoElementArrow::UGizmoElementArrow() {
    this->BoxElement = NULL;
    this->BodyLength = 1.50f;
    this->BodyRadius = 0.50f;
    this->HeadLength = 0.50f;
    this->HeadRadius = 0.75f;
    this->NumSides = 32;
    this->HeadType = EGizmoElementArrowHeadType::Cone;
}


