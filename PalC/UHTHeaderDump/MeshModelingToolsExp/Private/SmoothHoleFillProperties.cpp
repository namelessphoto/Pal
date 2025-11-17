#include "SmoothHoleFillProperties.h"

USmoothHoleFillProperties::USmoothHoleFillProperties() {
    this->bConstrainToHoleInterior = true;
    this->RemeshingExteriorRegionWidth = 2;
    this->SmoothingExteriorRegionWidth = 2;
    this->SmoothingInteriorRegionWidth = 2;
    this->InteriorSmoothness = 0.20f;
    this->FillDensityScalar = 1.00f;
    this->bProjectDuringRemesh = false;
}


