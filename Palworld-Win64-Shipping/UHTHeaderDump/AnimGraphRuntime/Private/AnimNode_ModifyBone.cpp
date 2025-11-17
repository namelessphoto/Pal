#include "AnimNode_ModifyBone.h"

FAnimNode_ModifyBone::FAnimNode_ModifyBone() {
    this->TranslationMode = EBoneModificationMode::BMM_Ignore;
    this->RotationMode = EBoneModificationMode::BMM_Ignore;
    this->ScaleMode = EBoneModificationMode::BMM_Ignore;
    this->TranslationSpace = EBoneControlSpace::BCS_WorldSpace;
    this->RotationSpace = EBoneControlSpace::BCS_WorldSpace;
    this->ScaleSpace = EBoneControlSpace::BCS_WorldSpace;
}

