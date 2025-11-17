#include "PatternTool_LinearSettings.h"

UPatternTool_LinearSettings::UPatternTool_LinearSettings() {
    this->SpacingMode = EPatternToolAxisSpacingMode::ByCount;
    this->Count = 10;
    this->StepSize = 100.00f;
    this->Extent = 1000.00f;
    this->bCentered = true;
}


