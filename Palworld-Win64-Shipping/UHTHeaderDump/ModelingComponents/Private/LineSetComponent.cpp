#include "LineSetComponent.h"

ULineSetComponent::ULineSetComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bSelectable = false;
    this->CastShadow = false;
    this->LineMaterial = NULL;
    this->bBoundsDirty = true;
}


