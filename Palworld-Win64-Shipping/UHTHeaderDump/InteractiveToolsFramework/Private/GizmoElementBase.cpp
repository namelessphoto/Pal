#include "GizmoElementBase.h"

UGizmoElementBase::UGizmoElementBase() {
    this->bEnabled = true;
    this->bEnabledForPerspectiveProjection = true;
    this->bEnabledForOrthographicProjection = true;
    this->bEnabledForDefaultState = true;
    this->bEnabledForHoveringState = true;
    this->bEnabledForInteractingState = true;
    this->PartIdentifier = 0;
    this->ElementState = EGizmoElementState::VisibleAndHittable;
    this->ElementInteractionState = EGizmoElementInteractionState::None;
    this->ViewDependentType = EGizmoElementViewDependentType::None;
    this->ViewDependentAngleTol = 0.05f;
    this->ViewDependentAxialMaxCosAngleTol = 1.00f;
    this->ViewDependentPlanarMinCosAngleTol = 0.05f;
    this->ViewAlignType = EGizmoElementViewAlignType::None;
    this->ViewAlignAxialAngleTol = 0.05f;
    this->ViewAlignAxialMaxCosAngleTol = 1.00f;
    this->PixelHitDistanceThreshold = 7.00f;
}


