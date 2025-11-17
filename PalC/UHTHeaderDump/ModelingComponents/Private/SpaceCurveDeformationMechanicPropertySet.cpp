#include "SpaceCurveDeformationMechanicPropertySet.h"

USpaceCurveDeformationMechanicPropertySet::USpaceCurveDeformationMechanicPropertySet() {
    this->TransformMode = ESpaceCurveControlPointTransformMode::PerVertex;
    this->TransformOrigin = ESpaceCurveControlPointOriginMode::First;
    this->Softness = 0.50f;
    this->SoftFalloff = ESpaceCurveControlPointFalloffType::Smooth;
}


