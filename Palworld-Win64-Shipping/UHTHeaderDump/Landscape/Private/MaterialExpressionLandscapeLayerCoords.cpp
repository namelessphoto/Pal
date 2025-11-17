#include "MaterialExpressionLandscapeLayerCoords.h"

UMaterialExpressionLandscapeLayerCoords::UMaterialExpressionLandscapeLayerCoords() {
    this->MappingType = ETerrainCoordMappingType::TCMT_Auto;
    this->CustomUVType = ELandscapeCustomizedCoordType::LCCT_None;
    this->MappingScale = 0.00f;
    this->MappingRotation = 0.00f;
    this->MappingPanU = 0.00f;
    this->MappingPanV = 0.00f;
}


