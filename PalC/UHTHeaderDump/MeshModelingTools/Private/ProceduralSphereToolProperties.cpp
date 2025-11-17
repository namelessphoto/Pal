#include "ProceduralSphereToolProperties.h"

UProceduralSphereToolProperties::UProceduralSphereToolProperties() {
    this->Radius = 50.00f;
    this->SubdivisionType = EProceduralSphereType::Box;
    this->Subdivisions = 16;
    this->HorizontalSlices = 16;
    this->VerticalSlices = 16;
}


