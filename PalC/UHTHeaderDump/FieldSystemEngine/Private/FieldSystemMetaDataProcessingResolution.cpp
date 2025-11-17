#include "FieldSystemMetaDataProcessingResolution.h"

UFieldSystemMetaDataProcessingResolution::UFieldSystemMetaDataProcessingResolution(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ResolutionType = EFieldResolutionType::Field_Resolution_Minimal;
}

UFieldSystemMetaDataProcessingResolution* UFieldSystemMetaDataProcessingResolution::SetMetaDataaProcessingResolutionType(TEnumAsByte<EFieldResolutionType> NewResolutionType) {
    return NULL;
}


