#include "ModifyBoneConstraintData.h"

FModifyBoneConstraintData::FModifyBoneConstraintData() {
    this->bOverrideCompliance = false;
    this->ComplianceType = EXPBDComplianceType::Concrete;
}

