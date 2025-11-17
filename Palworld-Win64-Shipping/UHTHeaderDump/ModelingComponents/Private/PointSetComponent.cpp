#include "PointSetComponent.h"

UPointSetComponent::UPointSetComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bSelectable = false;
    this->CastShadow = false;
    this->PointMaterial = NULL;
    this->bBoundsDirty = true;
}


