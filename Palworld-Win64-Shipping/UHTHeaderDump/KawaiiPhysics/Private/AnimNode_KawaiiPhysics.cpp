#include "AnimNode_KawaiiPhysics.h"

FAnimNode_KawaiiPhysics::FAnimNode_KawaiiPhysics() {
    this->DummyBoneLength = 0.00f;
    this->BoneForwardAxis = EBoneForwardAxis::X_Positive;
    this->TargetFrameRate = 0;
    this->OverrideTargetFramerate = false;
    this->WarmUpFrames = 0;
    this->bUseWarmUpWhenResetDynamics = false;
    this->bNeedWarmUp = false;
    this->TeleportDistanceThreshold = 0.00f;
    this->TeleportRotationThreshold = 0.00f;
    this->PlanarConstraint = EPlanarConstraint::None;
    this->bUpdatePhysicsSettingsInGame = false;
    this->ResetBoneTransformWhenBoneNotFound = false;
    this->DampingCurve = NULL;
    this->WorldDampingLocationCurve = NULL;
    this->WorldDampingRotationCurve = NULL;
    this->StiffnessCurve = NULL;
    this->RadiusCurve = NULL;
    this->LimitAngleCurve = NULL;
    this->LimitsDataAsset = NULL;
    this->PhysicsAssetForLimits = NULL;
    this->BoneConstraintGlobalComplianceType = EXPBDComplianceType::Concrete;
    this->BoneConstraintIterationCountBeforeCollision = 0;
    this->BoneConstraintIterationCountAfterCollision = 0;
    this->bAutoAddChildDummyBoneConstraint = false;
    this->BoneConstraintsDataAsset = NULL;
    this->bEnableWind = false;
    this->WindScale = 0.00f;
    this->bAllowWorldCollision = false;
    this->bOverrideCollisionParams = false;
    this->bIgnoreSelfComponent = false;
    this->DeltaTime = 0.00f;
    this->bInitPhysicsSettings = false;
}

