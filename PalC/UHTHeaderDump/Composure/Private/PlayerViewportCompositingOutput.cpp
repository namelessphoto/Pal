#include "PlayerViewportCompositingOutput.h"
#include "CompositingTonemapPass.h"

UPlayerViewportCompositingOutput::UPlayerViewportCompositingOutput() {
    this->DefaultConverterClass = UCompositingTonemapPass::StaticClass();
    this->PlayerIndex = 0;
    this->ApplyToneCurve = false;
    this->ActiveCamModifier = NULL;
    this->ViewportOverrideMID = NULL;
}


