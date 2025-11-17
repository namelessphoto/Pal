#include "ComposureCompositingTargetComponent.h"

UComposureCompositingTargetComponent::UComposureCompositingTargetComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->DisplayTexture = NULL;
}

void UComposureCompositingTargetComponent::SetDisplayTexture(UTexture* NewDisplayTexture) {
}

UTexture* UComposureCompositingTargetComponent::GetDisplayTexture() const {
    return NULL;
}


