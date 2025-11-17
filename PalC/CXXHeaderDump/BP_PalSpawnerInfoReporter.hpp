#ifndef UE4SS_SDK_BP_PalSpawnerInfoReporter_HPP
#define UE4SS_SDK_BP_PalSpawnerInfoReporter_HPP

class ABP_PalSpawnerInfoReporter_C : public APalDebug_SpawnInfoReporter
{
    class USceneComponent* DefaultSceneRoot;

    FString GetDebugInfoString(class APalNPCSpawnerBase* Spawner);
};

#endif
