#include "LiveLinkBlueprintVirtualSubject.h"

ULiveLinkBlueprintVirtualSubject::ULiveLinkBlueprintVirtualSubject() {
}

bool ULiveLinkBlueprintVirtualSubject::UpdateVirtualSubjectStaticData_Internal(const FLiveLinkBaseStaticData& InStruct) {
    return false;
}

bool ULiveLinkBlueprintVirtualSubject::UpdateVirtualSubjectFrameData_Internal(const FLiveLinkBaseFrameData& InStruct, bool bInShouldStampCurrentTime) {
    return false;
}




