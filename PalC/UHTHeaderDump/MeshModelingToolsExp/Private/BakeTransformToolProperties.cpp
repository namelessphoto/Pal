#include "BakeTransformToolProperties.h"

UBakeTransformToolProperties::UBakeTransformToolProperties() {
    this->bBakeRotation = true;
    this->BakeScale = EBakeScaleMethod::BakeFullScale;
    this->bRecenterPivot = false;
    this->bAllowNoScale = true;
}


