#include "NiagaraScalabilityState.h"

FNiagaraScalabilityState::FNiagaraScalabilityState() {
    this->Significance = 0.00f;
    this->LastVisibleTime = 0.00f;
    this->bNewlyRegistered = false;
    this->bCulled = false;
    this->bPreviousCulled = false;
    this->bCulledByDistance = false;
    this->bCulledByInstanceCount = false;
    this->bCulledByVisibility = false;
    this->bCulledByGlobalBudget = false;
}

