#include "BaseDynamicMeshComponent.h"

UBaseDynamicMeshComponent::UBaseDynamicMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bExplicitShowWireframe = false;
    this->ColorMode = EDynamicMeshComponentColorOverrideMode::None;
    this->bEnableFlatShading = false;
    this->bEnableViewModeOverrides = true;
    this->OverrideRenderMaterial = NULL;
    this->SecondaryRenderMaterial = NULL;
    this->bEnableRayTracing = true;
}

void UBaseDynamicMeshComponent::SetViewModeOverridesEnabled(bool bEnabled) {
}

void UBaseDynamicMeshComponent::SetShadowsEnabled(bool bEnabled) {
}

void UBaseDynamicMeshComponent::SetSecondaryRenderMaterial(UMaterialInterface* Material) {
}

void UBaseDynamicMeshComponent::SetSecondaryBuffersVisibility(bool bSetVisible) {
}

void UBaseDynamicMeshComponent::SetOverrideRenderMaterial(UMaterialInterface* Material) {
}

void UBaseDynamicMeshComponent::SetEnableWireframeRenderPass(bool bEnable) {
}

void UBaseDynamicMeshComponent::SetEnableRaytracing(bool bSetEnabled) {
}

void UBaseDynamicMeshComponent::SetEnableFlatShading(bool bEnable) {
}

void UBaseDynamicMeshComponent::SetConstantOverrideColor(FColor NewColor) {
}

void UBaseDynamicMeshComponent::SetColorOverrideMode(EDynamicMeshComponentColorOverrideMode NewMode) {
}

bool UBaseDynamicMeshComponent::HasOverrideRenderMaterial(int32 K) const {
    return false;
}

bool UBaseDynamicMeshComponent::GetViewModeOverridesEnabled() const {
    return false;
}

bool UBaseDynamicMeshComponent::GetShadowsEnabled() const {
    return false;
}

UMaterialInterface* UBaseDynamicMeshComponent::GetSecondaryRenderMaterial() const {
    return NULL;
}

bool UBaseDynamicMeshComponent::GetSecondaryBuffersVisibility() const {
    return false;
}

UMaterialInterface* UBaseDynamicMeshComponent::GetOverrideRenderMaterial(int32 MaterialIndex) const {
    return NULL;
}

bool UBaseDynamicMeshComponent::GetFlatShadingEnabled() const {
    return false;
}

bool UBaseDynamicMeshComponent::GetEnableWireframeRenderPass() const {
    return false;
}

bool UBaseDynamicMeshComponent::GetEnableRaytracing() const {
    return false;
}

UDynamicMesh* UBaseDynamicMeshComponent::GetDynamicMesh() {
    return NULL;
}

FColor UBaseDynamicMeshComponent::GetConstantOverrideColor() const {
    return FColor{};
}

EDynamicMeshComponentColorOverrideMode UBaseDynamicMeshComponent::GetColorOverrideMode() const {
    return EDynamicMeshComponentColorOverrideMode::None;
}

void UBaseDynamicMeshComponent::ClearSecondaryRenderMaterial() {
}

void UBaseDynamicMeshComponent::ClearOverrideRenderMaterial() {
}


