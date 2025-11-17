#include "EditNormalsToolProperties.h"

UEditNormalsToolProperties::UEditNormalsToolProperties() {
    this->bRecomputeNormals = true;
    this->NormalCalculationMethod = ENormalCalculationMethod::AreaAngleWeighting;
    this->bFixInconsistentNormals = false;
    this->bInvertNormals = false;
    this->SplitNormalMethod = ESplitNormalMethod::UseExistingTopology;
    this->SharpEdgeAngleThreshold = 60.00f;
    this->bAllowSharpVertices = false;
}


