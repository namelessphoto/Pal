#include "DynamicMeshActor.h"
#include "DynamicMeshComponent.h"

ADynamicMeshActor::ADynamicMeshActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UDynamicMeshComponent>(TEXT("DynamicMeshComponent"));
    this->DynamicMeshComponent = (UDynamicMeshComponent*)RootComponent;
    this->bEnableComputeMeshPool = true;
    this->DynamicMeshPool = NULL;
}

bool ADynamicMeshActor::ReleaseComputeMesh(UDynamicMesh* Mesh) {
    return false;
}

void ADynamicMeshActor::ReleaseAllComputeMeshes() {
}

UDynamicMeshComponent* ADynamicMeshActor::GetDynamicMeshComponent() const {
    return NULL;
}

UDynamicMeshPool* ADynamicMeshActor::GetComputeMeshPool() {
    return NULL;
}

void ADynamicMeshActor::FreeAllComputeMeshes() {
}

UDynamicMesh* ADynamicMeshActor::AllocateComputeMesh() {
    return NULL;
}


