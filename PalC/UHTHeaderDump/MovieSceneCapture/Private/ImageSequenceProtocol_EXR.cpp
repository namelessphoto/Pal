#include "ImageSequenceProtocol_EXR.h"

UImageSequenceProtocol_EXR::UImageSequenceProtocol_EXR() {
    this->bCompressed = false;
    this->CaptureGamut = EHDRCaptureGamut::HCGM_Rec709;
}


