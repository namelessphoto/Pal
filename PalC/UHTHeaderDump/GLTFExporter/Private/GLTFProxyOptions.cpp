#include "GLTFProxyOptions.h"

UGLTFProxyOptions::UGLTFProxyOptions() {
    this->bBakeMaterialInputs = true;
    this->DefaultMaterialBakeSize = EGLTFMaterialBakeSizePOT::POT_1024;
    this->DefaultMaterialBakeFilter = TextureFilter::TF_Trilinear;
    this->DefaultMaterialBakeTiling = TextureAddress::TA_Wrap;
}

void UGLTFProxyOptions::ResetToDefault() {
}


