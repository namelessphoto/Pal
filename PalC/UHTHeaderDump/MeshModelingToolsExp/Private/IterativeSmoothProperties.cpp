#include "IterativeSmoothProperties.h"

UIterativeSmoothProperties::UIterativeSmoothProperties() {
    this->SmoothingPerStep = 0.80f;
    this->Steps = 10;
    this->bSmoothBoundary = true;
}


