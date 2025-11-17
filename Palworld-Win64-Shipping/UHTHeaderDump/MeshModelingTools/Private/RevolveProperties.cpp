#include "RevolveProperties.h"

URevolveProperties::URevolveProperties() {
    this->RevolveDegreesClamped = 360.00f;
    this->RevolveDegrees = 360.00f;
    this->RevolveDegreesOffset = 0.00f;
    this->StepsMaxDegrees = 15.00f;
    this->bExplicitSteps = false;
    this->NumExplicitSteps = 24;
    this->HeightOffsetPerDegree = 0.00f;
    this->bReverseRevolutionDirection = false;
    this->bFlipMesh = false;
    this->bSharpNormals = false;
    this->SharpNormalsDegreeThreshold = 0.10f;
    this->bPathAtMidpointOfStep = false;
    this->PolygroupMode = ERevolvePropertiesPolygroupMode::PerFace;
    this->QuadSplitMode = ERevolvePropertiesQuadSplit::Compact;
}


