#include "CompositingMediaCaptureOutput.h"
#include "CompositingTonemapPass.h"

UCompositingMediaCaptureOutput::UCompositingMediaCaptureOutput() {
    this->DefaultConverterClass = UCompositingTonemapPass::StaticClass();
    this->CaptureOutput = NULL;
    this->ActiveCapture = NULL;
}


