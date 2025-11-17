#include "ModifyBoneConstraint.h"

FModifyBoneConstraint::FModifyBoneConstraint() {
    this->bOverrideCompliance = false;
    this->ComplianceType = EXPBDComplianceType::Concrete;
    this->ModifyBoneIndex1 = 0;
    this->ModifyBoneIndex2 = 0;
    this->Length = 0.00f;
    this->bIsDummy = false;
    this->Lambda = 0.00f;
}

