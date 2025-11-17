#include "GameFeatureAction_AddWPContent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ContentBundleDescriptor -FallbackName=ContentBundleDescriptor

UGameFeatureAction_AddWPContent::UGameFeatureAction_AddWPContent() {
    this->ContentBundleDescriptor = CreateDefaultSubobject<UContentBundleDescriptor>(TEXT("ContentBundleDescriptor"));
}


