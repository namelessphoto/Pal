#include "BakeMeshAttributeMapsToolProperties.h"

UBakeMeshAttributeMapsToolProperties::UBakeMeshAttributeMapsToolProperties() {
    this->MapTypes = 0;
    this->Resolution = EBakeTextureResolution::Resolution256;
    this->BitDepth = EBakeTextureBitDepth::ChannelBits8;
    this->SamplesPerPixel = EBakeTextureSamplesPerPixel::Sample1;
    this->SampleFilterMask = NULL;
}

TArray<FString> UBakeMeshAttributeMapsToolProperties::GetMapPreviewNamesFunc() {
    return TArray<FString>();
}


