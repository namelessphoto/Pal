#include "PalSpringArmComponent.h"

UPalSpringArmComponent::UPalSpringArmComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->WaterProbeChannel = ECollisionChannel::ECC_MAX;
    this->PushDownOffsetOnSweepUpHit = 30;
}


