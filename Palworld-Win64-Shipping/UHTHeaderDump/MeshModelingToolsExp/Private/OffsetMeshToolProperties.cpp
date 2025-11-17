#include "OffsetMeshToolProperties.h"

UOffsetMeshToolProperties::UOffsetMeshToolProperties() {
    this->OffsetType = EOffsetMeshToolOffsetType::Iterative;
    this->Distance = 1.00f;
    this->bCreateShell = false;
}


