#include "TransferMeshToolProperties.h"

UTransferMeshToolProperties::UTransferMeshToolProperties() {
    this->bTransferMaterials = true;
    this->bIsStaticMeshSource = false;
    this->bIsStaticMeshTarget = false;
}

TArray<FString> UTransferMeshToolProperties::GetTargetLODNamesFunc() const {
    return TArray<FString>();
}

TArray<FString> UTransferMeshToolProperties::GetSourceLODNamesFunc() const {
    return TArray<FString>();
}


