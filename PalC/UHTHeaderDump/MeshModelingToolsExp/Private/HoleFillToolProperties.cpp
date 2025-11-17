#include "HoleFillToolProperties.h"

UHoleFillToolProperties::UHoleFillToolProperties() {
    this->FillType = EHoleFillOpFillType::Minimal;
    this->bRemoveIsolatedTriangles = false;
    this->bQuickFillSmallHoles = false;
}


