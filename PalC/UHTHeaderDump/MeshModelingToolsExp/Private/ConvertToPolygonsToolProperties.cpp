#include "ConvertToPolygonsToolProperties.h"

UConvertToPolygonsToolProperties::UConvertToPolygonsToolProperties() {
    this->ConversionMode = EConvertToPolygonsMode::FaceNormalDeviation;
    this->AngleTolerance = 0.10f;
    this->NumPoints = 100;
    this->bSplitExisting = false;
    this->bNormalWeighted = true;
    this->NormalWeighting = 1.00f;
    this->QuadAdjacencyWeight = 1.00f;
    this->QuadMetricClamp = 1.00f;
    this->QuadSearchRounds = 1;
    this->bRespectUVSeams = false;
    this->bRespectHardNormals = false;
    this->MinGroupSize = 2;
    this->bCalculateNormals = false;
    this->bShowGroupColors = true;
}


