#include "DisplaceMeshCommonProperties.h"

UDisplaceMeshCommonProperties::UDisplaceMeshCommonProperties() {
    this->DisplacementType = EDisplaceMeshToolDisplaceType::PerlinNoise;
    this->DisplaceIntensity = 10.00f;
    this->RandomSeed = 31337;
    this->SubdivisionType = EDisplaceMeshToolSubdivisionType::PNTriangles;
    this->Subdivisions = 4;
    this->bInvertWeightMap = false;
    this->bShowWireframe = false;
    this->bDisableSizeWarning = false;
}

TArray<FString> UDisplaceMeshCommonProperties::GetWeightMapsFunc() {
    return TArray<FString>();
}


