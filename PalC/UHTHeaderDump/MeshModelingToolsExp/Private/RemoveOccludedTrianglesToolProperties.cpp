#include "RemoveOccludedTrianglesToolProperties.h"

URemoveOccludedTrianglesToolProperties::URemoveOccludedTrianglesToolProperties() {
    this->OcclusionTestMethod = EOcclusionCalculationUIMode::GeneralizedWindingNumber;
    this->TriangleSampling = EOcclusionTriangleSamplingUIMode::VerticesAndCentroids;
    this->WindingIsoValue = 0.50f;
    this->AddRandomRays = 0;
    this->AddTriangleSamples = 0;
    this->bOnlySelfOcclude = false;
    this->ShrinkRemoval = 0;
    this->MinAreaIsland = 0.00f;
    this->MinTriCountIsland = 0;
    this->action = EOccludedAction::Remove;
}


