#include "KawaiiPhysicsLibrary.h"

UKawaiiPhysicsLibrary::UKawaiiPhysicsLibrary() {
}

FKawaiiPhysicsReference UKawaiiPhysicsLibrary::SetWindScale(const FKawaiiPhysicsReference& KawaiiPhysics, float WindScale) {
    return FKawaiiPhysicsReference{};
}

FKawaiiPhysicsReference UKawaiiPhysicsLibrary::SetTeleportRotationThreshold(const FKawaiiPhysicsReference& KawaiiPhysics, float TeleportRotationThreshold) {
    return FKawaiiPhysicsReference{};
}

FKawaiiPhysicsReference UKawaiiPhysicsLibrary::SetTeleportDistanceThreshold(const FKawaiiPhysicsReference& KawaiiPhysics, float TeleportDistanceThreshold) {
    return FKawaiiPhysicsReference{};
}

FKawaiiPhysicsReference UKawaiiPhysicsLibrary::SetRootBoneName(const FKawaiiPhysicsReference& KawaiiPhysics, FName& RootBoneName) {
    return FKawaiiPhysicsReference{};
}

FKawaiiPhysicsReference UKawaiiPhysicsLibrary::SetPhysicsSettings(const FKawaiiPhysicsReference& KawaiiPhysics, FKawaiiPhysicsSettings& PhysicsSettings) {
    return FKawaiiPhysicsReference{};
}

FKawaiiPhysicsReference UKawaiiPhysicsLibrary::SetNeedWarmUp(const FKawaiiPhysicsReference& KawaiiPhysics, bool bNeedWarmUp) {
    return FKawaiiPhysicsReference{};
}

FKawaiiPhysicsReference UKawaiiPhysicsLibrary::SetLimitsDataAsset(const FKawaiiPhysicsReference& KawaiiPhysics, UKawaiiPhysicsLimitsDataAsset* LimitsDataAsset) {
    return FKawaiiPhysicsReference{};
}

FKawaiiPhysicsReference UKawaiiPhysicsLibrary::SetGravity(const FKawaiiPhysicsReference& KawaiiPhysics, FVector Gravity) {
    return FKawaiiPhysicsReference{};
}

void UKawaiiPhysicsLibrary::SetExternalForceWildcardProperty(EKawaiiPhysicsAccessExternalForceResult& ExecResult, const FKawaiiPhysicsReference& KawaiiPhysics, int32 ExternalForceIndex, FName PropertyName, const int32& Value) {
}

FKawaiiPhysicsReference UKawaiiPhysicsLibrary::SetExternalForceVectorProperty(EKawaiiPhysicsAccessExternalForceResult& ExecResult, const FKawaiiPhysicsReference& KawaiiPhysics, int32 ExternalForceIndex, FName PropertyName, FVector Value) {
    return FKawaiiPhysicsReference{};
}

FKawaiiPhysicsReference UKawaiiPhysicsLibrary::SetExternalForceTransformProperty(EKawaiiPhysicsAccessExternalForceResult& ExecResult, const FKawaiiPhysicsReference& KawaiiPhysics, int32 ExternalForceIndex, FName PropertyName, FTransform Value) {
    return FKawaiiPhysicsReference{};
}

FKawaiiPhysicsReference UKawaiiPhysicsLibrary::SetExternalForceRotatorProperty(EKawaiiPhysicsAccessExternalForceResult& ExecResult, const FKawaiiPhysicsReference& KawaiiPhysics, int32 ExternalForceIndex, FName PropertyName, FRotator Value) {
    return FKawaiiPhysicsReference{};
}

FKawaiiPhysicsReference UKawaiiPhysicsLibrary::SetExternalForceIntProperty(EKawaiiPhysicsAccessExternalForceResult& ExecResult, const FKawaiiPhysicsReference& KawaiiPhysics, int32 ExternalForceIndex, FName PropertyName, int32 Value) {
    return FKawaiiPhysicsReference{};
}

FKawaiiPhysicsReference UKawaiiPhysicsLibrary::SetExternalForceFloatProperty(EKawaiiPhysicsAccessExternalForceResult& ExecResult, const FKawaiiPhysicsReference& KawaiiPhysics, int32 ExternalForceIndex, FName PropertyName, float Value) {
    return FKawaiiPhysicsReference{};
}

FKawaiiPhysicsReference UKawaiiPhysicsLibrary::SetExternalForceBoolProperty(EKawaiiPhysicsAccessExternalForceResult& ExecResult, const FKawaiiPhysicsReference& KawaiiPhysics, int32 ExternalForceIndex, FName PropertyName, bool Value) {
    return FKawaiiPhysicsReference{};
}

FKawaiiPhysicsReference UKawaiiPhysicsLibrary::SetExcludeBoneNames(const FKawaiiPhysicsReference& KawaiiPhysics, TArray<FName>& ExcludeBoneNames) {
    return FKawaiiPhysicsReference{};
}

FKawaiiPhysicsReference UKawaiiPhysicsLibrary::SetEnableWind(const FKawaiiPhysicsReference& KawaiiPhysics, bool bEnableWind) {
    return FKawaiiPhysicsReference{};
}

FKawaiiPhysicsReference UKawaiiPhysicsLibrary::SetDummyBoneLength(const FKawaiiPhysicsReference& KawaiiPhysics, float DummyBoneLength) {
    return FKawaiiPhysicsReference{};
}

FKawaiiPhysicsReference UKawaiiPhysicsLibrary::SetAllowWorldCollision(const FKawaiiPhysicsReference& KawaiiPhysics, bool bAllowWorldCollision) {
    return FKawaiiPhysicsReference{};
}

FKawaiiPhysicsReference UKawaiiPhysicsLibrary::ResetDynamics(const FKawaiiPhysicsReference& KawaiiPhysics) {
    return FKawaiiPhysicsReference{};
}

bool UKawaiiPhysicsLibrary::RemoveExternalForcesFromComponent(USkeletalMeshComponent* MeshComp, UObject* Owner, FGameplayTagContainer& FilterTags, bool bFilterExactMatch) {
    return false;
}

float UKawaiiPhysicsLibrary::GetWindScale(const FKawaiiPhysicsReference& KawaiiPhysics) {
    return 0.0f;
}

float UKawaiiPhysicsLibrary::GetTeleportRotationThreshold(const FKawaiiPhysicsReference& KawaiiPhysics) {
    return 0.0f;
}

float UKawaiiPhysicsLibrary::GetTeleportDistanceThreshold(const FKawaiiPhysicsReference& KawaiiPhysics) {
    return 0.0f;
}

FName UKawaiiPhysicsLibrary::GetRootBoneName(const FKawaiiPhysicsReference& KawaiiPhysics) {
    return NAME_None;
}

FKawaiiPhysicsSettings UKawaiiPhysicsLibrary::GetPhysicsSettings(const FKawaiiPhysicsReference& KawaiiPhysics) {
    return FKawaiiPhysicsSettings{};
}

bool UKawaiiPhysicsLibrary::GetNeedWarmUp(const FKawaiiPhysicsReference& KawaiiPhysics) {
    return false;
}

UKawaiiPhysicsLimitsDataAsset* UKawaiiPhysicsLibrary::GetLimitsDataAsset(const FKawaiiPhysicsReference& KawaiiPhysics) {
    return NULL;
}

FVector UKawaiiPhysicsLibrary::GetGravity(const FKawaiiPhysicsReference& KawaiiPhysics) {
    return FVector{};
}

void UKawaiiPhysicsLibrary::GetExternalForceWildcardProperty(EKawaiiPhysicsAccessExternalForceResult& ExecResult, const FKawaiiPhysicsReference& KawaiiPhysics, int32 ExternalForceIndex, FName PropertyName, int32& Value) {
}

FVector UKawaiiPhysicsLibrary::GetExternalForceVectorProperty(EKawaiiPhysicsAccessExternalForceResult& ExecResult, const FKawaiiPhysicsReference& KawaiiPhysics, int32 ExternalForceIndex, FName PropertyName) {
    return FVector{};
}

FTransform UKawaiiPhysicsLibrary::GetExternalForceTransformProperty(EKawaiiPhysicsAccessExternalForceResult& ExecResult, const FKawaiiPhysicsReference& KawaiiPhysics, int32 ExternalForceIndex, FName PropertyName) {
    return FTransform{};
}

FRotator UKawaiiPhysicsLibrary::GetExternalForceRotatorProperty(EKawaiiPhysicsAccessExternalForceResult& ExecResult, const FKawaiiPhysicsReference& KawaiiPhysics, int32 ExternalForceIndex, FName PropertyName) {
    return FRotator{};
}

int32 UKawaiiPhysicsLibrary::GetExternalForceIntProperty(EKawaiiPhysicsAccessExternalForceResult& ExecResult, const FKawaiiPhysicsReference& KawaiiPhysics, int32 ExternalForceIndex, FName PropertyName) {
    return 0;
}

float UKawaiiPhysicsLibrary::GetExternalForceFloatProperty(EKawaiiPhysicsAccessExternalForceResult& ExecResult, const FKawaiiPhysicsReference& KawaiiPhysics, int32 ExternalForceIndex, FName PropertyName) {
    return 0.0f;
}

bool UKawaiiPhysicsLibrary::GetExternalForceBoolProperty(EKawaiiPhysicsAccessExternalForceResult& ExecResult, const FKawaiiPhysicsReference& KawaiiPhysics, int32 ExternalForceIndex, FName PropertyName) {
    return false;
}

TArray<FName> UKawaiiPhysicsLibrary::GetExcludeBoneNames(const FKawaiiPhysicsReference& KawaiiPhysics) {
    return TArray<FName>();
}

bool UKawaiiPhysicsLibrary::GetEnableWind(const FKawaiiPhysicsReference& KawaiiPhysics) {
    return false;
}

float UKawaiiPhysicsLibrary::GetDummyBoneLength(const FKawaiiPhysicsReference& KawaiiPhysics) {
    return 0.0f;
}

bool UKawaiiPhysicsLibrary::GetAllowWorldCollision(const FKawaiiPhysicsReference& KawaiiPhysics) {
    return false;
}

void UKawaiiPhysicsLibrary::ConvertToKawaiiPhysicsPure(const FAnimNodeReference& Node, FKawaiiPhysicsReference& KawaiiPhysics, bool& Result) {
}

FKawaiiPhysicsReference UKawaiiPhysicsLibrary::ConvertToKawaiiPhysics(const FAnimNodeReference& Node, EAnimNodeReferenceConversionResult& Result) {
    return FKawaiiPhysicsReference{};
}

FKawaiiPhysicsReference UKawaiiPhysicsLibrary::AddExternalForceWithExecResult(EKawaiiPhysicsAccessExternalForceResult& ExecResult, const FKawaiiPhysicsReference& KawaiiPhysics, FInstancedStruct& ExternalForce, UObject* Owner) {
    return FKawaiiPhysicsReference{};
}

bool UKawaiiPhysicsLibrary::AddExternalForcesToComponent(USkeletalMeshComponent* MeshComp, TArray<FInstancedStruct>& ExternalForces, UObject* Owner, FGameplayTagContainer& FilterTags, bool bFilterExactMatch, bool bIsOneShot) {
    return false;
}

bool UKawaiiPhysicsLibrary::AddExternalForce(const FKawaiiPhysicsReference& KawaiiPhysics, FInstancedStruct& ExternalForce, UObject* Owner, bool bIsOneShot) {
    return false;
}


