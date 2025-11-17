#include "KawaiiPhysicsModifyBone.h"

FKawaiiPhysicsModifyBone::FKawaiiPhysicsModifyBone() {
    this->Index = 0;
    this->ParentIndex = 0;
    this->LengthFromRoot = 0.00f;
    this->LengthRateFromRoot = 0.00f;
    this->bDummy = false;
    this->bSkipSimulate = false;
}

