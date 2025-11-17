#include "NiagaraDataInterfaceRenderTargetVolume.h"

UNiagaraDataInterfaceRenderTargetVolume::UNiagaraDataInterfaceRenderTargetVolume() {
    this->OverrideRenderTargetFormat = ETextureRenderTargetFormat::RTF_R8;
    this->bInheritUserParameterSettings = false;
    this->bOverrideFormat = false;
}


