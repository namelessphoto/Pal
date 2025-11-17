#include "NiagaraVariableAttributeBinding.h"

FNiagaraVariableAttributeBinding::FNiagaraVariableAttributeBinding() {
    this->BindingSourceMode = ENiagaraBindingSource::ImplicitFromSource;
    this->bBindingExistsOnSource = false;
    this->bIsCachedParticleValue = false;
}

