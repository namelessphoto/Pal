#include "ProceduralStairsToolProperties.h"

UProceduralStairsToolProperties::UProceduralStairsToolProperties() {
    this->StairsType = EProceduralStairsType::Linear;
    this->NumSteps = 8;
    this->StepWidth = 150.00f;
    this->StepHeight = 20.00f;
    this->StepDepth = 30.00f;
    this->CurveAngle = 90.00f;
    this->SpiralAngle = 90.00f;
    this->InnerRadius = 150.00f;
}


