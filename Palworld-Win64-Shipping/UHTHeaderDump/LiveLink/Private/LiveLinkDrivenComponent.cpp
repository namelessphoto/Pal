#include "LiveLinkDrivenComponent.h"

UDEPRECATED_LiveLinkDrivenComponent::UDEPRECATED_LiveLinkDrivenComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->bModifyActorTransform = false;
    this->bSetRelativeLocation = false;
}


