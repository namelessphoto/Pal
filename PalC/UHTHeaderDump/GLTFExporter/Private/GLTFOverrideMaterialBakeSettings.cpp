#include "GLTFOverrideMaterialBakeSettings.h"

FGLTFOverrideMaterialBakeSettings::FGLTFOverrideMaterialBakeSettings() {
    this->bOverrideSize = false;
    this->Size = EGLTFMaterialBakeSizePOT::POT_1;
    this->bOverrideFilter = false;
    this->Filter = TextureFilter::TF_Nearest;
    this->bOverrideTiling = false;
    this->Tiling = TextureAddress::TA_Wrap;
}

