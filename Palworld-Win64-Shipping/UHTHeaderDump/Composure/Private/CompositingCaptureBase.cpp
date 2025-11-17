#include "CompositingCaptureBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneCaptureComponent2D -FallbackName=SceneCaptureComponent2D

ACompositingCaptureBase::ACompositingCaptureBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    const FProperty* p_CompShotIdName = GetClass()->FindPropertyByName("CompShotIdName");
    (*p_CompShotIdName->ContainerPtrToValuePtr<FName>(this)) = TEXT("Default__CompositingCaptureBase");
    this->SceneCaptureComponent2D = CreateDefaultSubobject<USceneCaptureComponent2D>(TEXT("SceneCaptureComponent"));
    this->bApplyDistortion = false;
    this->OverscanFactor = 1.00f;
    this->OriginalFocalLength = 35.00f;
    this->LastDistortionMID = NULL;
    this->SceneCaptureComponent2D->SetupAttachment(RootComponent);
}

void ACompositingCaptureBase::UpdateDistortion() {
}


