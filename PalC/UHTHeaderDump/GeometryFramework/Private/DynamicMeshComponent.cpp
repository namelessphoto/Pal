#include "DynamicMeshComponent.h"
#include "DynamicMesh.h"

UDynamicMeshComponent::UDynamicMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MeshObject = CreateDefaultSubobject<UDynamicMesh>(TEXT("DynamicMesh"));
    this->TangentsType = EDynamicMeshComponentTangentsMode::NoTangents;
    this->CollisionType = ECollisionTraceFlag::CTF_UseSimpleAsComplex;
    this->bUseAsyncCooking = false;
    this->bEnableComplexCollision = false;
    this->bDeferCollisionUpdates = false;
    this->MeshBodySetup = NULL;
}

bool UDynamicMeshComponent::ValidateMaterialSlots(bool bCreateIfMissing, bool bDeleteExtraSlots) {
    return false;
}

void UDynamicMeshComponent::UpdateCollision(bool bOnlyIfPending) {
}

void UDynamicMeshComponent::SetTangentsType(EDynamicMeshComponentTangentsMode NewTangentsType) {
}

void UDynamicMeshComponent::SetDynamicMesh(UDynamicMesh* NewMesh) {
}

void UDynamicMeshComponent::SetDeferredCollisionUpdatesEnabled(bool bEnabled, bool bImmediateUpdate) {
}

void UDynamicMeshComponent::SetComplexAsSimpleCollisionEnabled(bool bEnabled, bool bImmediateUpdate) {
}

EDynamicMeshComponentTangentsMode UDynamicMeshComponent::GetTangentsType() const {
    return EDynamicMeshComponentTangentsMode::NoTangents;
}

void UDynamicMeshComponent::EnableComplexAsSimpleCollision() {
}

void UDynamicMeshComponent::ConfigureMaterialSet(const TArray<UMaterialInterface*>& NewMaterialSet) {
}


