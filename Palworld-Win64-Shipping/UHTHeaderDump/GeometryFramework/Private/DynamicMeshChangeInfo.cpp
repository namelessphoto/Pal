#include "DynamicMeshChangeInfo.h"

FDynamicMeshChangeInfo::FDynamicMeshChangeInfo() {
    this->Type = EDynamicMeshChangeType::GeneralEdit;
    this->Flags = EDynamicMeshAttributeChangeFlags::Unknown;
    this->bIsRevertChange = false;
}

