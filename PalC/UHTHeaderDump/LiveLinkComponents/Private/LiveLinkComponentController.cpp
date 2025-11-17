#include "LiveLinkComponentController.h"

ULiveLinkComponentController::ULiveLinkComponentController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUpdateInEditor = true;
    this->bDisableEvaluateLiveLinkWhenSpawnable = true;
    this->bEvaluateLiveLink = true;
    this->bUpdateInPreviewEditor = false;
}

void ULiveLinkComponentController::SetSubjectRepresentation(FLiveLinkSubjectRepresentation InSubjectRepresentation) {
}

FLiveLinkSubjectRepresentation ULiveLinkComponentController::GetSubjectRepresentation() const {
    return FLiveLinkSubjectRepresentation{};
}


