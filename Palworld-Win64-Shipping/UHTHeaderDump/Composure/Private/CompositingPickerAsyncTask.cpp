#include "CompositingPickerAsyncTask.h"

UCompositingPickerAsyncTask::UCompositingPickerAsyncTask() {
    this->PickerTarget = NULL;
    this->PickerDisplayImage = NULL;
}

UCompositingPickerAsyncTask* UCompositingPickerAsyncTask::OpenCompositingPicker(UTextureRenderTarget2D* NewPickerTarget, UTexture* DisplayImage, FText WindowTitle, const bool bAverageColorOnDrag, const bool bUseImplicitGamma) {
    return NULL;
}


