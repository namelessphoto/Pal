#include "ExistingMeshMaterialProperties.h"

UExistingMeshMaterialProperties::UExistingMeshMaterialProperties() {
    this->MaterialMode = ESetMeshMaterialMode::Original;
    this->CheckerDensity = 20.00f;
    this->OverrideMaterial = NULL;
    this->CheckerMaterial = NULL;
}

TArray<FString> UExistingMeshMaterialProperties::GetUVChannelNamesFunc() const {
    return TArray<FString>();
}


