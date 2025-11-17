#include "ProceduralRectangleToolProperties.h"

UProceduralRectangleToolProperties::UProceduralRectangleToolProperties() {
    this->RectangleType = EProceduralRectType::Rectangle;
    this->Width = 100.00f;
    this->Depth = 100.00f;
    this->WidthSubdivisions = 1;
    this->DepthSubdivisions = 1;
    this->CornerRadius = 25.00f;
    this->CornerSlices = 16;
}


