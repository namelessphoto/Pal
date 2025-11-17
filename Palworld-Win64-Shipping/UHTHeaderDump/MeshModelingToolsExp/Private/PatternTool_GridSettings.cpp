#include "PatternTool_GridSettings.h"

UPatternTool_GridSettings::UPatternTool_GridSettings() {
    this->SpacingX = EPatternToolAxisSpacingMode::ByCount;
    this->CountX = 10;
    this->StepSizeX = 100.00f;
    this->ExtentX = 1000.00f;
    this->bCenteredX = true;
    this->SpacingY = EPatternToolAxisSpacingMode::ByCount;
    this->CountY = 10;
    this->StepSizeY = 100.00f;
    this->ExtentY = 1000.00f;
    this->bCenteredY = true;
}


