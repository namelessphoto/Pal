#include "RigTransformStackEntry.h"

FRigTransformStackEntry::FRigTransformStackEntry() {
    this->EntryType = ERigTransformStackEntryType::TransformPose;
    this->TransformType = ERigTransformType::InitialLocal;
    this->bAffectChildren = false;
}

