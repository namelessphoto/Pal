#include "KawaiiPhysics_ExternalForce.h"

FKawaiiPhysics_ExternalForce::FKawaiiPhysics_ExternalForce() {
    this->bIsEnabled = false;
    this->bDrawDebug = false;
    this->ExternalForceSpace = EExternalForceSpace::ComponentSpace;
    this->ExternalOwner = NULL;
    this->bIsOneShot = false;
    this->RandomizedForceScale = 0.00f;
    this->bCanSelectForceSpace = false;
}

