#include "MeshWireframeComponent.h"

UMeshWireframeComponent::UMeshWireframeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bSelectable = false;
    this->CastShadow = false;
    this->LineDepthBias = 0.10f;
    this->LineDepthBiasSizeScale = 1.00f;
    this->ThicknessScale = 1.00f;
    this->bEnableWireframe = true;
    this->WireframeThickness = 1.00f;
    this->bEnableBoundaryEdges = true;
    this->BoundaryEdgeThickness = 4.00f;
    this->bEnableUVSeams = true;
    this->UVSeamThickness = 2.00f;
    this->bEnableNormalSeams = true;
    this->NormalSeamThickness = 2.00f;
    this->bEnableColorSeams = true;
    this->ColorSeamThickness = 2.00f;
    this->LineMaterial = NULL;
}


