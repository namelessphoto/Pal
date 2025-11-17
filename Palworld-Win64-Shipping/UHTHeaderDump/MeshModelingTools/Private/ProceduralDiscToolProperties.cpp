#include "ProceduralDiscToolProperties.h"

UProceduralDiscToolProperties::UProceduralDiscToolProperties() {
    this->DiscType = EProceduralDiscType::Disc;
    this->Radius = 50.00f;
    this->RadialSlices = 16;
    this->RadialSubdivisions = 1;
    this->HoleRadius = 25.00f;
}


