#include "BakeMultiMeshInputToolProperties.h"

UBakeMultiMeshInputToolProperties::UBakeMultiMeshInputToolProperties() {
    this->TargetStaticMesh = NULL;
    this->TargetSkeletalMesh = NULL;
    this->TargetDynamicMesh = NULL;
    this->ProjectionDistance = 3.00f;
}

TArray<FString> UBakeMultiMeshInputToolProperties::GetTargetUVLayerNamesFunc() const {
    return TArray<FString>();
}


