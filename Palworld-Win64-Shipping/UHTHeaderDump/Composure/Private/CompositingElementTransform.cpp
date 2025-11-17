#include "CompositingElementTransform.h"

UCompositingElementTransform::UCompositingElementTransform() {
    this->bIntermediate = true;
}

UTexture* UCompositingElementTransform::FindNamedPrePassResult(FName PassLookupName) {
    return NULL;
}

UTexture* UCompositingElementTransform::ApplyTransform_Implementation(UTexture* Input, UComposurePostProcessingPassProxy* PostProcessProxy, ACameraActor* TargetCamera) {
    return NULL;
}


