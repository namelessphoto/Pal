#include "AnimNode_ObserveBone.h"

FAnimNode_ObserveBone::FAnimNode_ObserveBone() {
    this->DisplaySpace = EBoneControlSpace::BCS_WorldSpace;
    this->bRelativeToRefPose = false;
}

