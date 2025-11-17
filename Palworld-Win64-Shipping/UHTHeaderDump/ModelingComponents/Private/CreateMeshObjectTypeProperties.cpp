#include "CreateMeshObjectTypeProperties.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlockingVolume -FallbackName=BlockingVolume

UCreateMeshObjectTypeProperties::UCreateMeshObjectTypeProperties() {
    this->VolumeType = ABlockingVolume::StaticClass();
    this->bShowVolumeList = false;
}

bool UCreateMeshObjectTypeProperties::ShouldShowPropertySet() const {
    return false;
}

TArray<FString> UCreateMeshObjectTypeProperties::GetOutputTypeNamesFunc() {
    return TArray<FString>();
}

ECreateObjectTypeHint UCreateMeshObjectTypeProperties::GetCurrentCreateMeshType() const {
    return ECreateObjectTypeHint::Undefined;
}


