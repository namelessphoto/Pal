#include "NiagaraDataInterfaceRenderTargetCube.h"

UNiagaraDataInterfaceRenderTargetCube::UNiagaraDataInterfaceRenderTargetCube() {
    this->Size = 0;
    this->OverrideRenderTargetFormat = ETextureRenderTargetFormat::RTF_R8;
    this->bInheritUserParameterSettings = false;
    this->bOverrideFormat = false;
}


