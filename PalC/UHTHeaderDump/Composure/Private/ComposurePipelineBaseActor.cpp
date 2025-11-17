#include "ComposurePipelineBaseActor.h"

AComposurePipelineBaseActor::AComposurePipelineBaseActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoRun = true;
    this->bAutoRunChildElementsAndSelf = true;
}

void AComposurePipelineBaseActor::SetAutoRunChildrenAndSelf(bool bAutoRunChildAndSelf) {
}

void AComposurePipelineBaseActor::SetAutoRun(bool bNewAutoRunVal) {
}

bool AComposurePipelineBaseActor::IsActivelyRunning_Implementation() const {
    return false;
}

void AComposurePipelineBaseActor::EnqueueRendering_Implementation(bool bCameraCutThisFrame) {
}

bool AComposurePipelineBaseActor::AreChildrenAndSelfAutoRun() const {
    return false;
}


