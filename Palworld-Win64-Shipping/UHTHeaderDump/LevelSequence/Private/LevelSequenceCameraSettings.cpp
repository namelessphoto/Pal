#include "LevelSequenceCameraSettings.h"

FLevelSequenceCameraSettings::FLevelSequenceCameraSettings() {
    this->bOverrideAspectRatioAxisConstraint = false;
    this->AspectRatioAxisConstraint = EAspectRatioAxisConstraint::AspectRatio_MaintainYFOV;
}

