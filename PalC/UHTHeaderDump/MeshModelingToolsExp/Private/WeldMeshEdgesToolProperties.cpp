#include "WeldMeshEdgesToolProperties.h"

UWeldMeshEdgesToolProperties::UWeldMeshEdgesToolProperties() {
    this->Tolerance = 0.00f;
    this->bOnlyUnique = false;
    this->bResolveTJunctions = false;
    this->InitialEdges = 0;
    this->RemainingEdges = 0;
}


