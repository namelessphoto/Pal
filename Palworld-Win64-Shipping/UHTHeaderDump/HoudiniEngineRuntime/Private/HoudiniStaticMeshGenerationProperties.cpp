#include "HoudiniStaticMeshGenerationProperties.h"

FHoudiniStaticMeshGenerationProperties::FHoudiniStaticMeshGenerationProperties() {
    this->bGeneratedDoubleSidedGeometry = false;
    this->GeneratedPhysMaterial = NULL;
    this->GeneratedCollisionTraceFlag = ECollisionTraceFlag::CTF_UseDefault;
    this->GeneratedLightMapResolution = 0;
    this->GeneratedLightMapCoordinateIndex = 0;
    this->bGeneratedUseMaximumStreamingTexelRatio = false;
    this->GeneratedStreamingDistanceMultiplier = 0.00f;
    this->GeneratedFoliageDefaultSettings = NULL;
}

