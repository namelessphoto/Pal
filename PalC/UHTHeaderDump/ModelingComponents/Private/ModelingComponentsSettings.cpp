#include "ModelingComponentsSettings.h"

UModelingComponentsSettings::UModelingComponentsSettings() {
    this->bEnableRayTracingWhileEditing = false;
    this->bEnableRayTracing = false;
    this->bEnableCollision = true;
    this->CollisionMode = ECollisionTraceFlag::CTF_UseComplexAsSimple;
}


