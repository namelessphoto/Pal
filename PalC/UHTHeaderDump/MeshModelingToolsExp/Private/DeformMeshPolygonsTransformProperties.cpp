#include "DeformMeshPolygonsTransformProperties.h"

UDeformMeshPolygonsTransformProperties::UDeformMeshPolygonsTransformProperties() {
    this->DeformationStrategy = EGroupTopologyDeformationStrategy::Laplacian;
    this->TransformMode = EQuickTransformerMode::AxisTranslation;
    this->bSelectFaces = true;
    this->bSelectEdges = true;
    this->bSelectVertices = true;
    this->bShowWireframe = false;
    this->SelectedWeightScheme = EWeightScheme::IDTCotangent;
    this->HandleWeight = 1000.00f;
    this->bPostFixHandles = false;
}


