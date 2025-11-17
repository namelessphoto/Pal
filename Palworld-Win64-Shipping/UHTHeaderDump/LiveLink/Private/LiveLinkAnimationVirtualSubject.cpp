#include "LiveLinkAnimationVirtualSubject.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=LiveLinkInterface -ObjectName=LiveLinkAnimationRole -FallbackName=LiveLinkAnimationRole

ULiveLinkAnimationVirtualSubject::ULiveLinkAnimationVirtualSubject() {
    this->Role = ULiveLinkAnimationRole::StaticClass();
    this->bAppendSubjectNameToBones = false;
}


