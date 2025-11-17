#include "UVProjectionToolProperties.h"

UUVProjectionToolProperties::UUVProjectionToolProperties() {
    this->ProjectionType = EUVProjectionMethod::Plane;
    this->bUniformDimensions = false;
    this->Initialization = EUVProjectionToolInitializationMode::Default;
    this->CylinderSplitAngle = 45.00f;
    this->ExpMapNormalBlending = 0.00f;
    this->ExpMapSmoothingSteps = 0;
    this->ExpMapSmoothingAlpha = 0.25f;
    this->Rotation = 0.00f;
    this->bSavedUniformDimensions = false;
}


