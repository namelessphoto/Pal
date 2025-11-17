#include "PatternToolSettings.h"

UPatternToolSettings::UPatternToolSettings() {
    this->Shape = EPatternToolShape::Line;
    this->SingleAxis = EPatternToolSingleAxis::XAxis;
    this->SinglePlane = EPatternToolSinglePlane::XYPlane;
    this->bHideSources = true;
    this->Seed = 17879;
}


