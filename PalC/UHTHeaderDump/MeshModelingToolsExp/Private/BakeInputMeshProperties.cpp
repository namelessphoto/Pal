#include "BakeInputMeshProperties.h"

UBakeInputMeshProperties::UBakeInputMeshProperties() {
    this->TargetStaticMesh = NULL;
    this->TargetSkeletalMesh = NULL;
    this->TargetDynamicMesh = NULL;
    this->bHasTargetUVLayer = false;
    this->SourceStaticMesh = NULL;
    this->SourceSkeletalMesh = NULL;
    this->SourceDynamicMesh = NULL;
    this->bHideSourceMesh = false;
    this->SourceNormalMap = NULL;
    this->SourceNormalSpace = EBakeNormalSpace::Tangent;
    this->bHasSourceNormalMap = false;
    this->ProjectionDistance = 3.00f;
    this->bProjectionInWorldSpace = false;
}

TArray<FString> UBakeInputMeshProperties::GetTargetUVLayerNamesFunc() const {
    return TArray<FString>();
}

TArray<FString> UBakeInputMeshProperties::GetSourceUVLayerNamesFunc() const {
    return TArray<FString>();
}


