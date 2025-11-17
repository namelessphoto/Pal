#include "DynamicMesh.h"

UDynamicMesh::UDynamicMesh() {
    this->MeshGenerator = NULL;
    this->bEnableMeshGenerator = false;
}

UDynamicMesh* UDynamicMesh::ResetToCube() {
    return NULL;
}

UDynamicMesh* UDynamicMesh::Reset() {
    return NULL;
}

bool UDynamicMesh::IsEmpty() const {
    return false;
}

int32 UDynamicMesh::GetTriangleCount() const {
    return 0;
}


