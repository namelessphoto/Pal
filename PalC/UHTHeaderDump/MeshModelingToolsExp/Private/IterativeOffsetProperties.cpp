#include "IterativeOffsetProperties.h"

UIterativeOffsetProperties::UIterativeOffsetProperties() {
    this->Steps = 10;
    this->bOffsetBoundaries = true;
    this->SmoothingPerStep = 0.00f;
    this->bReprojectSmooth = false;
}


