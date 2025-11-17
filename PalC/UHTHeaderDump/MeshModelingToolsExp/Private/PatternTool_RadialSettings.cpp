#include "PatternTool_RadialSettings.h"

UPatternTool_RadialSettings::UPatternTool_RadialSettings() {
    this->SpacingMode = EPatternToolAxisSpacingMode::ByCount;
    this->Count = 10;
    this->StepSize = 100.00f;
    this->Radius = 250.00f;
    this->StartAngle = 0.00f;
    this->EndAngle = 360.00f;
    this->AngleShift = 0.00f;
    this->bOriented = true;
}


