#include "MeshEditingViewProperties.h"

UMeshEditingViewProperties::UMeshEditingViewProperties() {
    this->bShowWireframe = false;
    this->MaterialMode = EMeshEditingMaterialModes::Diffuse;
    this->bFlatShading = true;
    this->Image = NULL;
    this->Opacity = 0.65f;
    this->bTwoSided = true;
}


