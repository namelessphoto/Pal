#include "TriangleSetComponent.h"

UTriangleSetComponent::UTriangleSetComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bSelectable = false;
    this->CastShadow = false;
    this->bBoundsDirty = true;
}


