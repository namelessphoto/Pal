#include "BodySetupCore.h"

UBodySetupCore::UBodySetupCore() {
    this->PhysicsType = EPhysicsType::PhysType_Default;
    this->CollisionTraceFlag = ECollisionTraceFlag::CTF_UseDefault;
    this->CollisionReponse = EBodyCollisionResponse::BodyCollision_Enabled;
}


