#include "CollisionLimitBase.h"

FCollisionLimitBase::FCollisionLimitBase() {
    this->bEnable = false;
    this->SourceType = ECollisionSourceType::AnimNode;
}

