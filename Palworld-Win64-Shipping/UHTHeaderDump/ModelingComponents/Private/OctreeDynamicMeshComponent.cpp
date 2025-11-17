#include "OctreeDynamicMeshComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GeometryFramework -ObjectName=DynamicMesh -FallbackName=DynamicMesh

UOctreeDynamicMeshComponent::UOctreeDynamicMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MeshObject = CreateDefaultSubobject<UDynamicMesh>(TEXT("DynamicMesh"));
}

void UOctreeDynamicMeshComponent::SetDynamicMesh(UDynamicMesh* NewMesh) {
}


