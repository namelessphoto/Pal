#include "BakeRenderCaptureToolProperties.h"

UBakeRenderCaptureToolProperties::UBakeRenderCaptureToolProperties() {
    this->SamplesPerPixel = EBakeTextureSamplesPerPixel::Sample1;
    this->TextureSize = EBakeTextureResolution::Resolution512;
    this->ValidSampleDepthThreshold = 0.00f;
}

TArray<FString> UBakeRenderCaptureToolProperties::GetMapPreviewNamesFunc() {
    return TArray<FString>();
}


