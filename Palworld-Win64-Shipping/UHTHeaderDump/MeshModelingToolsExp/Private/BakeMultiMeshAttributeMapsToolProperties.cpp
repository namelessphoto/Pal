#include "BakeMultiMeshAttributeMapsToolProperties.h"

UBakeMultiMeshAttributeMapsToolProperties::UBakeMultiMeshAttributeMapsToolProperties() {
    this->MapTypes = 0;
    this->Resolution = EBakeTextureResolution::Resolution256;
    this->BitDepth = EBakeTextureBitDepth::ChannelBits8;
    this->SamplesPerPixel = EBakeTextureSamplesPerPixel::Sample1;
    this->SampleFilterMask = NULL;
}

TArray<FString> UBakeMultiMeshAttributeMapsToolProperties::GetMapPreviewNamesFunc() {
    return TArray<FString>();
}


