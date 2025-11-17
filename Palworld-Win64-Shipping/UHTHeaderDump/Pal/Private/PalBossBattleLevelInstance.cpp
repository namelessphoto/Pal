#include "PalBossBattleLevelInstance.h"

APalBossBattleLevelInstance::APalBossBattleLevelInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsLoaded = false;
    this->Difficulty = EPalBossBattleDifficulty::None;
}






void APalBossBattleLevelInstance::BossSpawned(APalCharacter* SpawnedCharacter) {
}


