#include "AlignObjectsToolProperties.h"

UAlignObjectsToolProperties::UAlignObjectsToolProperties() {
    this->AlignType = EAlignObjectsAlignTypes::BoundingBoxes;
    this->AlignTo = EAlignObjectsAlignToOptions::Combined;
    this->BoxPosition = EAlignObjectsBoxPoint::Center;
    this->bAlignX = false;
    this->bAlignY = false;
    this->bAlignZ = true;
}


