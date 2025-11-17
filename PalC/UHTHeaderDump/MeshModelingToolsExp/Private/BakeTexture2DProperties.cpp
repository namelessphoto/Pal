#include "BakeTexture2DProperties.h"

UBakeTexture2DProperties::UBakeTexture2DProperties() {
    this->SourceTexture = NULL;
}

TArray<FString> UBakeTexture2DProperties::GetUVLayerNamesFunc() const {
    return TArray<FString>();
}


