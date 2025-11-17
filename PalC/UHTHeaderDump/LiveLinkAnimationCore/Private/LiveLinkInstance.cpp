#include "LiveLinkInstance.h"
#include "Templates/SubclassOf.h"

ULiveLinkInstance::ULiveLinkInstance() {
    this->CurrentRetargetAsset = NULL;
}

void ULiveLinkInstance::SetSubject(FLiveLinkSubjectName SubjectName) {
}

void ULiveLinkInstance::SetRetargetAsset(TSubclassOf<ULiveLinkRetargetAsset> RetargetAsset) {
}


