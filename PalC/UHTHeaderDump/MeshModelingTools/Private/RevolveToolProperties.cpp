#include "RevolveToolProperties.h"

URevolveToolProperties::URevolveToolProperties() {
    this->CapFillMode = ERevolvePropertiesCapFillMode::Delaunay;
    this->bClosePathToAxis = true;
    this->bEnableSnapping = true;
    this->bAllowedToEditDrawPlane = true;
}


