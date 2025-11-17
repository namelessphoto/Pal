#include "BakeCurvatureMapToolProperties.h"

UBakeCurvatureMapToolProperties::UBakeCurvatureMapToolProperties() {
    this->CurvatureType = EBakeCurvatureTypeMode::MeanAverage;
    this->ColorMapping = EBakeCurvatureColorMode::Grayscale;
    this->ColorRangeMultiplier = 1.00f;
    this->MinRangeMultiplier = 0.00f;
    this->Clamping = EBakeCurvatureClampMode::None;
}


