#include "GizmoElementCircleBase.h"

UGizmoElementCircleBase::UGizmoElementCircleBase() {
    this->Radius = 100.00f;
    this->NumSegments = 64;
    this->PartialType = EGizmoElementPartialType::None;
    this->PartialStartAngle = 0.00f;
    this->PartialEndAngle = 6.28f;
    this->PartialViewDependentMaxCosTol = 0.96f;
}


