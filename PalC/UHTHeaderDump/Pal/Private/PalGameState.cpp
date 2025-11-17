#include "PalGameState.h"

APalGameState::APalGameState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NetDormancy = ENetDormancy::DORM_Never;
}


