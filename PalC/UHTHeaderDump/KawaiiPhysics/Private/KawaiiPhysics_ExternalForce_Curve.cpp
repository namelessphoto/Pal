#include "KawaiiPhysics_ExternalForce_Curve.h"

FKawaiiPhysics_ExternalForce_Curve::FKawaiiPhysics_ExternalForce_Curve() {
    this->CurveEvaluateType = EExternalForceCurveEvaluateType::Single;
    this->SubstepCount = 0;
    this->TimeScale = 0.00f;
    this->Time = 0.00f;
    this->PrevTime = 0.00f;
    this->MaxCurveTime = 0.00f;
}

