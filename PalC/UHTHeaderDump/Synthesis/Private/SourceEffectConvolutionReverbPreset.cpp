#include "SourceEffectConvolutionReverbPreset.h"

USourceEffectConvolutionReverbPreset::USourceEffectConvolutionReverbPreset() {
    this->ImpulseResponse = NULL;
    this->blockSize = ESubmixEffectConvolutionReverbBlockSize::BlockSize1024;
    this->bEnableHardwareAcceleration = true;
}

void USourceEffectConvolutionReverbPreset::SetSettings(const FSourceEffectConvolutionReverbSettings& InSettings) {
}

void USourceEffectConvolutionReverbPreset::SetImpulseResponse(UAudioImpulseResponse* InImpulseResponse) {
}


