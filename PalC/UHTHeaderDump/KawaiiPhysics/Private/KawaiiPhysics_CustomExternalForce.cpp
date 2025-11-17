#include "KawaiiPhysics_CustomExternalForce.h"

UKawaiiPhysics_CustomExternalForce::UKawaiiPhysics_CustomExternalForce() {
    this->bIsEnabled = true;
    this->bDrawDebug = false;
}

void UKawaiiPhysics_CustomExternalForce::PreApply_Implementation(FAnimNode_KawaiiPhysics& Node, const USkeletalMeshComponent* SkelComp) {
}

bool UKawaiiPhysics_CustomExternalForce::IsDebugEnabled() {
    return false;
}

void UKawaiiPhysics_CustomExternalForce::Apply_Implementation(FAnimNode_KawaiiPhysics& Node, int32 ModifyBoneIndex, const USkeletalMeshComponent* SkelComp, const FTransform& BoneTransform) {
}


