#include "FoliageType_Actor.h"
#include "FoliageInstancedStaticMeshComponent.h"

UFoliageType_Actor::UFoliageType_Actor() {
    this->actorClass = NULL;
    this->bShouldAttachToBaseComponent = true;
    this->bStaticMeshOnly = false;
    this->StaticMeshOnlyComponentClass = UFoliageInstancedStaticMeshComponent::StaticClass();
}


