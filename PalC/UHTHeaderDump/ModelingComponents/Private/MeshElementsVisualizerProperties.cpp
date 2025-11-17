#include "MeshElementsVisualizerProperties.h"

UMeshElementsVisualizerProperties::UMeshElementsVisualizerProperties() {
    this->bVisible = true;
    this->bShowWireframe = false;
    this->bShowBorders = true;
    this->bShowUVSeams = true;
    this->bShowNormalSeams = true;
    this->bShowColorSeams = true;
    this->ThicknessScale = 1.00f;
    this->DepthBias = 0.20f;
    this->bAdjustDepthBiasUsingMeshSize = true;
}


