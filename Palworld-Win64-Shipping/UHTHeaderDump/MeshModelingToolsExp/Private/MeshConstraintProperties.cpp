#include "MeshConstraintProperties.h"

UMeshConstraintProperties::UMeshConstraintProperties() {
    this->bPreserveSharpEdges = false;
    this->MeshBoundaryConstraint = EMeshBoundaryConstraint::Free;
    this->GroupBoundaryConstraint = EGroupBoundaryConstraint::Free;
    this->MaterialBoundaryConstraint = EMaterialBoundaryConstraint::Free;
    this->bPreventNormalFlips = false;
    this->bPreventTinyTriangles = false;
}


